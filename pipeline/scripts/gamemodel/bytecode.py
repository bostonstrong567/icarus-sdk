#!/usr/bin/env python3
"""Which functions the game's blueprint code calls, read from the cooked packages.

  python scripts\\gamemodel\\bytecode.py [--paks DIR] [--out DIR] [--slice N] [--force] [--only TEXT]

The export the asset half reads holds no bytecode. This reader unpacks the blueprint packages a slice at a
time (repak) into build\\game-model\\<build id>\\cooked, runs tools\\assets\\kismet-analyzer over them, keeps
from its JSON only what each function calls and deletes the rest. It writes, beside assets.json:

  build\\game-model\\<build id>\\bytecode.json
      functions   {function path: {"calls": [paths], "virtual": [names]}}
                  calls: what the code calls by path (EX_FinalFunction, EX_LocalFinalFunction, EX_CallMath)
                  virtual: the names it calls on whatever object is at hand (EX_VirtualFunction,
                  EX_LocalVirtualFunction); the function that runs is only known in the game
      failed      {package: why it gave nothing}

model.py reads the file when it is there and gives each blueprint function its two lists; write.py then makes
blueprint_calls.lua. A finished slice is kept in bytecode-slices and is not run twice while the paks and the
tool stay the same. The tools run below normal priority, one at a time; the game folder is only read.

Exit code 0 means complete, 2 written with packages that gave nothing (FAILED lines), 1 not written.
"""
import argparse
import importlib
import json
import os
import shutil
import subprocess
import sys
import time

build_id = importlib.import_module(__package__ + ".build_id" if __package__ else "build_id")
registry = importlib.import_module(__package__ + ".registry" if __package__ else "registry")
cooked = importlib.import_module(__package__ + ".cooked" if __package__ else "cooked")

ROOT = build_id.ROOT
TOOL = os.path.join(ROOT, "tools", "assets", "kismet-analyzer", "kismet-analyzer.exe")
FORMAT = 1
BYTECODE = "bytecode.json"
SLICE = 400
SLICE_TIMEOUT = 1800
# One command line of Windows holds 32,767 characters.
COMMAND_LIMIT = 24000
OUTER_LIMIT = 32
BY_PATH = {"EX_FinalFunction", "EX_LocalFinalFunction", "EX_CallMath"}
BY_NAME = {"EX_VirtualFunction", "EX_LocalVirtualFunction"}
EXPRESSION = ".Expressions."


class BytecodeError(Exception):
    pass


def tool_version():
    try:
        with open(os.path.join(ROOT, "tools", ".versions.json"), encoding="utf-8-sig") as file:
            return "kismet-analyzer " + str(json.load(file).get("assets\\kismet-analyzer", "")).strip()
    except (OSError, ValueError):
        return "kismet-analyzer"


def expression(node):
    """EX_CallMath out of "UAssetAPI.Kismet.Bytecode.Expressions.EX_CallMath, UAssetAPI"; None for anything else."""
    kind = node.get("$type")
    if not isinstance(kind, str) or EXPRESSION not in kind:
        return None
    return kind.split(EXPRESSION, 1)[1].split(",", 1)[0]


def object_path(asset, index, package):
    """The path of what a package index names: an import by its outers (negative), an object of this package (positive)."""
    names, local = [], index > 0
    for _ in range(OUTER_LIMIT):
        if not index:
            break
        one = asset["Imports"][-index - 1] if index < 0 else asset["Exports"][index - 1]
        names.append(str(one["ObjectName"]))
        index = one["OuterIndex"]
    else:
        raise ValueError("an object sits more than %d objects deep" % OUTER_LIMIT)
    if local:
        names.append(package)
    names.reverse()
    path = names[0]
    if len(names) > 1:
        path += "." + names[1]
    if len(names) > 2:
        path += ":" + ".".join(names[2:])
    return path


def calls_in(bytecode):
    """(package indexes called by path, names called by name) anywhere in one function's expressions."""
    by_path, by_name = set(), set()
    stack = [bytecode]
    while stack:
        node = stack.pop()
        if isinstance(node, list):
            stack.extend(node)
        elif isinstance(node, dict):
            kind = expression(node)
            if kind in BY_PATH:
                target = node.get("StackNode")
                if isinstance(target, dict):
                    target = target.get("Index")
                if isinstance(target, int) and target:
                    by_path.add(target)
            elif kind in BY_NAME:
                name = node.get("VirtualFunctionName")
                if isinstance(name, dict):
                    name = name.get("Value")
                if isinstance(name, str) and name:
                    by_name.add(name)
            stack.extend(value for value in node.values() if isinstance(value, (dict, list)))
    return by_path, by_name


def calls_of(asset, package):
    """(functions, unread): {function path: {"calls": [...], "virtual": [...]}} of one package, and the functions
    whose code the tool could not turn into expressions, which are left out so that they count as not read."""
    functions, unread = {}, []
    for number, export in enumerate(asset.get("Exports") or [], 1):
        if "FunctionExport" not in str(export.get("$type")):
            continue
        path = object_path(asset, number, package)
        code = export.get("ScriptBytecode")
        if code is None and export.get("ScriptBytecodeSize"):
            unread.append(path)
            continue
        by_path, by_name = calls_in(code or [])
        functions[path] = {"calls": sorted({object_path(asset, index, package) for index in by_path}),
                           "virtual": sorted(by_name)}
    return functions, unread


def list_paks(paks, repak=None):
    """(every listed file, {file in lower case: the pak that holds it}); the first pak by name wins, as in cooked.PakIndex."""
    names = sorted(name for name in os.listdir(paks) if name.lower().endswith(".pak"))
    if not names:
        raise BytecodeError("%s holds no pak." % paks)
    files, where = [], {}
    for name in names:
        done = subprocess.run([repak or registry.REPAK, "list", os.path.join(paks, name)], capture_output=True,
                              creationflags=flags())
        if done.returncode != 0:
            raise BytecodeError("repak could not list %s: %s" % (name, done.stderr.decode("utf-8", "replace").strip()[:300]))
        for line in done.stdout.decode("utf-8", "replace").splitlines():
            line = line.strip()
            if line.lower().endswith((".uasset", ".umap", ".uexp", ".uplugin", ".uproject")):
                where.setdefault(line.lower(), name)
                if not line.lower().endswith(".uexp"):
                    files.append(line)
    return files, where


def flags():
    return (cooked.BELOW_NORMAL | cooked.NO_WINDOW) if os.name == "nt" else 0


def wanted(reg, index, where):
    """(what to read, what is left out): blueprint packages as [{package, file, pak}] sorted by pak, and {package: why}."""
    classes = registry.blueprint_classes(reg)
    entries, left_out = cooked.wanted(reg, index, classes)
    blueprints = {record["package"] for record in classes.values()}
    out = []
    for entry in entries:
        if entry["package"] not in blueprints:
            continue
        pak = where.get((entry["file"] + ".uasset").lower())
        if pak is None:
            left_out[entry["package"]] = cooked.NO_FILE
        else:
            out.append(dict(entry, pak=pak))
    out.sort(key=lambda entry: (entry["pak"].lower(), entry["file"].lower()))
    return out, left_out


class Reader:
    """One run over the slices. tool and repak are the commands that start the two tools, as lists."""

    def __init__(self, model_dir, paks, where, tool=None, repak=None, timeout=SLICE_TIMEOUT, version=None, content="",
                 log=None):
        self.model_dir, self.paks, self.where = model_dir, paks, where
        self.work_dir = os.path.join(model_dir, "cooked")
        self.slice_dir = os.path.join(model_dir, "bytecode-slices")
        self.tool = list(tool) if tool else [TOOL]
        self.repak = list(repak) if repak else [registry.REPAK]
        self.timeout = timeout
        self.version = tool_version() if version is None else version
        self.content = content
        self.log = log or (lambda text: None)

    def run_tool(self, command, log_file):
        with open(log_file, "ab") as output:
            try:
                return subprocess.run(command, stdout=output, stderr=subprocess.STDOUT, stdin=subprocess.DEVNULL,
                                      creationflags=flags(), timeout=self.timeout).returncode
            except subprocess.TimeoutExpired:
                return None

    def unpack(self, entries, folder, log_file):
        """The .uasset and .uexp of every entry, out of the paks that hold them, into folder."""
        groups = {}
        for entry in entries:
            for extension in (".uasset", ".uexp"):
                name = entry["file"] + extension
                pak = self.where.get(name.lower())
                if pak:
                    groups.setdefault(pak, []).append(name)
        def some(pak, batch):
            # Never without a file to include: repak would then unpack the whole pak.
            command = self.repak + ["unpack", "-q", "-f", "-o", folder]
            for one in batch:
                command += ["-i", one]
            code = self.run_tool(command + [os.path.join(self.paks, pak)], log_file)
            if code != 0:
                raise BytecodeError("repak %s on %s. Its output is in %s." % (
                    "did not finish" if code is None else "ended with code %s" % code, pak, log_file))

        for pak, names in sorted(groups.items()):
            batch, length = [], 0
            for name in names:
                if batch and length + len(name) + 6 > COMMAND_LIMIT:
                    some(pak, batch)
                    batch, length = [], 0
                batch.append(name)
                length += len(name) + 6
            if batch:
                some(pak, batch)

    def slice(self, number, entries, force=False):
        """One slice, kept or read now: {key, functions, failed, unread, from}."""
        key = cooked.slice_key(entries, self.version, self.content)
        stem = os.path.join(self.slice_dir, "%04d" % number)
        kept = None if force else cooked.read_json(stem + ".json")
        if kept and kept.get("key") == key and kept.get("format") == FORMAT:
            kept["from"] = "kept"
            return kept
        started = time.time()
        os.makedirs(self.slice_dir, exist_ok=True)
        source, target = os.path.join(self.work_dir, "%04d" % number, "in"), os.path.join(self.work_dir, "%04d" % number, "out")
        shutil.rmtree(os.path.dirname(source), ignore_errors=True)
        os.makedirs(source)
        os.makedirs(target)
        log_file = stem + ".log"
        open(log_file, "wb").close()
        functions, failed, unread = {}, {}, []
        try:
            self.unpack(entries, source, log_file)
            code = self.run_tool(self.tool + ["gen-json-tree", source, target], log_file)
            for entry in entries:
                path = os.path.join(target, *entry["file"].split("/")) + ".json"
                try:
                    with open(path, "rb") as file:
                        asset = json.loads(file.read().decode("utf-8-sig"))
                    found, missed = calls_of(asset, entry["package"])
                except OSError:
                    failed[entry["package"]] = "the tool wrote no file for it (%s)" % (
                        "it did not finish in %d seconds" % self.timeout if code is None else "it ended with code %s" % code)
                    continue
                except (ValueError, KeyError, IndexError, TypeError, AttributeError) as error:
                    failed[entry["package"]] = "its JSON has a shape this reader does not know (%s: %s)" % (type(error).__name__, error)
                    continue
                finally:
                    try:
                        os.remove(path)
                    except OSError:
                        pass
                functions.update(found)
                unread += missed
            if entries and len(failed) == len(entries) and code != 0:
                # A tool that broke is not written down as packages that hold no code.
                raise BytecodeError("The tool %s and gave nothing for slice %d. Its output is in %s." % (
                    "did not finish" if code is None else "ended with code %s" % code, number, log_file))
        finally:
            shutil.rmtree(os.path.dirname(source), ignore_errors=True)
        result = {"format": FORMAT, "key": key, "packages": len(entries), "functions": functions, "failed": failed,
                  "unread": unread, "seconds": round(time.time() - started, 1)}
        cooked.write_json(stem + ".json", result)
        result["from"] = "read"
        return result

    def run(self, entries, size=SLICE, force=False):
        """Every slice. Gives {functions, failed, unread, stats}; raises BytecodeError when a slice gave nothing."""
        started = time.time()
        parts = cooked.slices(entries, size)
        functions, failed, unread = {}, {}, []
        stats = {"packages": len(entries), "slices": len(parts), "slice_size": size, "tool": self.version,
                 "read_slices": 0, "kept_slices": 0}
        for number, part in enumerate(parts, 1):
            result = self.slice(number, part, force)
            functions.update(result["functions"])
            failed.update(result["failed"])
            unread += result.get("unread") or []
            stats["read_slices" if result["from"] == "read" else "kept_slices"] += 1
            self.log("slice %d of %d: %d packages, %d functions, %s%s" % (
                number, len(parts), result["packages"], len(result["functions"]), result["from"],
                ", %d failed" % len(result["failed"]) if result["failed"] else ""))
        try:
            os.rmdir(self.work_dir)
        except OSError:
            pass
        stats["seconds"] = round(time.time() - started, 1)
        return {"functions": functions, "failed": failed, "unread": unread, "stats": stats}


def write(found, path):
    """One function to a line, so two builds can be compared line by line."""
    def text(value):
        return json.dumps(value, ensure_ascii=False, separators=(",", ":"))

    os.makedirs(os.path.dirname(os.path.abspath(path)), exist_ok=True)
    scratch = path + ".part"
    with open(scratch, "w", encoding="utf-8", newline="\n") as file:
        file.write("{\n")
        for key in ("format", "build", "source", "counts", "failed", "unread"):
            file.write('"%s":%s,\n' % (key, text(found[key])))
        file.write('"functions":{\n')
        file.write(",\n".join("%s:%s" % (text(name), text(entry)) for name, entry in sorted(found["functions"].items())))
        file.write("\n}\n}\n")
    os.replace(scratch, path)
    return os.path.getsize(path)


def build(paks=None, model_dir=None, size=SLICE, force=False, only=None, tool=None, repak=None, registry_file=None,
          listing=None, info=None, version=None, log=None):
    """Lists, unpacks, reads and writes bytecode.json. Gives what was written, as a dict."""
    log = log or (lambda text: None)
    if info is None:
        info = build_id.read_for(paks, named=model_dir is None)
    paks = paks or build_id.paks_dir()
    model_dir = model_dir or os.path.join(build_id.MODEL_DIR, info["id"])
    reg = registry.load(paks, registry_file)
    content = cooked.paks_id(paks, reg.digest)
    files, where = list_paks(paks, repak and repak[0]) if listing is None else listing
    entries, left_out = wanted(reg, cooked.PakIndex(files), where)
    if only:
        entries = [entry for entry in entries if only.lower() in entry["package"].lower()]
    log("%d blueprint packages to read in %d slices; %d left out" % (len(entries), len(cooked.slices(entries, size)), len(left_out)))
    reader = Reader(model_dir, paks, where, tool=tool, repak=repak, version=version, content=content, log=log)
    result = reader.run(entries, size, force)
    functions = result["functions"]
    counts = {"packages": len(entries), "functions": len(functions),
              "functions_that_call": sum(1 for entry in functions.values() if entry["calls"] or entry["virtual"]),
              "calls": sum(len(entry["calls"]) for entry in functions.values()),
              "virtual": sum(len(entry["virtual"]) for entry in functions.values()),
              "failed": len(result["failed"]), "unread": len(result["unread"]), "left_out": len(left_out)}
    found = {"format": FORMAT, "build": dict(info, paks=content),
             "source": dict(result["stats"], written=time.strftime("%Y-%m-%d %H:%M"), only=only),
             "counts": counts, "failed": dict(sorted(result["failed"].items())), "unread": sorted(result["unread"]),
             "functions": functions}
    found["bytes"] = write(found, os.path.join(model_dir, BYTECODE))
    return found


def main(argv=None):
    parser = argparse.ArgumentParser(description="Read which functions the game's blueprint code calls.")
    parser.add_argument("--paks", help="the Paks folder of a copy of the game (the installed game when left out); "
                        "the build is read from the exe beside it")
    parser.add_argument("--out", help="the model folder (build\\game-model\\<build id> when left out)")
    parser.add_argument("--slice", type=int, default=SLICE, help="packages a slice")
    parser.add_argument("--force", action="store_true", help="read everything again")
    parser.add_argument("--only", help="only packages whose name holds this text (for a quick look; use another --out)")
    args = parser.parse_args(argv)
    cooked.lower_own_priority()
    try:
        found = build(args.paks, args.out, args.slice, args.force, args.only, log=print)
    except (BytecodeError, cooked.CookedError, registry.RegistryError, build_id.BuildIdError, OSError) as error:
        print(error, file=sys.stderr)
        return 1
    counts, source = found["counts"], found["source"]
    print("%d functions in %d packages; %d of them call something: %d calls by path, %d by name" % (
        counts["functions"], counts["packages"], counts["functions_that_call"], counts["calls"], counts["virtual"]))
    print("%s (%.1f MB) in %.1f s (%d slices read, %d kept)" % (
        os.path.join(args.out or os.path.join(build_id.MODEL_DIR, found["build"].get("id", "")), BYTECODE),
        found["bytes"] / 1e6, source["seconds"], source["read_slices"], source["kept_slices"]))
    for package, why in sorted(found["failed"].items())[:30]:
        print("  FAILED %s: %s" % (package, why))
    for path in found["unread"][:30]:
        print("  FAILED %s: the tool could not read its code" % path)
    return 2 if found["failed"] or found["unread"] else 0


if __name__ == "__main__":
    sys.exit(main())
