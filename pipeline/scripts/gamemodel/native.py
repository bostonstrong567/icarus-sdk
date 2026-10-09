"""The native half of the model: the exe's tables joined with the PDB's type records, one record per type.

    python scripts\\gamemodel\\native.py [--exe file] [--pdb file] [--out file]

Writes build\\game-model\\<build id>\\native.json. Reads the game's files only; the game need not run.
Exit code 0 means written and the two readers agree, 2 written with a check that differs (the lines that start
"differs"), 1 not written.
"""
import os
import sys

if __name__ == "__main__" and not __package__:
    import runpy
    sys.path[0] = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    runpy.run_module("gamemodel.native", run_name="__main__")
    sys.exit(0)

import argparse
import json
import time

from . import game_files, lower_priority, peak_memory, steam_state
from . import exe_tables
from .build_id import BuildIdError, build_id, debug_record, model_dir
from . import pdb as pdbfile

FORMAT = 1
TRAITS = "TStructOpsTypeTraits<"
EXAMPLES = 12

# Which reader each field comes from. A record's own "from" names the fields that came from somewhere else.
FROM = {
    "package": {"name": "tables", "module": "symbols", "flags": "tables", "body_crc": "tables",
                "declarations_crc": "tables"},
    "class": {"name": "symbols", "cpp": "symbols", "package": "tables", "path": "rule", "super": "tables",
              "flags": "tables", "config": "tables", "abstract": "tables", "interfaces": "tables",
              "properties": "tables", "functions": "tables", "table": "symbols", "intrinsic": "symbols", "size": "pdb",
              "bases": "pdb", "constructor": "pdb", "virtuals": "pdb", "introduces": "pdb", "members": "pdb",
              "header": "pdb"},
    "struct": {"name": "tables", "cpp": "symbols", "package": "tables", "path": "rule", "super": "tables",
               "flags": "tables", "size": "tables", "table_size": "tables", "align": "tables",
               "native_operations": "tables", "properties": "tables", "table": "symbols", "bases": "pdb",
               "vtable": "pdb", "traits": "pdb", "members": "pdb", "header": "pdb"},
    "enum": {"name": "tables", "package": "tables", "path": "rule", "cpp_type": "tables", "form": "tables",
             "flags": "tables", "values": "tables", "display_names": "tables", "dynamic": "tables",
             "table": "symbols", "underlying": "pdb", "size": "pdb", "unreflected": "pdb", "header": "pdb"},
    "function": {"name": "tables", "owner": "tables", "path": "rule", "flags": "tables", "structure_size": "tables",
                 "rpc": "tables", "rpc_response": "tables", "sparse": "tables", "listed": "tables",
                 "params": "tables", "parms_size": "rule", "table": "symbols", "native": "symbols", "cpp": "pdb",
                 "method": "pdb", "implementation": "pdb"},
    "property": {"name": "tables", "kind": "tables", "flags": "tables", "dim": "tables", "repnotify": "tables",
                 "offset": "tables", "element_size": "tables", "native_bool": "tables", "mask": "code",
                 "class": "tables", "meta_class": "tables", "struct": "tables", "enum": "tables",
                 "interface": "tables", "signature": "tables", "size": "rule", "cpp": "pdb", "bits": "pdb",
                 "access": "pdb"},
    "member": {"name": "pdb", "offset": "pdb", "cpp": "pdb", "access": "pdb", "bits": "pdb"},
    "notes": {
        "tables": "the header tool's tables in the exe",
        "code": "the exe's code: a bool property has no offset in its table, only a function that sets its bit",
        "symbols": "names and addresses in the PDB",
        "pdb": "type records in the PDB",
        "modules": "the object file an address was linked from, by the PDB",
        "rule": "worked out here from the fields beside it",
        "BoolProperty": "its offset is from code, not tables",
        "size": "of a property: bytes of one element; a whole property takes size times dim",
        "parms_size": "where the last parameter ends, which is what the engine copies on a call",
        "table, native": "addresses relative to the image base",
        "access": "C++ public, protected or private from the PDB, and only when it is not public",
    },
}


class ModelError(Exception):
    pass


class Checks:
    """What the two readers were compared on, with how often they agreed."""

    def __init__(self):
        self.rows = {}

    def add(self, name, good, example=None):
        row = self.rows.setdefault(name, {"check": name, "agree": 0, "differ": 0, "examples": []})
        if good:
            row["agree"] += 1
        else:
            row["differ"] += 1
            if example is not None and len(row["examples"]) < EXAMPLES:
                row["examples"].append(example)

    def listed(self):
        return list(self.rows.values())


class Joiner:
    def __init__(self, tables, types, symbols):
        self.tables = tables
        self.types = types
        self.symbols = symbols
        self.checks = Checks()
        self.facts = dict(tables["counts"])
        self.layouts = {}
        self.wanted = {}
        self.class_cpp = {record["path"]: record["cpp"] for record in tables["classes"]}
        self.class_cpp.update((record["path"], record["cpp"]) for record in tables["untabled"])
        self.class_path = {cpp: path for path, cpp in self.class_cpp.items()}
        self.struct_cpp = {record["path"]: record["cpp"] for record in tables["structs"]}

    def layout(self, cpp, size=None):
        """A type's definition read once: bases, members, methods, nested types. None when the PDB has none."""
        if cpp in self.layouts:
            return self.layouts[cpp]
        types = self.types
        chosen = None
        for index in types.find_all(cpp):
            head = types.head(index)
            if head is None or head["kind"] not in pdbfile.RECORDS:
                continue
            fits = size is None or head["size"] == size
            if chosen is None or (fits, head["count"]) > chosen[0]:
                chosen = ((fits, head["count"]), index, head)
        found = None
        if chosen is not None:
            _, index, head = chosen
            found = {"index": index, "size": head["size"], "bases": [], "members": [], "methods": {}, "nested": [],
                     "vtable": False, "count": len(types.find_all(cpp))}
            try:
                for entry in types.fields(head["fields"]):
                    what = entry[0]
                    if what == "member":
                        found["members"].append(entry[1:])
                    elif what == "method":
                        found["methods"].setdefault(entry[2], []).append((entry[1], entry[3], entry[4]))
                    elif what == "base":
                        found["bases"].append((entry[1], types.text(entry[2]), entry[3]))
                    elif what == "nested":
                        found["nested"].append(entry[1:])
                    elif what == "vtable":
                        found["vtable"] = True
            except (pdbfile.PdbError, ValueError, IndexError) as problem:
                self.checks.add("type records that read whole", False, "%s: %s" % (cpp, problem))
                found = None
            else:
                self.checks.add("type records that read whole", True)
        self.layouts[cpp] = found
        return found

    def count(self, fact, name=None):
        """A fact is a number, or the list of names it holds for."""
        if name is None:
            self.facts[fact] = self.facts.get(fact, 0) + 1
        else:
            self.facts.setdefault(fact, []).append(name)

    def has_vtable(self, cpp, depth=0):
        found = self.layout(cpp)
        if found is None or depth > 32:
            return False
        if "any_vtable" not in found:
            found["any_vtable"] = found["vtable"] or any(self.has_vtable(base[1], depth + 1) for base in found["bases"])
        return found["any_vtable"]

    def member_fields(self, member):
        """What the PDB adds to one data member: (declared type, bit field or None, byte offset, byte mask)."""
        _, _, offset, kind = member
        types = self.types
        field = types.bit_field(kind)
        if field is None:
            return types.text(kind), None, offset, None
        base, bits, first = field
        return types.text(kind), [types.text(base), bits, first], offset + first // 8, 1 << (first % 8)

    def join_properties(self, record, found, what, mirror=False):
        """Gives each property its declared type, and returns the members no property stands for."""
        checks = self.checks
        members = {member[1]: member for member in found["members"]}
        used = set()
        for one in record["properties"]:
            twins = [members[name] for name in (one["name"], one["name"] + "_DEPRECATED") if name in members]
            member = next((twin for twin in twins if twin[2] == one["offset"]), twins[0] if twins else None)
            if mirror:
                if member is None or one["kind"] != "BoolProperty" and member[2] != one["offset"]:
                    self.count("properties of mirror structs that the C++ struct declares otherwise")
                    continue
            else:
                checks.add("properties with a member of their name", member is not None, "%s.%s" % (what, one["name"]))
            if member is None:
                continue
            used.add(member[1])
            text, field, offset, mask = self.member_fields(member)
            one["cpp"] = text
            if field is not None:
                one["bits"] = field
            access = pdbfile.ACCESS[member[0]]
            if access not in (None, "public"):
                one["access"] = access
            where = "%s.%s: tables %s, pdb %s" % (what, one["name"], one["offset"], offset)
            if one["kind"] == "BoolProperty":
                if one["offset"] is None:
                    one["offset"] = offset
                    one["from"] = {"offset": "pdb"}
                    if field is not None:
                        one["mask"] = mask
                        one["from"]["mask"] = "pdb"
                else:
                    checks.add("bool offsets: code against type records", one["offset"] == offset, where)
                    if field is not None:
                        checks.add("bool masks: code against type records", one.get("mask") == mask,
                                   "%s.%s: code %s, pdb %s" % (what, one["name"], one.get("mask"), mask))
            else:
                checks.add("property offsets: tables against type records", one["offset"] == offset, where)
        rest = []
        for access, name, offset, kind in found["members"]:
            if name in used:
                continue
            entry = {"name": name, "offset": offset, "cpp": self.types.text(kind)}
            if pdbfile.ACCESS[access] != "public":
                entry["access"] = pdbfile.ACCESS[access]
            field = self.types.bit_field(kind)
            if field is not None:
                entry["bits"] = [self.types.text(field[0]), field[1], field[2]]
            rest.append(entry)
        return rest

    def bases(self, found):
        listed = []
        for access, name, offset in found["bases"]:
            entry = {"name": name, "offset": offset}
            if pdbfile.ACCESS[access] != "public":
                entry["access"] = pdbfile.ACCESS[access]
            listed.append(entry)
        return listed

    def join_class(self, record):
        cpp = record["cpp"]
        found = self.layout(cpp)
        self.checks.add("classes with a type record", found is not None, cpp)
        if found is None:
            return
        types = self.types
        checks = self.checks
        self.wanted[found["index"]] = record
        record["size"] = found["size"]
        record["bases"] = self.bases(found)
        first = found["bases"][0][1] if found["bases"] and found["bases"][0][2] == 0 else None
        parent = self.class_cpp.get(record.get("super"))
        if "table" in record:
            checks.add("class parents: tables against type records",
                       parent == first or parent is None and first not in self.class_path,
                       "%s: tables %s, pdb %s" % (cpp, parent, first))
        elif first in self.class_path:
            record["super"] = self.class_path[first]
        for one in record.get("interfaces", ()):
            wanted = "I" + self.class_cpp.get(one["class"], "??")[1:]
            at = [base[2] for base in found["bases"] if base[1] == wanted]
            if not one["blueprint"]:
                checks.add("interface offsets: tables against type records", at == [one["offset"]],
                           "%s %s: tables %s, pdb %s" % (cpp, wanted, one["offset"], at))
        rest = self.join_properties(record, found, cpp) if "table" in record else self.join_properties(
            {"properties": []}, found, cpp)
        if rest:
            record["members"] = rest
        last = max([one["offset"] + one.get("size", 0) * one.get("dim", 1) for one in record.get("properties", ())
                    if one["offset"] is not None] or [0])
        checks.add("properties end inside their class", last <= found["size"], "%s: %d past %d" % (cpp, last, found["size"]))
        makers = [types.signature(kind)[1] for _, _, kind in found["methods"].get(cpp, ())]
        takes = any(any("FObjectInitializer" in types.text(argument) for argument in arguments) for arguments in makers)
        plain = any(not arguments for arguments in makers)
        record["constructor"] = "Both" if takes and plain else "ObjectInitializer" if takes else "Default" if plain else None
        virtuals, introduces = [], []
        for name, forms in found["methods"].items():
            if name.startswith(("~", "__")):
                continue
            hows = {how for _, how, _ in forms}
            if hows & {pdbfile.VIRTUAL, pdbfile.INTRODUCING, pdbfile.PURE, pdbfile.PURE_INTRODUCING}:
                virtuals.append(name)
            if hows & {pdbfile.INTRODUCING, pdbfile.PURE_INTRODUCING}:
                introduces.append(name)
        if virtuals:
            record["virtuals"] = virtuals
        if introduces:
            record["introduces"] = introduces
        methods = found["methods"]
        if record.get("flags", 0) & 0x4000:
            twin = self.layout("I" + cpp[1:])
            methods = twin["methods"] if twin else methods
        for function in record.get("functions", ()):
            self.join_function(function, methods, cpp)

    def join_function(self, function, methods, cpp):
        types = self.types
        forms = methods.get(function["name"])
        event = function["flags"] & 0x800 and not function["flags"] & 0x400
        if not forms:
            if not event:
                self.checks.add("native functions with a method of their name", False, "%s::%s" % (cpp, function["name"]))
            return
        if not event:
            self.checks.add("native functions with a method of their name", True)
        wanted = sum(1 for one in function["params"] if not one["flags"] & 0x400)
        chosen = forms[0]
        for form in forms:
            if len(types.signature(form[2])[1]) == wanted:
                chosen = form
                break
        _, how, kind = chosen
        function["cpp"] = types.text(kind)
        words = []
        if how in (pdbfile.VIRTUAL, pdbfile.INTRODUCING, pdbfile.PURE, pdbfile.PURE_INTRODUCING):
            words.append("virtual")
        if how == pdbfile.STATIC:
            words.append("static")
        if types.is_const(kind):
            words.append("const")
        if words:
            function["method"] = words
        body = methods.get(function["name"] + "_Implementation")
        if body:
            function["implementation"] = "virtual" if body[0][1] in (pdbfile.VIRTUAL, pdbfile.INTRODUCING) else "plain"

    def join_struct(self, record):
        """A struct the header tool was only told about (NoExport) is a mirror: the C++ struct may differ from it."""
        cpp = record["cpp"]
        mirror = bool(record["flags"] & 0x8)
        found = self.layout(cpp, record["size"])
        checks = self.checks
        if found is None:
            if mirror:
                self.count("mirror structs with no type record", cpp)
            else:
                checks.add("structs with a type record", False, cpp)
            return
        checks.add("structs with a type record", True)
        self.wanted[found["index"]] = record
        if found["size"] != record["size"] and mirror:
            self.count("mirror structs whose C++ size is not the table's", cpp)
            record["table_size"] = record["size"]
            record["size"] = found["size"]
            record["from"] = {"size": "pdb"}
        else:
            checks.add("struct sizes: tables against type records", found["size"] == record["size"],
                       "%s: tables %d, pdb %d" % (cpp, record["size"], found["size"]))
        if found["bases"]:
            record["bases"] = self.bases(found)
        first = found["bases"][0][1] if found["bases"] and found["bases"][0][2] == 0 else None
        parent = self.struct_cpp.get(record["super"])
        if parent is not None and not mirror:
            checks.add("struct parents: tables against type records", parent == first,
                       "%s: tables %s, pdb %s" % (cpp, parent, first))
        if self.has_vtable(cpp):
            record["vtable"] = True
        rest = self.join_properties(record, found, cpp, mirror)
        if rest:
            record["members"] = rest
        traits = self.traits(cpp)
        if traits:
            record["traits"] = traits

    def traits(self, cpp):
        """The switches a struct sets in its TStructOpsTypeTraits."""
        types = self.types
        index = types.find(TRAITS + cpp + ">")
        if index is None:
            return None
        head = types.head(index)
        found = []
        try:
            for entry in types.fields(head["fields"]):
                if entry[0] != "nested":
                    continue
                for name, value in types.enumerators(entry[2]) or ():
                    if value and name not in found:
                        found.append(name)
        except (pdbfile.PdbError, ValueError, IndexError):
            return None
        return found

    def join_enum(self, record):
        types = self.types
        checks = self.checks
        head = None
        for index in types.find_all(record["cpp_type"]):
            head = types.head(index)
            if head is not None and head["kind"] == pdbfile.LF_ENUM:
                head["index"] = index
                break
            head = None
        if head is None:
            self.count("enums no code uses, so with no type record", record["cpp_type"])
            return
        self.wanted[head["index"]] = record
        record["underlying"] = types.text(head["under"])
        record["size"] = types.size(head["under"])
        declared = dict(types.enumerators(head["index"]) or ())
        size = record["size"] or 8
        wrong = []
        for name, value in record["values"]:
            short = name.rsplit("::", 1)[-1]
            if short not in declared:
                wrong.append(short + " is not declared")
            elif (declared[short] - value) % (1 << (8 * size)):
                wrong.append("%s is %d in the tables, %d in the pdb" % (short, value, declared[short]))
        checks.add("enum values: tables against type records", not wrong, "%s: %s" % (record["cpp_type"], "; ".join(wrong[:3])))
        listed = {entry[0].rsplit("::", 1)[-1] for entry in record["values"]}
        unlisted = [name for name in declared if name not in listed]
        if unlisted:
            record["unreflected"] = unlisted

    def join_untabled(self, record):
        record["from"] = {"package": "modules", "super": "pdb"}
        record["intrinsic"] = True
        record["super"] = None
        self.join_class(record)

    def headers(self):
        """The header each type was declared in, with the build machine's folder cut off."""
        found = self.symbols.sources(self.wanted)
        paths = [path for path, _ in found.values()]
        root = os.path.commonprefix([path.lower() for path in paths]) if paths else ""
        cut = root.replace("/", "\\").rfind("\\") + 1
        for index, (path, line) in found.items():
            self.wanted[index]["header"] = path[cut:].replace("\\", "/")
        self.facts["types with a header named by the PDB"] = len(found)
        self.facts["types with a type record"] = len(self.wanted)
        self.facts["types the program defines more than once"] = sum(
            1 for found in self.layouts.values() if found and found["count"] > 1)
        return paths[0][:cut] if paths else None

    def modules(self):
        """Classes compiled in one folder belong to one package. The folder's name can be a short form of it."""
        folders = self.tables["folders"]
        for record in self.tables["classes"]:
            folder = self.symbols.module_of(record["table"])
            self.checks.add("class packages: one for each folder of object files", folders.get(folder) == record["package"],
                            "%s: %s, built in %s with %s" % (record["cpp"], record["package"], folder, folders.get(folder)))
        self.facts["folders of object files named otherwise than their package"] = sorted(
            "%s for %s" % (folder, package) for folder, package in folders.items() if "/Script/" + folder != package)

    def run(self):
        tables = self.tables
        for record in tables["classes"]:
            self.join_class(record)
        for record in tables["untabled"]:
            self.join_untabled(record)
        for record in tables["structs"]:
            self.join_struct(record)
        for record in tables["enums"]:
            self.join_enum(record)
        self.modules()
        return self.headers()


def own_checks(tables, checks):
    """The tables against themselves."""
    counts = tables["counts"]
    named = counts["property tables named by the PDB"]
    checks.add("every property table the PDB names is reached from a class, struct or function",
               not counts["property tables no list reaches"], "%d of %d are not" % (counts["property tables no list reaches"], named))
    checks.add("every property read is one the PDB names", not counts["properties read that the PDB does not name"],
               "%d are not" % counts["properties read that the PDB does not name"])
    for note in tables["notes"]:
        checks.add("tables that read without remark", False, note)
    functions = [function for record in tables["classes"] for function in record["functions"]] + tables["delegates"]
    for function in functions:
        size, end = function["structure_size"], function["parms_size"]
        checks.add("parameters end inside their block", end <= size, "%s: ends at %d of %d" % (function["path"], end, size))
        returns = [i for i, one in enumerate(function["params"]) if one["flags"] & 0x400]
        checks.add("the return value is the last parameter", returns in ([], [len(function["params"]) - 1]), function["path"])
    paths = {}
    for group in ("classes", "untabled", "structs", "enums"):
        for record in tables[group]:
            checks.add("paths that name one type", record["path"].lower() not in paths, record["path"])
            paths[record["path"].lower()] = group


def block_size(function):
    """What a call of the function needs room for: where its parameters end, or the whole block the table gives when that is larger."""
    return max(function["parms_size"], function["structure_size"])


def count(tables):
    """How many of everything, per package."""
    per = {}

    def row(package):
        return per.setdefault(package, {"classes": 0, "structs": 0, "enums": 0, "functions": 0, "delegates": 0,
                                        "sparse_delegates": 0, "properties": 0, "params": 0, "oversized": 0,
                                        "oversized_native": 0, "oversized_delegates": 0})

    def tally(properties):
        total = 0
        for one in properties:
            total += 1 + tally([one[key] for key in ("inner", "key", "value", "element", "underlying") if key in one])
        return total

    for record in tables["classes"]:
        line = row(record["package"])
        line["classes"] += 1
        line["properties"] += tally(record["properties"])
        for function in record["functions"]:
            line["functions"] += 1
            line["params"] += tally(function["params"])
            if block_size(function) > exe_tables.OVERSIZED:
                line["oversized"] += 1
                line["oversized_native"] += bool(function["flags"] & 0x400)
    for record in tables["untabled"]:
        row(record["package"])["classes"] += 1
    for record in tables["structs"]:
        line = row(record["package"])
        line["structs"] += 1
        line["properties"] += tally(record["properties"])
    for record in tables["enums"]:
        row(record["package"])["enums"] += 1
    for record in tables["delegates"]:
        line = row(record["owner"].split(".")[0])
        line["delegates"] += 1
        line["sparse_delegates"] += "sparse" in record
        line["params"] += tally(record["params"])
        line["oversized_delegates"] += block_size(record) > exe_tables.OVERSIZED
    total = {}
    for line in per.values():
        for key, value in line.items():
            total[key] = total.get(key, 0) + value
    return {"total": total, "packages": dict(sorted(per.items()))}


def make(exe, pdb_path, log=lambda text: None):
    """Reads both files and returns the model as one dict."""
    started = time.perf_counter()
    # First, so a file that is no program is called that, not a game that shipped without its PDB.
    record = debug_record(exe)
    if not pdb_path or not os.path.isfile(pdb_path):
        raise ModelError("The game shipped no PDB beside %s. The exe's tables cannot be found without the names in it; "
                         "the models of earlier builds stay where they are." % exe)
    symbols = pdbfile.Pdb(pdb_path)
    try:
        if record is None or (record[0], record[1]) != (symbols.guid, symbols.age):
            raise ModelError("%s does not belong to %s (the exe names %s, the PDB is %s age %d). Let Steam finish "
                             "updating the game, then run this again." % (pdb_path, exe, record and "%s age %d" % record[:2],
                                                                           symbols.guid, symbols.age))
        if symbols.stripped:
            raise ModelError("%s holds public names only. The model needs the full one." % pdb_path)
        log("reading the exe's tables")
        tables = exe_tables.read(exe, symbols)
        times = {"tables": time.perf_counter() - started}
        log("reading type records")
        types = pdbfile.Types(symbols)
        types.index()
        times["type index"] = time.perf_counter() - started - times["tables"]
        log("joining")
        joiner = Joiner(tables, types, symbols)
        root = joiner.run()
        own_checks(tables, joiner.checks)
        times["join"] = time.perf_counter() - started - times["tables"] - times["type index"]
    finally:
        symbols.close()
    state = steam_state() or {}
    packages = sorted(tables["packages"].values(), key=lambda package: package["name"])
    return {
        "format": FORMAT,
        "what": "native types of one build of the game, from its exe and PDB",
        "build": {"id": build_id(exe), "pdb_guid": str(record[0]), "pdb_age": record[1], "exe_bytes": os.path.getsize(exe),
                  "pdb_bytes": os.path.getsize(pdb_path), "steam_build": state.get("build"), "source_root": root},
        "made": {"seconds": {key: round(value, 1) for key, value in times.items()}, "type_records": types.last - types.first},
        "from": FROM,
        "flags": {family: {str(bit): name for bit, name in table.items()} for family, table in exe_tables.FLAGS.items()},
        "counts": count(tables),
        "facts": joiner.facts,
        "checks": joiner.checks.listed(),
        "packages": packages,
        "classes": tables["classes"] + tables["untabled"],
        "structs": tables["structs"],
        "enums": tables["enums"],
        "delegates": tables["delegates"],
    }


def write(model, path):
    """One record a line, so the file can be searched as text."""
    os.makedirs(os.path.dirname(path), exist_ok=True)
    groups = ("checks", "packages", "classes", "structs", "enums", "delegates")
    temporary = path + ".part"
    with open(temporary, "w", encoding="utf-8", newline="\n") as file:
        parts = []
        for key, value in model.items():
            if key in groups:
                rows = ",\n".join(json.dumps(record, separators=(",", ":")) for record in value)
                parts.append('"%s":[\n%s\n]' % (key, rows))
            else:
                parts.append('"%s":%s' % (key, json.dumps(value, separators=(",", ":"))))
        file.write("{\n" + ",\n".join(parts) + "\n}\n")
    os.replace(temporary, path)


def load(path=None):
    """The model of the installed build, as written by `write`."""
    path = path or os.path.join(model_dir(), "native.json")
    if not os.path.isfile(path):
        raise ModelError("No native model at %s. Make it with: python scripts\\gamemodel\\native.py" % path)
    with open(path, encoding="utf-8") as file:
        return json.load(file)


def failed(model):
    """The checks where the two readers disagree."""
    return [row for row in model["checks"] if row["differ"]]


def main(arguments=None):
    parser = argparse.ArgumentParser(description="Make the native half of the game's model from its exe and PDB.")
    parser.add_argument("--exe", help="the game's exe (default: the installed game)")
    parser.add_argument("--pdb", help="its PDB (default: the file beside the exe)")
    parser.add_argument("--out", help="where to write (default: build\\game-model\\<build id>\\native.json)")
    options = parser.parse_args(arguments)
    lower_priority()
    started = time.perf_counter()
    try:
        exe = options.exe or game_files()[0]
        if not os.path.isfile(exe):
            print("native model: %s is not there." % exe, file=sys.stderr)
            return 1
        pdb_path = options.pdb or exe[:-4] + ".pdb"
        out = options.out or os.path.join(model_dir(exe), "native.json")
        model = make(exe, pdb_path, lambda text: print(text, flush=True))
        peak = peak_memory()
        model["made"]["seconds"]["all"] = round(time.perf_counter() - started, 1)
        model["made"]["peak_bytes"] = peak[0] if peak else None
        write(model, out)
    except (ModelError, BuildIdError, pdbfile.PdbError, exe_tables.TableError, OSError) as problem:
        print("native model: %s" % problem, file=sys.stderr)
        return 1
    total = model["counts"]["total"]
    print("%d classes, %d structs, %d enums, %d functions, %d delegates, %d properties, %d parameters"
          % (len(model["classes"]), total["structs"], total["enums"], total["functions"], total["delegates"],
             total["properties"], total["params"]))
    wrong = failed(model)
    for row in wrong:
        print("differs %d of %d: %s%s" % (row["differ"], row["agree"] + row["differ"], row["check"],
                                          " (%s)" % row["examples"][0] if row["examples"] else ""))
    print("%s (%.1f MB) in %.1f s, peak memory %s MB of its own"
          % (out, os.path.getsize(out) / 1e6, time.perf_counter() - started, peak and peak[0] >> 20))
    return 2 if wrong else 0


if __name__ == "__main__":
    sys.exit(main())
