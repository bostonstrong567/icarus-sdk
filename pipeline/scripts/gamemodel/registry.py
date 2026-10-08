#!/usr/bin/env python3
"""The game's cooked asset registry: every package, its asset class, and each blueprint's parents.

Icarus/AssetRegistry.bin sits in the first pak. It is read to memory with repak (nothing is unpacked) and parsed
from the UE 4.27 "FixedTags" layout: AssetRegistryState.cpp (Load), AssetRegistryArchive.cpp,
AssetDataTagMap.cpp, UnrealNames.cpp (LoadNameBatch).

  python scripts\\gamemodel\\registry.py [--paks DIR] [--file AssetRegistry.bin] [--json out.json]

Counting: an "asset" is one entry and a "package" a distinct package name. A blueprint has two entries in one
package: the blueprint (X.X) and its generated class (X.X_C). A level blueprint has only the class entry, beside
the map. A few packages hold two assets that are not classes (a redirector beside a mesh), so the assets that
are not classes are a few more than the packages.

That is why two earlier readers of the same 86,704 entries (build of 2026-09-30) disagreed. One said 77,481
packages: it counted the entries that are not classes. The other said 77,477: the distinct package names. Four
packages hold two such entries (three redirectors beside a skeletal mesh, one package with two material
instances). One said 241 native parents: it went by the blueprint entries, which the 19 level blueprints do
not have. The other said 242: it went by the class entries, and the level blueprints are the only children of
LevelScriptActor. summary() gives all four figures.

Dependencies are not read: the game's file stores none, and the reader for them was never run on data.
"""
import argparse
import hashlib
import importlib
import json
import os
import struct
import subprocess
import sys
import time
from collections import Counter

build_id = importlib.import_module(__package__ + ".build_id" if __package__ else "build_id")

ROOT = build_id.ROOT
REPAK = os.path.join(ROOT, "tools", "pak", "repak", "repak.exe")
FIRST_PAK = "pakchunk0-WindowsNoEditor.pak"
FILE_IN_PAK = "Icarus/AssetRegistry.bin"
VERSION_GUID = bytes.fromhex("e7 9e 7f 71 3a 49 b0 e9 32 91 b3 88 07 81 38 1b".replace(" ", ""))
FIXED_TAGS = 8
NUMBERED = 0x80000000
STORE_BEGIN, STORE_END = 0x12345679, 0x87654321
CONTAINS_MAP = 0x00020000
CLASS_KINDS = {
    "BlueprintGeneratedClass": "blueprint",
    "WidgetBlueprintGeneratedClass": "widget",
    "AnimBlueprintGeneratedClass": "anim",
    "ControlRigBlueprintGeneratedClass": "rig",
}
TYPE_KINDS = {"UserDefinedStruct": "struct", "UserDefinedEnum": "enum"}
BLUEPRINT_ASSETS = {"Blueprint", "WidgetBlueprint", "AnimBlueprint", "ControlRigBlueprint"}
CHAIN_LIMIT = 64


class RegistryError(Exception):
    pass


class Reader:
    def __init__(self, data):
        self.d = data
        self.p = 0
        self.names = []

    def need(self, count):
        if count < 0 or self.p + count > len(self.d):
            raise RegistryError("The registry ends at byte %d, inside a record that starts at %d." % (len(self.d), self.p))

    def u32(self):
        self.need(4)
        value = struct.unpack_from("<I", self.d, self.p)[0]
        self.p += 4
        return value

    def i32(self):
        self.need(4)
        value = struct.unpack_from("<i", self.d, self.p)[0]
        self.p += 4
        return value

    def u64(self):
        self.need(8)
        value = struct.unpack_from("<Q", self.d, self.p)[0]
        self.p += 8
        return value

    def i64(self):
        self.need(8)
        value = struct.unpack_from("<q", self.d, self.p)[0]
        self.p += 8
        return value

    def skip(self, count):
        self.need(count)
        self.p += count

    def take(self, count):
        self.need(count)
        data = self.d[self.p:self.p + count]
        self.p += count
        return data

    def name(self):
        index = self.u32()
        number = 0
        if index & NUMBERED:
            index -= NUMBERED
            number = self.u32()
        if index >= len(self.names):
            raise RegistryError("Name %d is asked for at byte %d and the file has %d names." % (index, self.p, len(self.names)))
        text = self.names[index]
        return text if number == 0 else "%s_%d" % (text, number - 1)

    def fstring(self):
        count = self.i32()
        if count == 0:
            return ""
        if count < 0:
            return self.take(-2 * count).decode("utf-16-le").rstrip("\0")
        return self.take(count).decode("latin-1").rstrip("\0")


def name_batch(r):
    count = r.u32()
    if count == 0:
        return []
    string_bytes = r.u32()
    r.u64()
    r.skip(8 * count)
    headers = r.take(2 * count)
    base = r.p
    r.need(string_bytes)
    at = 0
    out = []
    for i in range(count):
        first, second = headers[2 * i], headers[2 * i + 1]
        length = ((first & 0x7F) << 8) | second
        if first & 0x80:
            at += at & 1
            out.append(r.d[base + at:base + at + 2 * length].decode("utf-16-le"))
            at += 2 * length
        else:
            out.append(r.d[base + at:base + at + length].decode("latin-1"))
            at += length
    r.p = base + string_bytes
    return out


class TagStore:
    """The values of every asset's tags, kept packed. tags(handle) gives one asset's as a dict of strings."""

    ORDER = ("numberless_names", "names", "numberless_export_paths", "export_paths", "texts",
             "ansi_offsets", "wide_offsets", "ansi", "wide", "numberless_pairs", "pairs")

    def __init__(self, r):
        if r.u32() != STORE_BEGIN:
            raise RegistryError("The tag store does not start where it should (byte %d)." % (r.p - 4))
        sizes = self.sizes = {key: r.i32() for key in self.ORDER}
        text_bytes = r.u32()
        start = r.p
        self.texts = [r.fstring() for _ in range(sizes["texts"])]
        if r.p - start != text_bytes:
            raise RegistryError("The text block is %d bytes and its header says %d." % (r.p - start, text_bytes))
        self.numberless_names = [r.name() for _ in range(sizes["numberless_names"])]
        self.names = [r.name() for _ in range(sizes["names"])]
        self.numberless_export_paths = [(r.name(), r.name(), r.name()) for _ in range(sizes["numberless_export_paths"])]
        self.export_paths = [(r.name(), r.name(), r.name()) for _ in range(sizes["export_paths"])]
        self.ansi_offsets = struct.unpack("<%dI" % sizes["ansi_offsets"], r.take(4 * sizes["ansi_offsets"]))
        self.wide_offsets = struct.unpack("<%dI" % sizes["wide_offsets"], r.take(4 * sizes["wide_offsets"]))
        self.ansi = r.take(sizes["ansi"])
        self.wide = r.take(2 * sizes["wide"])
        self.numberless_pairs = [(r.name(), r.u32()) for _ in range(sizes["numberless_pairs"])]
        self.pairs = [(r.name(), r.u32()) for _ in range(sizes["pairs"])]
        if r.u32() != STORE_END:
            raise RegistryError("The tag store does not end where it should (byte %d)." % (r.p - 4))

    def value(self, packed):
        kind, index = packed & 7, packed >> 3
        if kind == 0:
            at = self.ansi_offsets[index]
            return self.ansi[at:self.ansi.index(b"\0", at)].decode("latin-1")
        if kind == 1:
            at = end = self.wide_offsets[index] * 2
            while self.wide[end:end + 2] not in (b"\0\0", b""):
                end += 2
            return self.wide[at:end].decode("utf-16-le")
        if kind == 2:
            return self.numberless_names[index]
        if kind == 3:
            return self.names[index]
        if kind in (4, 5):
            return export_path_text(*(self.numberless_export_paths if kind == 4 else self.export_paths)[index])
        if kind == 6:
            return self.texts[index]
        raise RegistryError("A tag value has the unknown kind %d." % kind)

    def tags(self, handle):
        count = (handle >> 32) & 0xFFFF
        begin = handle & 0xFFFFFFFF
        pairs = self.numberless_pairs if handle >> 63 else self.pairs
        return {key: self.value(packed) for key, packed in pairs[begin:begin + count]}


def export_path_text(cls, obj, package):
    """Class'/Package.Object', as the engine writes an export path; the parts that are None are left out."""
    text = package if obj in ("", "None") else "%s.%s" % (package, obj)
    return text if cls in ("", "None") else "%s'%s'" % (cls, text)


def object_path(text):
    """The path inside Class'/Package.Object' (or the text itself when it has no quotes)."""
    text = (text or "").strip()
    if text.endswith("'") and "'" in text[:-1]:
        return text[text.index("'") + 1:-1]
    return text


def digest(data):
    """Names the registry's bytes. It stores no size or hash of a package, so a changed blueprint can leave it as it was."""
    return hashlib.sha1(data).hexdigest()


class Registry:
    """assets is a list of (object path, package, asset name, asset class, tag handle, package flags, chunks)."""

    def __init__(self, data):
        self.digest = digest(data)
        r = Reader(data)
        if r.take(16) != VERSION_GUID:
            raise RegistryError("This is not an asset registry of UE 4.27: it does not start with the registry's version id.")
        self.version = r.i32()
        if self.version != FIXED_TAGS:
            raise RegistryError("The registry is version %d. This reader knows version %d (UE 4.27)." % (self.version, FIXED_TAGS))
        r.names = name_batch(r)
        self.name_count = len(r.names)
        self.store = TagStore(r)
        count = r.i32()
        if count < 0:
            raise RegistryError("The registry says it holds %d assets." % count)
        self.assets = assets = []
        for _ in range(count):
            path = r.name()
            r.name()
            cls = r.name()
            package = r.name()
            name = r.name()
            handle = r.u64()
            for _bundle in range(r.i32()):
                r.name()
                for _path in range(r.i32()):
                    r.name()
                    r.fstring()
            chunk_count = r.i32()
            chunks = struct.unpack("<%di" % chunk_count, r.take(4 * chunk_count)) if chunk_count else ()
            assets.append((path, package, name, cls, handle, r.u32(), chunks))
        self.dependency_bytes = r.i64()
        end = r.p + self.dependency_bytes
        self.dependency_nodes = r.i32() if self.dependency_bytes >= 4 else 0
        r.p = end
        r.need(0)
        self.package_data = r.i32()
        self.parsed_bytes = r.p
        self.size = len(data)
        self.complete = self.package_data == 0 and r.p == len(data)
        if self.package_data == 0 and r.p != len(data):
            raise RegistryError("%d bytes are left after the registry's last record." % (len(data) - r.p))

    def tags(self, asset):
        return self.store.tags(asset[4])

    def packages(self):
        """package name -> the assets in it, in file order."""
        out = {}
        for asset in self.assets:
            out.setdefault(asset[1], []).append(asset)
        return out


def read_from_pak(paks=None, repak=None):
    """The registry's bytes, read out of the first pak to memory. The game folder is only read."""
    pak = os.path.join(paks or build_id.paks_dir(), FIRST_PAK)
    if not os.path.isfile(pak):
        raise RegistryError("%s is not there. Is the game installed?" % pak)
    done = subprocess.run([repak or REPAK, "get", pak, FILE_IN_PAK], capture_output=True)
    if done.returncode != 0 or not done.stdout:
        raise RegistryError("repak could not read %s out of %s: %s" % (FILE_IN_PAK, pak, done.stderr.decode("utf-8", "replace").strip()[:300]))
    return done.stdout


def load(paks=None, file=None, repak=None):
    if file:
        with open(file, "rb") as handle:
            return Registry(handle.read())
    return Registry(read_from_pak(paks, repak))


def kind_of(asset_class):
    return CLASS_KINDS.get(asset_class) or TYPE_KINDS.get(asset_class)


def blueprint_classes(registry):
    """class path -> { package, name, kind, parent, native_parent, chain, native, depth, level, type, data_only, ... }.

    chain runs from the class's parent down to its native ancestor (the last entry). depth is the number of
    blueprint classes above it. A class whose chain cannot be followed has "broken" saying why. type and
    data_only come from the blueprint entry beside the class, which a level blueprint does not have."""
    found = {}
    beside = {}
    for asset in registry.assets:
        if asset[3] in BLUEPRINT_ASSETS:
            tags = registry.tags(asset)
            target = object_path(tags.get("GeneratedClass"))
            if target:
                beside[target.lower()] = tags
    for asset in registry.assets:
        kind = CLASS_KINDS.get(asset[3])
        if not kind:
            continue
        tags = dict(beside.get(asset[0].lower(), {}))
        tags.update(registry.tags(asset))
        record = {"package": asset[1], "name": asset[2], "kind": kind,
                  "parent": object_path(tags.get("ParentClass")), "native_parent": object_path(tags.get("NativeParentClass"))}
        if asset[5] & CONTAINS_MAP:
            record["level"] = True
        if tags.get("BlueprintType"):
            kind_of_blueprint = tags["BlueprintType"]
            record["type"] = kind_of_blueprint[len("BPTYPE_"):] if kind_of_blueprint.startswith("BPTYPE_") else kind_of_blueprint
        if tags.get("IsDataOnly") == "True":
            record["data_only"] = True
        for key, tag in (("replicated", "NumReplicatedProperties"), ("native_components", "NativeComponents"),
                         ("blueprint_components", "BlueprintComponents")):
            if tags.get(tag, "").lstrip("-").isdigit():
                record[key] = int(tags[tag])
        found[asset[0]] = record
    for path, record in found.items():
        chain, seen, at = [], {path}, record["parent"]
        while at:
            chain.append(at)
            if at.startswith("/Script/"):
                break
            if at in seen or len(chain) > CHAIN_LIMIT:
                record["broken"] = "its parents form a circle at %s" % at
                break
            seen.add(at)
            if at not in found:
                record["broken"] = "its parent %s is not in the registry" % at
                break
            at = found[at]["parent"]
        if not chain:
            record["broken"] = "it names no parent"
        record["chain"] = chain
        record["depth"] = len(chain) - 1 if chain and chain[-1].startswith("/Script/") else len(chain)
        if "broken" not in record:
            record["native"] = chain[-1]
            if record["native_parent"] and record["native_parent"] != chain[-1]:
                record["broken"] = "its chain ends at %s and its NativeParentClass tag says %s" % (chain[-1], record["native_parent"])
    return found


def user_types(registry):
    """object path -> { package, name, kind } for user-defined structs and enums."""
    return {asset[0]: {"package": asset[1], "name": asset[2], "kind": TYPE_KINDS[asset[3]]}
            for asset in registry.assets if asset[3] in TYPE_KINDS}


def summary(registry, classes=None):
    classes = blueprint_classes(registry) if classes is None else classes
    packages = registry.packages()
    by_class = Counter(asset[3] for asset in registry.assets)
    shared = {}
    for name, assets in packages.items():
        plain = [[asset[2], asset[3]] for asset in assets if asset[3] not in CLASS_KINDS]
        if len(plain) > 1:
            shared[name] = plain
    levels = sum(1 for c in classes.values() if c.get("level"))
    natives = {c["native"] for c in classes.values() if "native" in c}
    natives_without_levels = {c["native"] for c in classes.values() if "native" in c and not c.get("level")}
    return {
        "version": registry.version, "bytes": registry.size, "names": registry.name_count,
        "assets": len(registry.assets), "packages": len(packages), "asset_classes": len(by_class),
        "by_class": dict(by_class.most_common()),
        "classes": len(classes), "level_blueprints": levels,
        "assets_that_are_not_classes": len(registry.assets) - len(classes),
        "packages_with_several_assets": shared,
        "native_parents": len(natives), "native_parents_without_level_blueprints": len(natives_without_levels),
        "depths": dict(sorted(Counter(c["depth"] for c in classes.values()).items())),
        "broken": {path: c["broken"] for path, c in classes.items() if "broken" in c},
        "dependency_bytes": registry.dependency_bytes, "dependency_nodes": registry.dependency_nodes,
        "package_data": registry.package_data, "complete": registry.complete,
    }


def main(argv=None):
    parser = argparse.ArgumentParser(description="Read the game's asset registry and say what it holds.")
    parser.add_argument("--paks", help="the Paks folder of a copy of the game (the installed game when left out)")
    parser.add_argument("--file", help="an AssetRegistry.bin on disk, instead of the one in the pak")
    parser.add_argument("--json", help="write the summary and every class with its chain here")
    args = parser.parse_args(argv)
    started = time.time()
    try:
        registry = load(args.paks, args.file)
    except (RegistryError, build_id.BuildIdError, OSError) as error:
        print(error, file=sys.stderr)
        return 1
    classes = blueprint_classes(registry)
    facts = summary(registry, classes)
    print("%d bytes, version %d, %d names, %d assets in %d packages, %d asset classes (%.1f s)" % (
        facts["bytes"], facts["version"], facts["names"], facts["assets"], facts["packages"], facts["asset_classes"],
        time.time() - started))
    print("%d blueprint classes (%d of them level blueprints), %d native parents (%d without the level blueprints)" % (
        facts["classes"], facts["level_blueprints"], facts["native_parents"], facts["native_parents_without_level_blueprints"]))
    print("blueprint classes above a class:", facts["depths"])
    print("%d assets are not classes; %d packages hold two of them: %s" % (
        facts["assets_that_are_not_classes"], len(facts["packages_with_several_assets"]),
        ", ".join(sorted(facts["packages_with_several_assets"]))))
    if facts["dependency_nodes"]:
        print("the file stores %d dependency nodes, which this reader skips" % facts["dependency_nodes"])
    if not facts["complete"]:
        print("the file stores data for %d packages after the assets, which this reader does not read" % facts["package_data"])
    for path, why in list(facts["broken"].items())[:20]:
        print("CHECK %s: %s" % (path, why))
    if args.json:
        os.makedirs(os.path.dirname(os.path.abspath(args.json)), exist_ok=True)
        with open(args.json, "w", encoding="utf-8", newline="\n") as file:
            json.dump({"summary": facts, "classes": classes, "types": user_types(registry)}, file, indent=1)
    return 1 if facts["broken"] else 0


if __name__ == "__main__":
    sys.exit(main())
