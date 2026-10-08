#!/usr/bin/env python3
"""The asset half of the model of the game: the asset registry joined with the cooked export.

  python scripts\\gamemodel\\assets.py [--workers N] [--slice N] [--force] [--reconvert] [--no-export]

Reads the registry out of the first pak, exports every blueprint-like package (see cooked.py; a finished
slice is not exported twice while the paks stay the same) and writes, for the installed game, or for the copy
of the game whose Paks folder --paks names (its build is read from the exe beside that folder):

  build\\game-model\\<build id>\\assets.json           every package with its asset class, every blueprint class
                                                     with its parents and what its cooked package holds,
                                                     user-defined structs and enums, native parents
  build\\game-model\\<build id>\\assets.summary.json   counts, times, sizes, what failed
  build\\game-model\\<build id>\\export\\               the raw exports, one JSON a package

Nothing is written when a slice did not finish; run again and it goes on from there. Exit code 0 means
complete, 2 written with something to look at (CHECK and FAILED lines), 1 not written.
"""
import argparse
import importlib
import json
import os
import sys
import time
from collections import Counter

build_id = importlib.import_module(__package__ + ".build_id" if __package__ else "build_id")
registry = importlib.import_module(__package__ + ".registry" if __package__ else "registry")
cooked = importlib.import_module(__package__ + ".cooked" if __package__ else "cooked")

FORMAT = 1
ASSETS = "assets.json"
SUMMARY = "assets.summary.json"
REFERENCE_KEYS = ("ref", "enum", "class", "owner", "overrides", "template", "within", "parent")
HEADER = ("format", "build", "source", "counts", "checks", "failed", "left_out", "extra_assets")


class AssetsError(Exception):
    pass


class Names:
    """Puts references in the registry's own spelling: names differ in letter case between files."""

    def __init__(self, reg, natives):
        self.objects = {asset[0].lower(): asset[0] for asset in reg.assets}
        self.packages = {asset[1].lower(): asset[1] for asset in reg.assets}
        self.natives = natives
        self.respelled = self.unknown = self.bare = self.placed = 0
        self.unknown_packages = Counter()

    def path(self, text):
        if not isinstance(text, str) or not text.startswith("/") or text.startswith("/Script/"):
            return text
        head, colon, tail = text.partition(":")
        found = self.objects.get(head.lower())
        if found is None:
            package, dot, name = head.partition(".")
            known = self.packages.get(package.lower())
            if known is None:
                self.unknown += 1
                self.unknown_packages[package] += 1
                return text
            found = known + dot + name
        if found != head:
            self.respelled += 1
        return found + colon + tail

    def native(self, text):
        """A native class given by bare name gets its module when another reference named it in full."""
        if not isinstance(text, str) or text.startswith("/"):
            return text
        found = self.natives.get(text)
        if found:
            self.placed += 1
            return found
        self.bare += 1
        return text

    def fix(self, value, top=True):
        if isinstance(value, list):
            for item in value:
                self.fix(item, top)
        elif isinstance(value, dict):
            for key, item in value.items():
                if isinstance(item, str):
                    if key in REFERENCE_KEYS and (key != "parent" or top) and item.startswith("/"):
                        value[key] = self.path(item)
                else:
                    self.fix(item, False)

    def classes_of(self, items):
        for item in items or []:
            if isinstance(item.get("class"), str):
                item["class"] = self.native(item["class"])
            self.classes_of(item.get("children"))


def count_widgets(node):
    return 1 + sum(count_widgets(child) for child in node.get("children") or []) if node else 0


def join(reg, result, left_out=None, build=None):
    """The registry and the records of the cooked export as one model. Nothing is read or written here."""
    left_out = left_out or {}
    registered = registry.blueprint_classes(reg)
    types = registry.user_types(reg)
    names = Names(reg, result.get("natives") or {})
    records = {}
    checks = []
    for record in result["records"]:
        key = record["path"].lower()
        if key in records:
            checks.append("%s was exported twice; the first record is kept" % record["path"])
            continue
        records[key] = record
    classes, structs, enums = [], [], []
    failed = dict(result.get("failed") or {})
    for path, facts in registered.items():
        record = records.pop(path.lower(), None)
        if record is None:
            record = {"path": path, "name": facts["name"], "package": facts["package"], "kind": facts["kind"],
                      "parent": facts["parent"], "exported": False,
                      "why": left_out.get(facts["package"]) or failed.get(facts["package"]) or "its package was not exported"}
        else:
            names.fix(record)
            record["path"] = path
            names.classes_of(record.get("subobjects"))
            names.classes_of(record.get("loose_widgets"))
            if record.get("widgets"):
                names.classes_of([record["widgets"]])
            if facts["parent"] and (record.get("parent") or "").lower() != facts["parent"].lower():
                checks.append("%s: its package says its parent is %s and the registry says %s" % (path, record.get("parent"), facts["parent"]))
        if "broken" in facts:
            checks.append("%s: %s" % (path, facts["broken"]))
        else:
            record["native"] = facts["native"]
        record["chain"] = facts["chain"]
        record["depth"] = facts["depth"]
        for key in ("level", "type", "data_only"):
            if key in facts:
                record[key] = facts[key]
        classes.append(record)
    for path, facts in types.items():
        record = records.pop(path.lower(), None)
        if record is None:
            record = {"path": path, "name": facts["name"], "package": facts["package"], "kind": facts["kind"], "exported": False,
                      "why": left_out.get(facts["package"]) or failed.get(facts["package"]) or "its package was not exported"}
        else:
            names.fix(record)
            record["path"] = path
        (structs if facts["kind"] == "struct" else enums).append(record)
    for record in records.values():
        checks.append("%s is in its package and not in the registry" % record["path"])
        record["unlisted"] = True
        names.fix(record)
        {"struct": structs, "enum": enums}.get(record["kind"], classes).append(record)
    for group in (classes, structs, enums):
        group.sort(key=lambda record: record["path"].lower())

    natives = {}
    for record in classes:
        if "native" not in record:
            continue
        entry = natives.setdefault(record["native"], {"children": 0, "descendants": 0, "subobjects": {}})
        entry["descendants"] += 1
        if not (record.get("parent") or "").startswith("/Script/"):
            continue
        entry["children"] += 1
        for inside in record.get("subobjects") or []:
            if not inside.get("default") or inside.get("template"):
                continue
            known = entry["subobjects"].setdefault(inside["name"], inside.get("class"))
            if known != inside.get("class"):
                checks.append("%s: its sub-object %s is a %s here and a %s in another child of %s" % (
                    record["path"], inside["name"], inside.get("class"), known, record["native"]))
    native_parents = {}
    for path in sorted(natives):
        entry = natives[path]
        native_parents[path] = {"children": entry["children"], "descendants": entry["descendants"]}
        if entry["subobjects"]:
            native_parents[path]["subobjects"] = [{"name": name, "class": cls} for name, cls in sorted(entry["subobjects"].items())]

    packages, extra = {}, {}
    for name, assets in reg.packages().items():
        plain = [asset for asset in assets if asset[3] not in registry.CLASS_KINDS] or assets
        leaf = name.rsplit("/", 1)[-1].lower()
        main = next((asset for asset in plain if asset[2].lower() == leaf), plain[0])
        packages[name] = main[3]
        others = [[asset[2], asset[3]] for asset in plain if asset is not main]
        if others:
            extra[name] = others

    exported = [record for record in classes if record.get("exported", True)]
    functions = [function for record in exported for function in record.get("functions") or []]
    counts = {
        "assets": len(reg.assets), "packages": len(packages), "asset_classes": len(set(asset[3] for asset in reg.assets)),
        "classes": len(classes), "classes_exported": len(exported),
        "level_blueprints": sum(1 for record in classes if record.get("level")),
        "kinds": dict(sorted(Counter(record["kind"] for record in classes).items())),
        "depths": dict(sorted(Counter(record["depth"] for record in classes if "depth" in record).items())),
        "native_parents": len(native_parents),
        "native_parents_without_level_blueprints": len({r["native"] for r in classes if "native" in r and not r.get("level")}),
        "native_classes_with_subobjects": sum(1 for entry in native_parents.values() if entry.get("subobjects")),
        "properties": sum(len(record.get("properties") or []) for record in exported),
        "functions": len(functions),
        "parameters": sum(len(function["params"]) + (1 if "returns" in function else 0) for function in functions),
        "locals": sum(function.get("locals", 0) for function in functions),
        "components": sum(len(record.get("components") or []) for record in exported),
        "component_overrides": sum(len(record.get("overrides") or []) for record in exported),
        "subobjects": sum(len(record.get("subobjects") or []) for record in exported),
        "widgets": sum(count_widgets(record.get("widgets")) for record in exported),
        "timelines": sum(len(record.get("timelines") or []) for record in exported),
        "structs": len(structs), "struct_fields": sum(len(record.get("fields") or []) for record in structs),
        "enums": len(enums), "enum_values": sum(len(record.get("values") or []) for record in enums),
        "references_respelled": names.respelled, "references_to_unknown_packages": names.unknown,
        "native_names_placed": names.placed, "native_names_without_module": names.bare,
    }
    if names.unknown:
        worst = ", ".join("%s (%d)" % pair for pair in names.unknown_packages.most_common(5))
        checks.append("%d references name a package the registry does not list: %s" % (names.unknown, worst))
    for package, why in sorted(failed.items()):
        checks.append("%s gave no record: %s" % (package, why))
    stats = result.get("stats") or {}
    source = {"registry": {"bytes": reg.size, "version": reg.version, "names": reg.name_count},
              "tool": stats.get("tool"), "packages_exported": stats.get("packages")}
    return {"format": FORMAT, "build": build or {}, "source": source, "counts": counts, "checks": checks,
            "failed": failed, "left_out": dict(sorted(left_out.items())), "extra_assets": extra,
            "packages": dict(sorted(packages.items())), "native_parents": native_parents,
            "classes": classes, "structs": structs, "enums": enums}


def write_assets(model, path):
    """One package, parent and record to a line, so two builds can be compared line by line."""
    def text(value):
        return json.dumps(value, ensure_ascii=False, separators=(",", ":"))

    os.makedirs(os.path.dirname(os.path.abspath(path)), exist_ok=True)
    scratch = path + ".part"
    with open(scratch, "w", encoding="utf-8", newline="\n") as file:
        file.write("{\n")
        for key in HEADER:
            file.write('"%s":%s,\n' % (key, text(model[key])))
        for key in ("packages", "native_parents"):
            file.write('"%s":{\n' % key)
            file.write(",\n".join("%s:%s" % (text(name), text(value)) for name, value in model[key].items()))
            file.write("\n},\n")
        for at, key in enumerate(("classes", "structs", "enums")):
            file.write('"%s":[\n' % key)
            file.write(",\n".join(text(record) for record in model[key]))
            file.write("\n]%s\n" % ("," if at < 2 else ""))
        file.write("}\n")
    os.replace(scratch, path)
    return os.path.getsize(path)


def load_assets(path):
    with open(path, encoding="utf-8") as file:
        return json.load(file)


def build(paks=None, model_dir=None, workers=cooked.MAX_WORKERS, size=cooked.SLICE, force=False, reconvert=False,
          export=True, tool=None, registry_file=None, files=None, info=None, memory_limit_mb=cooked.MEMORY_LIMIT_MB,
          version=None, log=None):
    """Registry, export, join and both files. Gives (model, summary); raises AssetsError when a slice did not finish."""
    log = log or (lambda text: None)
    started = time.time()
    if info is None:
        # The build is the one the paks belong to, not the one that happens to be installed.
        info = build_id.read_for(paks, named=model_dir is None)
    paks = paks or build_id.paks_dir()
    model_dir = model_dir or os.path.join(build_id.MODEL_DIR, info["id"])
    reg = registry.load(paks, registry_file)
    content = cooked.paks_id(paks, reg.digest)
    info = dict(info, paks=content)
    for key, value in (("project_version", cooked.project_version(paks)),
                       ("steam_build", build_id.steam_build(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(paks))))))):
        if value:
            info[key] = value
    registry_seconds = time.time() - started
    listed = time.time()
    index = cooked.PakIndex(cooked.list_paks(paks) if files is None else files)
    entries, left_out = cooked.wanted(reg, index)
    listing_seconds = time.time() - listed
    log("%d assets in the registry; %d packages to export, %d left out" % (len(reg.assets), len(entries), len(left_out)))
    run = cooked.Export(model_dir, paks, index.mounts, tool=tool, workers=workers, memory_limit_mb=memory_limit_mb,
                        version=version, log=log, content=content)
    result = run.run(entries, size, force, reconvert, offline=not export)
    stats = result["stats"]
    if stats["unfinished"]:
        first = sorted(stats["unfinished"].items())[0]
        raise AssetsError("%d of %d slices are not done, so nothing was written. Slice %s: %s" % (
            len(stats["unfinished"]), stats["slices"], first[0], first[1]))
    joined = time.time()
    model = join(reg, result, left_out, info)
    if not info.get("id"):
        model["checks"].append("no exe beside %s, so this model does not say which build it is of" % paks)
    join_seconds = time.time() - joined
    written = time.time()
    size_bytes = write_assets(model, os.path.join(model_dir, ASSETS))
    export_bytes, export_files = cooked.folder_size(run.export_dir)
    summary = {
        "format": FORMAT, "build": info, "written": time.strftime("%Y-%m-%d %H:%M"), "counts": model["counts"],
        "checks": model["checks"], "failed": model["failed"], "left_out": len(model["left_out"]),
        "files": {"assets_json_bytes": size_bytes, "export_bytes": export_bytes, "export_files": export_files},
        "seconds": {"all": round(time.time() - started, 1), "registry": round(registry_seconds, 1),
                    "pak_listing": round(listing_seconds, 1), "export_and_read": stats["seconds"],
                    "tools_added_up": stats["tool_seconds"], "reading_added_up": stats["convert_seconds"],
                    "join": round(join_seconds, 1), "write": round(time.time() - written, 1)},
        "run": {key: stats[key] for key in ("slices", "slice_size", "workers", "exported_slices", "converted_slices",
                                            "kept_slices", "tool", "tool_peak_mb")},
    }
    summary["run"]["python_peak_mb"] = cooked.peak_memory_mb()
    cooked.write_json(os.path.join(model_dir, SUMMARY), summary)
    return model, summary


def report(summary, log=print):
    counts, files, seconds, run = summary["counts"], summary["files"], summary["seconds"], summary["run"]
    log("build %s" % summary["build"].get("id"))
    log("%d assets in %d packages; %d blueprint classes (%d exported, %d level blueprints), %d native parents" % (
        counts["assets"], counts["packages"], counts["classes"], counts["classes_exported"], counts["level_blueprints"],
        counts["native_parents"]))
    log("%d properties, %d functions with %d parameters, %d components, %d component overrides, %d widgets" % (
        counts["properties"], counts["functions"], counts["parameters"], counts["components"],
        counts["component_overrides"], counts["widgets"]))
    log("%d structs with %d fields, %d enums with %d values, %d native classes with known sub-objects" % (
        counts["structs"], counts["struct_fields"], counts["enums"], counts["enum_values"],
        counts["native_classes_with_subobjects"]))
    log("assets.json %.1f MB; export %.1f MB in %d files" % (
        files["assets_json_bytes"] / 1e6, files["export_bytes"] / 1e6, files["export_files"]))
    log("%.1f s in all: export and reading %.1f s with %d at a time (%d slices exported, %d read again, %d kept), join %.1f s, write %.1f s" % (
        seconds["all"], seconds["export_and_read"], run["workers"], run["exported_slices"], run["converted_slices"],
        run["kept_slices"], seconds["join"], seconds["write"]))
    log("memory: an export tool up to %s MB, Python up to %s MB" % (run["tool_peak_mb"], run["python_peak_mb"]))
    for line in summary["checks"][:40]:
        log("CHECK " + line)
    if len(summary["checks"]) > 40:
        log("CHECK ... and %d more, all in %s" % (len(summary["checks"]) - 40, SUMMARY))


def main(argv=None):
    parser = argparse.ArgumentParser(description="Write the asset half of the model of the game.")
    parser.add_argument("--paks", help="the Paks folder of a copy of the game (the installed game when left out); "
                        "the build is read from the exe beside it")
    parser.add_argument("--out", help="the model folder (build\\game-model\\<build id> when left out)")
    parser.add_argument("--workers", type=int, default=cooked.MAX_WORKERS, help="export tools at a time, 1 to %d" % cooked.MAX_WORKERS)
    parser.add_argument("--slice", type=int, default=cooked.SLICE, help="packages a slice")
    parser.add_argument("--force", action="store_true", help="export everything again")
    parser.add_argument("--reconvert", action="store_true", help="read the kept exports again")
    parser.add_argument("--no-export", action="store_true", help="never start the export tool; fail if a slice is missing")
    args = parser.parse_args(argv)
    cooked.lower_own_priority()
    try:
        _model, summary = build(args.paks, args.out, args.workers, args.slice, args.force, args.reconvert,
                                not args.no_export, log=print)
    except (AssetsError, cooked.CookedError, registry.RegistryError, build_id.BuildIdError, OSError) as error:
        print(error, file=sys.stderr)
        return 1
    report(summary)
    return 2 if summary["checks"] else 0


if __name__ == "__main__":
    sys.exit(main())
