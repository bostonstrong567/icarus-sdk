"""The model of one build of the game: the native half and the asset half joined into one file.

    python scripts\\gamemodel\\model.py [--dir folder] [--no-config]

Reads native.json (native.py) and assets.json (assets.py) of one build and writes model.json beside them:
every class, native or blueprint, with its whole parent chain, properties with type, flags, offset and size,
functions with parameters, flags and the size of the parameter block, structs (those that carry a vtable
pointer are marked), enums and delegates. "from" at the top says which reader each field came from, and
"report" lists what could not be joined. With bytecode.json (bytecode.py) beside the halves, each blueprint
function also says which functions its code calls.

A cooked blueprint stores sizes as the editor had them (a name is 12 bytes there and 8 in the game) and no
offsets, so the sizes and offsets of blueprint members are worked out here by the engine's own rule: each
property goes to the next multiple of its alignment after the one before it. The rule is checked on every
blueprint function that overrides a native one, whose size the exe's tables give exactly, and on the
parameters of every native function, whose places the tables give.

Exit code 0 means written and clean. 2 means written with something to look at: a check that differs here or
in either half, or a row of the report that is not one of the expected ones (EXPECTED). 1 means not written.
"""
import os
import sys

if __name__ == "__main__" and not __package__:
    import runpy
    sys.path[0] = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    runpy.run_module("gamemodel.model", run_name="__main__")
    sys.exit(0)

import argparse
import importlib
import json
import subprocess
import time

from . import MODELS, ROOT, lower_priority, peak_memory

FORMAT = 1
MODEL = "model.json"
NATIVE = "native.json"
ASSETS = "assets.json"
BYTECODE = "bytecode.json"
OVERSIZED = 512
EXAMPLES = 8
# A kind's alignment is only checked from above when this many native members have it.
ALIGNMENT_SAMPLE = 16
# Rows of the report that every model of this game has. Any other row makes the model one to look at.
EXPECTED = ("blueprint classes listed with their parents only",
            "blueprint functions whose return value has no known place")
# The rows that carry what the two halves reported about themselves.
FROM_ASSETS = "what the asset half already reported"
FROM_NATIVE = "checks of the native half that differ"
NO_BYTECODE = "blueprint functions whose bytecode was not read, so which native functions they call is not known"
CHAIN_LIMIT = 64
CLASS = "/Script/CoreUObject.Class"
PARM, OUT_PARM, RETURN_PARM = 0x80, 0x100, 0x400
REPAK = os.path.join(ROOT, "tools", "pak", "repak", "repak.exe")
FIRST_PAK = "pakchunk0-WindowsNoEditor.pak"
CONFIG_IN_PAK = "Icarus/Config/DefaultEngine.ini"
CONFIG_KEYS = ("GameEngine", "GameViewportClientClassName", "GameInstanceClass", "GlobalDefaultGameMode",
               "WorldSettingsClassName", "GameUserSettingsClassName", "LocalPlayerClassName", "AssetManagerClassName")

# Size and alignment of each kind of property in the shipped game. A struct and an enum take theirs from the type.
PLAIN = {
    "Bool": (1, 1), "Byte": (1, 1), "Int8": (1, 1), "Int16": (2, 2), "UInt16": (2, 2), "Int": (4, 4), "UInt32": (4, 4),
    "Float": (4, 4), "Int64": (8, 8), "UInt64": (8, 8), "Double": (8, 8), "Name": (8, 4), "Str": (16, 8), "Text": (24, 8),
    "Object": (8, 8), "Class": (8, 8), "WeakObject": (8, 4), "LazyObject": (28, 4), "SoftObject": (40, 8),
    "SoftClass": (40, 8), "Interface": (16, 8), "Array": (16, 8), "Map": (80, 8), "Set": (80, 8), "Delegate": (16, 4),
    "MulticastDelegate": (16, 8), "MulticastInlineDelegate": (16, 8), "MulticastSparseDelegate": (1, 1),
    "FieldPath": (32, 8),
}
NATIVE_REFERENCE = {"Object": "class", "WeakObject": "class", "LazyObject": "class", "SoftObject": "class",
                    "Class": "meta_class", "SoftClass": "meta_class", "Interface": "interface", "Struct": "struct",
                    "Enum": "enum", "Delegate": "signature", "MulticastDelegate": "signature",
                    "MulticastInlineDelegate": "signature", "MulticastSparseDelegate": "signature"}
NATIVE_RENAMED = {"name", "kind", "class", "meta_class", "struct", "enum", "interface", "signature", "inner", "key",
                  "value", "element", "underlying", "repnotify"}
# The export tool names two class flags as a later engine does.
FLAG_ALIASES = {"class": {"Optional": "Parsed", "NeedsDeferredDependencyLoading": "LayoutChanging"}}
TYPE_KEYS = ("ref", "enum", "class", "owner", "overrides", "within")
CARRIED = ("config", "type", "data_only", "level", "interfaces", "within", "components", "overrides", "subobjects",
           "timelines", "widgets", "loose_widgets", "animations", "named_slots", "bindings", "exported", "why",
           "unlisted")

FROM_ADDED = {
    "class": {"origin": "rule", "parent": "tables", "chain": "rule"},
    "blueprint": {
        "path": "registry", "name": "registry", "package": "registry", "kind": "registry", "parent": "registry",
        "native": "registry", "depth": "registry", "type": "registry", "data_only": "registry", "level": "registry",
        "chain": "rule", "origin": "rule", "size": "rule", "flags": "cooked", "config": "cooked",
        "interfaces": "cooked", "within": "cooked", "properties": "cooked", "functions": "cooked",
        "components": "cooked", "overrides": "cooked", "subobjects": "cooked", "timelines": "cooked",
        "widgets": "cooked", "loose_widgets": "cooked", "animations": "cooked", "named_slots": "cooked",
        "bindings": "cooked",
    },
    "blueprint_property": {"name": "cooked", "type": "cooked", "ref": "cooked", "enum": "cooked", "inner": "cooked",
                           "key": "cooked", "value": "cooked", "flags": "cooked", "dim": "cooked", "mask": "cooked",
                           "rep_notify": "cooked", "rep_condition": "cooked", "label": "cooked", "id": "cooked",
                           "offset": "rule", "size": "rule"},
    "blueprint_function": {"name": "cooked", "flags": "cooked", "params": "cooked", "returns": "cooked",
                           "locals": "cooked", "overrides": "cooked", "path": "rule", "owner": "rule",
                           "parms_size": "rule", "parms_at_least": "rule", "calls": "bytecode",
                           "virtual": "bytecode"},
    "user_struct": {"path": "registry", "name": "registry", "package": "registry", "id": "cooked", "fields": "cooked",
                    "size": "rule", "align": "rule"},
    "user_enum": {"path": "registry", "name": "registry", "package": "registry", "form": "cooked", "values": "cooked",
                  "display": "cooked"},
    "project": {"*": "config"},
    "packages": {"*": "registry"},
    "native_parents": {"children": "registry", "descendants": "registry", "subobjects": "cooked"},
}
NOTES_ADDED = {
    "registry": "the asset registry in the first pak",
    "cooked": "the export of the cooked package",
    "config": "DefaultEngine.ini in the first pak",
    "bytecode": "the code of the cooked blueprint functions: calls holds the functions called by path, virtual "
                "the names of functions called by name on whatever object is at hand",
    "parms_at_least": "of a blueprint function with no parms_size: where the parameters before the one of "
                      "unknown size end, so the block is at least this large",
    "rule": "worked out here from the fields beside it",
    "blueprint offsets and sizes": "the cooked file has the editor's sizes and no offsets; these follow the engine's "
                                   "layout rule with the game's sizes",
    "blueprint flags": "the flags the package stores; the ones the engine works out at load are not among them, "
                       "and a parameter keeps only Parm, OutParm, ReferenceParm, ConstParm and ReturnParm",
    "returns": "the return value, taken out of params; in a native function it is the last parameter",
    "names": "a name is spelled as its own reader has it; references are respelled to match, since the game "
             "compares names without letter case",
}


class ModelError(Exception):
    pass


class Report:
    """What could not be joined, by kind, with a few examples of each."""

    def __init__(self):
        self.rows = {}

    def add(self, what, example=None, count=1):
        row = self.rows.setdefault(what, {"what": what, "count": 0, "examples": []})
        row["count"] += count
        if example is not None and len(row["examples"]) < EXAMPLES and example not in row["examples"]:
            row["examples"].append(example)

    def listed(self):
        return list(self.rows.values())


class Checks:
    """What was compared, with how often the two sides agreed."""

    def __init__(self):
        self.rows = {}

    def add(self, check, good, example=None):
        row = self.rows.setdefault(check, {"check": check, "agree": 0, "differ": 0, "examples": []})
        if good:
            row["agree"] += 1
        else:
            row["differ"] += 1
            if example is not None and len(row["examples"]) < EXAMPLES:
                row["examples"].append(example)

    def listed(self):
        return list(self.rows.values())


def align(at, to):
    return (at + to - 1) // to * to


def block_size(function):
    """The bytes a call of the function needs room for, or None when they are not known.

    Where its parameters end; for a native function the whole block the exe's table gives, when that is larger.
    """
    sizes = [function[key] for key in ("parms_size", "structure_size") if isinstance(function.get(key), int)]
    return max(sizes) if sizes else None


def folded(path):
    """A path as it is compared: without letter case and without the space the export tool drops at the end of a name."""
    return path.strip().lower()


def leaf(path):
    return path.replace(":", ".").rsplit(".", 1)[-1]


def kind_word(kind):
    return kind[:-8] if kind.endswith("Property") else kind


def engine_classes(text):
    """The classes the game's own config names: {key: object path} for the keys in CONFIG_KEYS."""
    found = {}
    for line in text.splitlines():
        key, sign, value = line.partition("=")
        key = key.strip().lstrip("+")
        if sign and key in CONFIG_KEYS:
            value = value.strip().strip('"')
            if value.startswith("/"):
                found[key] = value
    return found


def read_config(paks=None, repak=None):
    """DefaultEngine.ini out of the first pak, as text. None when the game or the tool is not there."""
    try:
        if paks is None:
            paks = importlib.import_module(__package__ + ".build_id").paks_dir()
        done = subprocess.run([repak or REPAK, "get", os.path.join(paks, FIRST_PAK), CONFIG_IN_PAK],
                              capture_output=True, creationflags=0x4000 if os.name == "nt" else 0)
    except Exception:
        return None
    return done.stdout.decode("utf-8-sig", "replace") if done.returncode == 0 and done.stdout else None


class Exports:
    """The raw exports beside the model, read for the one thing the asset half leaves out: where a return value sits."""

    ROOTS = {"Game": ("Icarus", "Content"), "Engine": ("Engine", "Content")}

    def __init__(self, folder):
        self.folder = folder
        self.read = {}
        self.plugins = None

    def file(self, package):
        parts = package.strip("/").split("/")
        root = self.ROOTS.get(parts[0])
        if root:
            return os.path.join(self.folder, *root, *parts[1:]) + ".json"
        if self.plugins is None:
            self.plugins = {}
            # A plugin's files sit in <Plugin>/Content/, and its packages are /<Plugin>/...
            for folder, _folders, names in os.walk(self.folder):
                steps = os.path.relpath(folder, self.folder).replace("\\", "/").lower().split("/")
                at = steps.index("content") if "content" in steps else 0
                if at > 0:
                    for name in names:
                        self.plugins["/".join([steps[at - 1]] + steps[at + 1:] + [name.lower()])] = os.path.join(folder, name)
        return self.plugins.get("/".join(parts).lower() + ".json")

    def return_place(self, package, owner, function):
        """How many parameters come before the return value of owner:function, or None when the export does not say."""
        places = self.read.get(package)
        if places is None:
            places = self.read[package] = {}
            path = self.file(package)
            try:
                with open(path, "rb") as file:
                    exports = json.loads(file.read().decode("utf-8-sig"))
            except (OSError, TypeError, ValueError):
                exports = []
            for export in exports if isinstance(exports, list) else []:
                if not isinstance(export, dict) or export.get("Type") != "Function":
                    continue
                before = 0
                for item in export.get("ChildProperties") or []:
                    words = [word.strip() for word in str(item.get("PropertyFlags") or "").split("|")]
                    if "ReturnParm" in words:
                        places[(export.get("Outer"), export.get("Name"))] = before
                        break
                    before += "Parm" in words
        return places.get((owner, function))


class Maker:
    def __init__(self, native, assets, config=None, exports=None, bytecode=None):
        self.native, self.assets, self.config = native, assets, config or {}
        self.exports = exports
        # {blueprint function path: {"calls": [...], "virtual": [...]}}, or None when the bytecode was not read.
        self.bytecode = None if bytecode is None else {folded(path): entry for path, entry in bytecode.items()}
        self.report = Report()
        self.checks = Checks()
        self.bits = {family: {name: int(bit) for bit, name in table.items()}
                     for family, table in native.get("flags", {}).items()}
        self.known = {}             # lower-case path -> the path as the model spells it
        self.layouts = {}           # struct path -> (size, alignment)
        self.user_structs = {}
        self.enum_sizes = {}
        self.functions = {}         # path -> function record
        self.by_name = {}           # native class name -> its paths
        self.classes = {}
        self.references = self.respelled = 0

    def know(self, path):
        self.known.setdefault(path.lower(), path)

    def spelled(self, path, where, check=True):
        """A reference in the model's own spelling. One that names nothing in the model is left as it is and reported."""
        if not isinstance(path, str) or not path.startswith("/"):
            return path
        self.references += 1
        found = self.known.get(path.lower())
        if found is None:
            if check:
                self.report.add("references to a type the model does not hold", "%s in %s" % (path, where))
            return path
        if found != path:
            self.respelled += 1
        return found

    def flag_number(self, family, names, where):
        number = 0
        table, aliases = self.bits.get(family, {}), FLAG_ALIASES.get(family, {})
        for name in names or ():
            bit = table.get(aliases.get(name, name))
            if bit is None:
                self.report.add("flag names the legend does not have", "%s %s in %s" % (family, name, where))
            else:
                number |= bit
        return number

    # native half

    def native_property(self, one, inside=False):
        word = kind_word(one["kind"])
        out = {} if inside else {"name": one["name"]}
        out["type"] = word
        key = NATIVE_REFERENCE.get(word)
        if key and one.get(key):
            out["ref"] = one[key]
        elif word == "Byte" and one.get("enum"):
            out["enum"] = one["enum"]
        if word == "Class" and one.get("class") not in (None, CLASS):
            out["object_class"] = one["class"]
        for side, source in (("inner", "inner"), ("inner", "element"), ("key", "key"), ("value", "value")):
            if source in one:
                out[side] = self.native_property(one[source], True)
        if "underlying" in one:
            out["underlying"] = kind_word(one["underlying"]["kind"])
        if "repnotify" in one:
            out["rep_notify"] = one["repnotify"]
        for key, value in one.items():
            if key not in NATIVE_RENAMED and not (inside and key == "flags" and not value):
                out[key] = value
        plain = PLAIN.get(word)
        if plain:
            self.checks.add("sizes of plain kinds: the table here against the exe's", plain[0] == one.get("size"),
                            "%s is %s in the exe, %s here" % (word, one.get("size"), plain[0]))
        return out

    def native_function(self, one):
        out = {"path": one["path"], "name": one["name"], "owner": one["owner"], "flags": one["flags"]}
        params = [self.native_property(item) for item in one["params"]]
        out["params"] = [item for item in params if not item["flags"] & RETURN_PARM]
        returned = [item for item in params if item["flags"] & RETURN_PARM]
        if returned:
            out["returns"] = returned[0]
        for key, value in one.items():
            if key not in out:
                out[key] = value
        self.functions[out["path"]] = out
        self.know(out["path"])
        return out

    def native_class(self, one):
        out = {"path": one["path"], "name": one["name"], "package": one["package"], "origin": "native",
               "parent": one.get("super"), "chain": []}
        for key, value in one.items():
            if key not in out and key not in ("super", "properties", "functions"):
                out[key] = value
        if "from" in out:
            out["from"] = {("parent" if name == "super" else name): source for name, source in out["from"].items()}
        out["properties"] = [self.native_property(item) for item in one.get("properties", ())]
        out["functions"] = [self.native_function(item) for item in one.get("functions", ())]
        return out

    def native_struct(self, one):
        out = {"path": one["path"], "name": one["name"], "package": one["package"], "origin": "native",
               "parent": one.get("super")}
        for key, value in one.items():
            if key not in out and key not in ("super", "properties"):
                out[key] = value
        out["fields"] = [self.native_property(item) for item in one.get("properties", ())]
        self.layouts[out["path"]] = (one["size"], one.get("align") or 1)
        return out

    def native_enum(self, one):
        out = {"path": one["path"], "name": one["name"], "package": one["package"], "origin": "native"}
        out.update((key, value) for key, value in one.items() if key not in out)
        if one.get("size"):
            self.enum_sizes[out["path"]] = one["size"]
        return out

    def read_native(self):
        native = self.native
        for group in ("classes", "structs", "enums", "delegates"):
            for record in native.get(group, ()):
                self.know(record["path"])
        classes = [self.native_class(record) for record in native.get("classes", ())]
        structs = [self.native_struct(record) for record in native.get("structs", ())]
        enums = [self.native_enum(record) for record in native.get("enums", ())]
        delegates = [self.native_function(record) for record in native.get("delegates", ())]
        for record in classes:
            self.classes[record["path"]] = record
            self.by_name.setdefault(record["name"], []).append(record["path"])
        for record in classes:
            chain, at = [], record["parent"]
            while at and at not in chain and len(chain) < CHAIN_LIMIT:
                chain.append(at)
                at = self.classes.get(at, {}).get("parent")
            record["chain"] = chain
            if record["parent"] and record["parent"] not in self.classes:
                self.report.add("native classes whose parent the model does not hold", record["path"])
        self.check_alignments(classes, structs)
        self.check_parameter_rule([function for record in classes for function in record["functions"]] + delegates)
        return classes, structs, enums, delegates

    def check_alignments(self, classes, structs):
        """The alignments in PLAIN from both sides: none is too large for a native member, and none could be doubled."""
        name = "alignment of plain kinds: every native property sits on a multiple of it"
        seen = {}
        for owner, key in [(record, "properties") for record in classes] + [(record, "fields") for record in structs]:
            for item in owner[key]:
                plain = PLAIN.get(item["type"])
                if plain and item.get("offset") is not None and "bits" not in item:
                    self.checks.add(name, item["offset"] % plain[1] == 0,
                                    "%s.%s, a %s at %d" % (owner["path"], item["name"], item["type"], item["offset"]))
                    row = seen.setdefault(item["type"], [0, 0])
                    row[0] += 1
                    row[1] += item["offset"] % (2 * plain[1]) != 0
        # An alignment given too small still divides every offset, so each kind must also show a member off twice it.
        name = "alignment of plain kinds: some native property sits off a multiple of twice it"
        for kind, (members, off) in sorted(seen.items()):
            if members >= ALIGNMENT_SAMPLE:
                self.checks.add(name, off > 0, "all %d native %s members sit on a multiple of %d, so its alignment is not %d" % (
                    members, kind, 2 * PLAIN[kind][1], PLAIN[kind][1]))

    def native_measure(self, item):
        """(size, alignment) of one element of a native property by the tables here; None when a type is not known."""
        word = item["type"]
        if word == "Struct":
            return self.layouts.get(item.get("ref"))
        if word == "Enum":
            size = self.enum_sizes.get(item.get("ref")) or item.get("size")
            return (size, size) if size else None
        return PLAIN.get(word)

    def check_parameter_rule(self, functions):
        """The layout rule on what the exe gives exactly: each parameter of a native function at the next multiple
        of its alignment, in the size the tables here give, and the block ending on a multiple of the widest."""
        name = "parameter blocks of native functions: the layout rule against the exe's tables"
        for function in functions:
            order = function["params"] + ([function["returns"]] if "returns" in function else [])
            at, widest, wrong = 0, 1, None
            for item in order:
                measured = self.native_measure(item)
                # Bools declared as bits share a byte, which the rule for whole properties does not describe.
                shared = "bits" in item or "mask" in item or item.get("native_bool") is False
                if measured is None or shared or item.get("offset") is None or item.get("size") is None:
                    at = None
                    break
                size, to = measured
                if (align(at, to), size) != (item["offset"], item["size"]):
                    wrong = "%s: %s is %d bytes at %d in the exe, %d bytes at %d by rule" % (
                        function["path"], item["name"], item["size"], item["offset"], size, align(at, to))
                    break
                at = item["offset"] + size * item.get("dim", 1)
                widest = max(widest, to)
            if at is None:
                continue
            block = function.get("structure_size")
            if wrong is None and isinstance(block, int) and align(at, widest) != block:
                wrong = "%s: the block is %d bytes in the exe, %d by rule" % (function["path"], block, align(at, widest))
            self.checks.add(name, wrong is None, wrong)

    # layout

    def measure(self, item, where):
        """(size, alignment) of one element of a property in the game, or None when a type it needs is unknown."""
        word = item["type"]
        if word == "Struct":
            return self.struct_layout(item.get("ref"), where)
        if word == "Enum":
            size = self.enum_sizes.get(item.get("ref")) or item.get("cooked_size") or 1
            return size, size
        return PLAIN.get(word)

    def struct_layout(self, path, where):
        found = self.layouts.get(path)
        if found is None and path in self.user_structs:
            record = self.user_structs[path]
            if record.get("exported") is False or not record["fields"]:
                # The model lists the struct and holds none of its fields, so it has no size, not size 0.
                self.report.add("properties of a user struct whose fields were not read, so what follows has no offset",
                                "%s in %s" % (path, where))
                return None
            self.layouts[path] = (0, 1)     # a struct cannot hold itself by value; this only stops a loop
            end, widest = self.lay_out(record["fields"], 0, path)
            if end is None:
                del self.layouts[path]
                return None
            found = self.layouts[path] = (align(end, widest), widest)
            record["size"], record["align"] = found
        if found is None:
            self.report.add("properties whose struct the model does not hold, so what follows has no offset",
                            "%s in %s" % (path, where))
        return found

    def lay_out(self, items, start, where):
        """Gives each property its offset and size, in order. Returns (end, widest alignment), end None when one is unknown."""
        at, widest = start, 1
        for item in items:
            if at is None:
                item.pop("offset", None)
                continue
            measured = self.measure(item, where)
            if measured is None:
                if item["type"] != "Struct":
                    self.report.add("properties of a kind with no known size", "%s %s in %s" % (item["type"], item.get("name"), where))
                at = None
                continue
            size, to = measured
            item["offset"] = align(at, to)
            item["size"] = size
            at = item["offset"] + size * item.get("dim", 1)
            widest = max(widest, to)
        return at, widest

    # asset half

    def blueprint_type(self, one, where):
        out = {"type": one.get("type") or "?"}
        for key in ("ref", "enum"):
            if key in one:
                out[key] = self.spelled(one[key], where)
        for key in ("inner", "key", "value"):
            if isinstance(one.get(key), dict):
                out[key] = self.blueprint_type(one[key], where)
        return out

    def blueprint_property(self, one, where, flags=None):
        out = {"name": one.get("name")}
        out.update(self.blueprint_type(one, where))
        out["flags"] = self.flag_number("property", one.get("flags"), where) | (flags or 0)
        if out["type"] == "Enum" and isinstance(one.get("size"), int):
            out["cooked_size"] = one["size"]
        if "mask" in one:
            self.report.add("blueprint bools that share a byte, laid out here as one byte each", "%s in %s" % (one.get("name"), where))
        for key in ("dim", "mask", "rep_notify", "rep_condition", "label", "id"):
            if key in one:
                out[key] = one[key]
        return out

    def sized(self, items, start, where):
        end, widest = self.lay_out(items, start, where)
        for item in items:
            item.pop("cooked_size", None)
        return end, widest

    def blueprint_function(self, one, owner):
        name = one.get("name")
        path = "%s:%s" % (owner, name)
        out = {"path": path, "name": name, "owner": owner, "flags": self.flag_number("function", one.get("flags"), path)}
        params = [self.blueprint_property(item, path, PARM) for item in one.get("params") or []]
        returned = None
        if isinstance(one.get("returns"), dict):
            returned = self.blueprint_property(dict(one["returns"], name="ReturnValue"), path, PARM | OUT_PARM | RETURN_PARM)
        base = None
        if one.get("overrides"):
            out["overrides"] = self.spelled(one["overrides"], path)
            base = self.functions.get(out["overrides"])
        # The export keeps the return value apart. It is last in a native function; elsewhere every place is tried.
        native_base = base is not None and "table" in base
        places = [len(params)]
        if returned is not None and not native_base and any(item["flags"] & OUT_PARM for item in params):
            at = (one.get("returns") or {}).get("at")
            if at is None and self.exports is not None:
                at = self.exports.return_place(owner.rsplit(".", 1)[0], leaf(owner), name)
                if at is not None:
                    out["from"] = {"returns": "cooked, with its place read from the raw export"}
            if isinstance(at, int) and 0 <= at <= len(params):
                places = [at]
            else:
                places = list(range(len(params), -1, -1))
        tried = []
        for place in places:
            order = params[:place] + ([returned] if returned is not None else []) + params[place:]
            end, _ = self.lay_out(order, 0, path)
            tried.append((end, order, [(item.get("offset"), item.get("size")) for item in order]))
            if end is None:
                tried = tried[-1:]
                break
        end, order, spots = max(tried, key=lambda one: -1 if one[0] is None else one[0])
        ends = sorted({one[0] for one in tried})
        for item, (offset, size) in zip(order, spots):
            item.pop("cooked_size", None)
            if offset is None:
                item.pop("offset", None)
            else:
                item["offset"], item["size"] = offset, size
        out["params"] = params
        if returned is not None:
            out["returns"] = returned
        self.checks.add("blueprint functions whose parameters all have a size", end is not None, path)
        if end is not None:
            out["parms_size"] = end
        else:
            # What was placed before the parameter of unknown size: the block is at least this large.
            out["parms_at_least"] = max([offset + size * item.get("dim", 1) for item, (offset, size) in zip(order, spots)
                                         if offset is not None] or [0])
        if len(ends) > 1:
            out["from"] = {"parms_size": "rule; the export does not say where the return value sits among the outputs, "
                                         "so this is the largest of %s" % ends}
            for item in order:
                item.pop("offset", None)
            self.report.add("blueprint functions whose return value has no known place and whose size depends on it "
                            "(the largest is given)", "%s: %s" % (path, ends))
        elif len(places) > 1:
            self.report.add("blueprint functions whose return value has no known place; their size is the same wherever it sits", path)
            for item in order:
                item.pop("offset", None)
        if one.get("locals"):
            out["locals"] = one["locals"]
        if native_base and end is not None:
            self.checks.add("blueprint overrides: the parameter block by rule against the native function's",
                            base.get("parms_size") == end,
                            "%s: %s by rule, %s in %s" % (path, end, base.get("parms_size"), base["path"]))
        if self.bytecode is not None:
            code = self.bytecode.get(folded(path))
            if code is None:
                self.report.add(NO_BYTECODE, path)
            else:
                out["calls"] = sorted({self.spelled(target.strip(), path, False) for target in code.get("calls") or ()})
                out["virtual"] = sorted(set(code.get("virtual") or ()))
        self.functions[path] = out
        return out

    def placed(self, name, where):
        """A native class given by its bare name, with its module when exactly one module has a class of that name."""
        found = self.by_name.get(name, ())
        if len(found) == 1:
            return found[0]
        self.report.add("native classes named without their module that %s" % (
            "more than one module has" if found else "the model does not hold"), "%s in %s" % (name, where))
        return name

    def carried(self, value, where):
        """A copy of what is carried over as it is (components, sub-objects, widgets), its references respelled."""
        if isinstance(value, list):
            return [self.carried(item, where) for item in value]
        if not isinstance(value, dict):
            return value
        out = {}
        for key, item in value.items():
            if not isinstance(item, str):
                item = self.carried(item, where)
            elif key in TYPE_KEYS and item.startswith("/"):
                item = self.spelled(item, where)
            elif key == "class" and item:
                item = self.placed(item, where)
            out[key] = item
        return out

    def blueprint_class(self, one):
        path = one["path"]
        out = {"path": path, "name": one["name"], "package": one["package"], "origin": "blueprint", "kind": one.get("kind"),
               "parent": self.spelled(one.get("parent"), path), "chain": []}
        if one.get("native"):
            out["native"] = self.spelled(one["native"], path)
        if "depth" in one:
            out["depth"] = one["depth"]
        chain = [self.spelled(item, path, False) for item in one.get("chain") or ([out["parent"]] if out["parent"] else [])]
        top = self.classes.get(chain[-1]) if chain else None
        if top is None:
            self.report.add("blueprint classes whose native ancestor the model does not hold", "%s under %s" % (path, chain[-1:] or None))
        else:
            chain += [item for item in top["chain"] if item not in chain]
        out["chain"] = chain
        if "flags" in one:
            out["flags"] = self.flag_number("class", one["flags"], path)
        for key in CARRIED:
            if key in one:
                out[key] = self.spelled(one[key], path) if key == "within" else self.carried(one[key], path)
        if one.get("exported") is False:
            self.classes[path] = out
            return out
        out["properties"] = [self.blueprint_property(item, path) for item in one.get("properties") or []]
        parent = self.classes.get(out["parent"])
        start = parent.get("size") if parent else None
        if start is None:
            self.report.add("blueprint classes whose parent has no known size, so their properties have no offset", path)
            for item in out["properties"]:
                item.pop("cooked_size", None)
        else:
            end, _ = self.sized(out["properties"], start, path)
            if end is not None:
                out["size"] = end
        out["functions"] = [self.blueprint_function(item, path) for item in one.get("functions") or []]
        self.classes[path] = out
        return out

    def read_assets(self):
        assets = self.assets
        for group in ("classes", "structs", "enums"):
            for record in assets.get(group, ()):
                self.know(record["path"])
        for record in assets.get("classes", ()):
            for function in record.get("functions") or ():
                self.know("%s:%s" % (record["path"], function.get("name")))
        enums = []
        for one in assets.get("enums", ()):
            record = {"path": one["path"], "name": one["name"], "package": one["package"], "origin": "blueprint"}
            if one.get("form"):
                record["form"] = one["form"]
            values = one.get("values") or []
            record["values"] = [["%s::%s" % (one["name"], value["name"]), value["value"]] for value in values]
            shown = {value["name"]: value["display"] for value in values if "display" in value}
            if shown:
                record["display"] = shown
            for key in ("exported", "why", "unlisted"):
                if key in one:
                    record[key] = one[key]
            enums.append(record)
        structs = []
        for one in assets.get("structs", ()):
            record = {"path": one["path"], "name": one["name"], "package": one["package"], "origin": "blueprint"}
            for key in ("id", "exported", "why", "unlisted"):
                if key in one:
                    record[key] = one[key]
            record["fields"] = [self.blueprint_property(item, one["path"]) for item in one.get("fields") or []]
            self.user_structs[record["path"]] = record
            structs.append(record)
        for record in structs:
            if record.get("exported") is False or not record["fields"]:
                why = record.get("why") or "its package gave no fields"
                self.report.add("user structs with no known size", "%s: %s" % (record["path"], why))
            elif self.struct_layout(record["path"], record["path"]) is None:
                self.report.add("user structs with no known size", record["path"])
            for item in record["fields"]:
                item.pop("cooked_size", None)
        order = sorted(assets.get("classes", ()), key=lambda one: (one.get("depth", 0), one["path"].lower()))
        waiting, classes = list(order), []
        for _ in range(CHAIN_LIMIT):
            later = []
            for one in waiting:
                parent = one.get("parent") or ""
                found = self.known.get(parent.lower(), parent)
                if found.startswith("/Script/") or found in self.classes or found.lower() not in self.known:
                    classes.append(self.blueprint_class(one))
                else:
                    later.append(one)
            if len(later) == len(waiting):
                break
            waiting = later
        for one in waiting:
            self.report.add("blueprint classes in a ring of parents", one["path"])
            classes.append(self.blueprint_class(one))
        classes.sort(key=lambda record: record["path"].lower())
        for record in classes:
            if record.get("exported") is False:
                self.report.add("blueprint classes listed with their parents only", "%s: %s" % (record["path"], record.get("why")))
        return classes, structs, enums

    def native_parents(self):
        out = {}
        for path, entry in (self.assets.get("native_parents") or {}).items():
            entry = dict(entry)
            found = self.spelled(path, "native_parents")
            if found not in self.classes:
                self.report.add("native parents the registry names that the model does not hold", path)
            if entry.get("subobjects"):
                entry["subobjects"] = self.carried(entry["subobjects"], found)
            out[found] = entry
        return out

    def run(self):
        native, assets = self.native, self.assets
        one, other = (native.get("build") or {}).get("id"), (assets.get("build") or {}).get("id")
        if one and other and one != other:
            raise ModelError("native.json is of build %s and assets.json of build %s. Make both again for the build "
                             "that is installed." % (one, other))
        native_classes, native_structs, native_enums, delegates = self.read_native()
        classes, structs, enums = self.read_assets()
        parents = self.native_parents()
        project = {}
        for key, value in self.config.items():
            project[key] = self.spelled(value, "the game's config")
        all_classes = native_classes + classes
        functions = [function for record in all_classes for function in record.get("functions", ())]

        def over(records):
            return sum(1 for record in records for function in record.get("functions", ()) if (block_size(function) or 0) > OVERSIZED)

        over_delegates = sum(1 for function in delegates if (block_size(function) or 0) > OVERSIZED)
        if self.bytecode is None:
            unread = sum(len(record.get("functions", ())) for record in classes)
            if unread:
                self.report.add(NO_BYTECODE, "%s is not beside the halves. Make it with: python scripts\\gamemodel\\bytecode.py"
                                % BYTECODE, unread)
        counts = {
            "classes": len(all_classes), "native_classes": len(native_classes), "blueprint_classes": len(classes),
            "blueprint_classes_exported": sum(1 for record in classes if record.get("exported") is not False),
            "structs": len(native_structs) + len(structs), "native_structs": len(native_structs),
            "user_structs": len(structs),
            "structs_with_vtable": sum(1 for record in native_structs if record.get("vtable")),
            "enums": len(native_enums) + len(enums), "native_enums": len(native_enums), "user_enums": len(enums),
            "delegates": len(delegates),
            "functions": len(functions),
            "native_class_functions": sum(len(record["functions"]) for record in native_classes),
            "blueprint_functions": sum(len(record.get("functions", ())) for record in classes),
            "properties": sum(len(record.get("properties", ())) for record in all_classes),
            "struct_fields": sum(len(record["fields"]) for record in native_structs + structs),
            "parameters": sum(len(function["params"]) + ("returns" in function) for function in functions + delegates),
            "blueprint_functions_without_size": sum(1 for record in classes for function in record.get("functions", ())
                                                    if "parms_size" not in function),
            "oversized": over(all_classes) + over_delegates,
            "oversized_native": over(native_classes),
            "oversized_blueprint": over(classes),
            "oversized_delegates": over_delegates,
            "packages": len(assets.get("packages") or {}), "native_parents": len(parents),
            "references": self.references, "references_respelled": self.respelled,
        }
        legend = {key: dict(value) for key, value in (native.get("from") or {}).items()}
        for key in ("class", "struct", "function", "property", "notes"):
            legend.setdefault(key, {})
        for key, value in FROM_ADDED.items():
            legend.setdefault(key, {}).update(value)
        legend["class"].pop("super", None)
        legend["struct"].pop("super", None)
        legend["struct"].pop("properties", None)
        legend["struct"].update({"origin": "rule", "parent": "tables", "fields": "tables"})
        legend["function"]["returns"] = "tables"
        for key in NATIVE_RENAMED - {"name", "enum", "inner", "key", "value"}:
            legend["property"].pop(key, None)
        legend["property"].update({key: "tables" for key in ("type", "ref", "enum", "object_class", "inner", "key",
                                                              "value", "underlying", "rep_notify")})
        legend["notes"].update(NOTES_ADDED)
        for line in assets.get("checks") or ():
            self.report.add(FROM_ASSETS, line)
        for row in native.get("checks") or ():
            if row.get("differ"):
                self.report.add(FROM_NATIVE, "%s: %d of %d" % (
                    row["check"], row["differ"], row["differ"] + row.get("agree", 0)), row["differ"])
        # Each half read Steam's build number for itself; the two can differ after a patch of the content alone.
        build = dict(assets.get("build") or {}, **(native.get("build") or {}))
        build.pop("steam_build", None)
        for key, half in (("steam_build", native), ("steam_build_assets", assets)):
            if (half.get("build") or {}).get("steam_build"):
                build[key] = half["build"]["steam_build"]
        return {
            "format": FORMAT,
            "what": "one build of the game: native types from its exe and PDB, blueprint classes from its cooked packages",
            "build": build,
            "made": {},
            "sources": {"native": {"format": native.get("format"), "made": native.get("made")},
                        "assets": {"format": assets.get("format"), "source": assets.get("source"),
                                   "left_out": len(assets.get("left_out") or {})},
                        "config": CONFIG_IN_PAK if self.config else None},
            "from": legend,
            "flags": native.get("flags") or {},
            "counts": counts,
            "project": project,
            "report": self.report.listed(),
            "checks": self.checks.listed(),
            "modules": native.get("packages") or [],
            "packages": assets.get("packages") or {},
            "native_parents": parents,
            "classes": all_classes,
            "structs": native_structs + structs,
            "enums": native_enums + enums,
            "delegates": delegates,
        }


def make(native, assets, config=None, exports=None, bytecode=None):
    """Joins the two halves, given as the dicts their files hold. config is {key: path} from engine_classes.

    bytecode is {blueprint function path: {"calls": [paths], "virtual": [names]}} as bytecode.py writes it.
    """
    return Maker(native, assets, config, exports, bytecode).run()


def write(model, path):
    """One record a line, so the file can be searched as text and two builds compared line by line."""
    def text(value):
        return json.dumps(value, ensure_ascii=False, separators=(",", ":"))

    os.makedirs(os.path.dirname(os.path.abspath(path)), exist_ok=True)
    lists = ("report", "checks", "modules", "classes", "structs", "enums", "delegates")
    maps = ("packages", "native_parents")
    scratch = path + ".part"
    with open(scratch, "w", encoding="utf-8", newline="\n") as file:
        parts = []
        for key, value in model.items():
            if key in lists:
                parts.append('"%s":[\n%s\n]' % (key, ",\n".join(text(record) for record in value)))
            elif key in maps:
                parts.append('"%s":{\n%s\n}' % (key, ",\n".join("%s:%s" % (text(name), text(entry)) for name, entry in value.items())))
            else:
                parts.append('"%s":%s' % (key, text(value)))
        file.write("{\n" + ",\n".join(parts) + "\n}\n")
    os.replace(scratch, path)
    return os.path.getsize(path)


def read_json(path, what, command):
    if not os.path.isfile(path):
        raise ModelError("No %s at %s. Make it with: python scripts\\gamemodel\\%s" % (what, path, command))
    with open(path, encoding="utf-8") as file:
        return json.load(file)


def model_dir():
    """The folder of the installed build, or of the newest build that has a model when the game is not found."""
    try:
        return importlib.import_module(__package__ + ".build_id").model_dir()
    except Exception:
        pass
    found = []
    if os.path.isdir(MODELS):
        for name in os.listdir(MODELS):
            for file in (MODEL, NATIVE):
                path = os.path.join(MODELS, name, file)
                if os.path.isfile(path):
                    found.append((os.path.getmtime(path), os.path.join(MODELS, name)))
    if not found:
        raise ModelError("No model in %s and the game was not found. Make one with: python scripts\\gamemodel\\native.py, "
                         "assets.py, then model.py" % MODELS)
    return max(found)[1]


def find(folder=None):
    """The path of the model file that is there for the installed build, or None."""
    try:
        path = os.path.join(folder or model_dir(), MODEL)
    except ModelError:
        return None
    return path if os.path.isfile(path) else None


def load(path=None):
    path = path or os.path.join(model_dir(), MODEL)
    model = read_json(path, "model", "model.py")
    if model.get("format") != FORMAT:
        raise ModelError("%s was written by another version of this tool. Run model.py again." % path)
    return model


def installed_dir():
    """The model folder of the build that is installed, or None when the game is not found."""
    try:
        return importlib.import_module(__package__ + ".build_id").model_dir()
    except Exception:
        return None


def installed_paks_id():
    """The id of the paks that are installed, as assets.py works it out. None when the game or repak is not there."""
    try:
        cooked = importlib.import_module(__package__ + ".cooked")
        registry = importlib.import_module(__package__ + ".registry")
        paks = importlib.import_module(__package__ + ".build_id").paks_dir()
        return cooked.paks_id(paks, registry.digest(registry.read_from_pak(paks)))
    except Exception:
        return None


def build(folder=None, config=True, log=lambda text: None, paks_id=installed_paks_id):
    """Reads both halves of one build, joins them and writes model.json. Gives (model, path)."""
    started = time.perf_counter()
    here = installed_dir()
    folder = folder or model_dir()
    installed = bool(here) and os.path.normcase(os.path.abspath(folder)) == os.path.normcase(os.path.abspath(here))
    log("reading %s and %s" % (NATIVE, ASSETS))
    native = read_json(os.path.join(folder, NATIVE), "native model", "native.py")
    assets = read_json(os.path.join(folder, ASSETS), "asset model", "assets.py")
    made_from = (assets.get("build") or {}).get("paks")
    now = paks_id() if installed and paks_id else None
    if made_from and now and made_from != now:
        # The exe names the folder, so a patch that only replaced paks leaves the old asset half in it.
        raise ModelError("%s was made from other paks than the ones installed. Run assets.py again." % ASSETS)
    code = None
    if os.path.isfile(os.path.join(folder, BYTECODE)):
        code = read_json(os.path.join(folder, BYTECODE), "bytecode", "bytecode.py")
        if made_from and (code.get("build") or {}).get("paks") not in (None, made_from):
            raise ModelError("%s was made from other paks than %s. Run bytecode.py again." % (BYTECODE, ASSETS))
    read = time.perf_counter() - started
    # The config is read out of the installed game, so only the installed build's model takes it.
    text = read_config() if config and installed else None
    log("joining")
    joined = time.perf_counter()
    raw = os.path.join(folder, "export")
    maker = Maker(native, assets, engine_classes(text) if text else None, Exports(raw) if os.path.isdir(raw) else None,
                  None if code is None else code.get("functions") or {})
    if config and not text:
        maker.report.add("the game's config was not read, so which engine, viewport and game instance class it starts is not known",
                         CONFIG_IN_PAK if installed else "%s is not the folder of the installed build; say --no-config" % folder)
    if installed and not made_from:
        maker.report.add("the asset half does not say which paks it was made from, so it may be older than the game",
                         "run assets.py again")
    for package, why in sorted(((code or {}).get("failed") or {}).items()):
        maker.report.add("packages whose bytecode could not be read", "%s: %s" % (package, why))
    model = maker.run()
    if code is not None:
        model["sources"]["bytecode"] = {"format": code.get("format"), "source": code.get("source"), "counts": code.get("counts")}
    seconds = {"read": round(read, 1), "join": round(time.perf_counter() - joined, 1)}
    model["made"] = {"written": time.strftime("%Y-%m-%d %H:%M"), "seconds": seconds}
    path = os.path.join(folder, MODEL)
    written = time.perf_counter()
    size = write(model, path)
    seconds["write"] = round(time.perf_counter() - written, 1)
    seconds["all"] = round(time.perf_counter() - started, 1)
    model["made"]["bytes"] = size
    return model, path


def differing(model):
    return [row for row in model["checks"] if row["differ"]]


def unclean(model):
    """One line for each thing in a model that needs a look. Empty for a model that can be written from.

    A check of the join that differs, and every row of the report that is not expected: what either half
    reported about itself is carried as such rows, so a half that disagrees with itself is here too.
    """
    out = ["%s: %d of %d differ%s" % (row["check"], row["differ"], row["agree"] + row["differ"],
                                      " (%s)" % row["examples"][0] if row["examples"] else "")
           for row in differing(model)]
    out += ["%s: %d%s" % (row["what"], row["count"], " (%s)" % row["examples"][0] if row["examples"] else "")
            for row in model.get("report", ()) if not row["what"].startswith(EXPECTED)]
    return out


def lines(model):
    counts = model["counts"]
    out = ["build %s" % model["build"].get("id"),
           "%d classes (%d native, %d blueprint), %d structs (%d with a vtable pointer), %d enums, %d delegates" % (
               counts["classes"], counts["native_classes"], counts["blueprint_classes"], counts["structs"],
               counts["structs_with_vtable"], counts["enums"], counts["delegates"]),
           "%d properties, %d struct fields, %d functions (%d native, %d blueprint), %d parameters" % (
               counts["properties"], counts["struct_fields"], counts["functions"], counts["native_class_functions"],
               counts["blueprint_functions"], counts["parameters"]),
           "%d functions take more than %d bytes of parameters: %d native, %d blueprint, %d delegate signatures" % (
               counts["oversized"], OVERSIZED, counts["oversized_native"], counts["oversized_blueprint"],
               counts["oversized_delegates"]),
           "%d references, %d respelled to the model's letter case" % (counts["references"], counts["references_respelled"])]
    for row in model["checks"]:
        out.append("%s %d of %d: %s%s" % ("differs" if row["differ"] else "agrees", row["differ"] or row["agree"],
                                           row["agree"] + row["differ"], row["check"],
                                           " (%s)" % row["examples"][0] if row["examples"] else ""))
    for row in model["report"]:
        out.append("not joined, %d: %s%s" % (row["count"], row["what"], " (%s)" % row["examples"][0] if row["examples"] else ""))
    return out


def main(arguments=None):
    parser = argparse.ArgumentParser(description="Join the native and the asset half of the game's model into model.json.")
    parser.add_argument("--dir", help="the folder of one build (default: build\\game-model\\<id of the installed build>)")
    parser.add_argument("--no-config", action="store_true", help="do not read DefaultEngine.ini out of the first pak")
    options = parser.parse_args(arguments)
    if hasattr(sys.stdout, "reconfigure"):
        sys.stdout.reconfigure(encoding="utf-8", errors="replace")
    lower_priority()
    try:
        model, path = build(options.dir, not options.no_config, lambda text: print(text, flush=True))
    except (ModelError, OSError, ValueError) as problem:
        print("model: %s" % problem, file=sys.stderr)
        return 1
    print("\n".join(lines(model)))
    peak = peak_memory()
    print("%s (%.1f MB) in %.1f s%s" % (path, model["made"]["bytes"] / 1e6, model["made"]["seconds"]["all"],
                                        ", peak memory %d MB" % (peak[0] >> 20) if peak else ""))
    return 2 if unclean(model) else 0


if __name__ == "__main__":
    sys.exit(main())
