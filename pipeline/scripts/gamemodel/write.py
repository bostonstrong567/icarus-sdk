"""What is written from the model of the game.

    python scripts\\gamemodel\\write.py [--dir folder]

Writes, into the folder of one build (build\\game-model\\<build id>):

  oversized_functions.lua   the functions whose parameter block is larger than 512 bytes, with the exact size;
                            a function whose size could not be worked out is listed too, as over the limit
  oversized_functions.union.lua   the list Wax ships today with the functions over the limit that it misses,
                            under the header the shipped file carries, so it can be copied over that file
  struct_traits.lua         the structs that carry a vtable pointer, and the structs that hold one by value
  blueprint_calls.lua       the native functions blueprint bytecode calls; only when the model holds bytecode
                            (python scripts\\gamemodel\\bytecode.py, then model.py)
  spelled_otherwise.txt     names an object dump of the running game spells differently; only when an index made
                            from a dump is there to compare with

index(model) gives the game index in the shape scripts\\gameindex.py has always written; `gameindex.py build`
writes it to build\\game-index\\index.json and `gameindex.py types` makes the editor's definitions from that.
Nothing here writes into wax\\runtime.

Exit code 0 means written from a clean model. 2 means written, with CHECK lines to look at: the model is not
clean (model.unclean), a function has no known size, or the dump holds a name or an offset the model does not.
1 means not written.
"""
import os
import sys

if __name__ == "__main__" and not __package__:
    import runpy
    sys.path[0] = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    runpy.run_module("gamemodel.write", run_name="__main__")
    sys.exit(0)

import argparse

from . import model as modelfile

INDEX_FORMAT = 1
OVERSIZED = modelfile.OVERSIZED
OVERSIZED_FILE = "oversized_functions.lua"
TRAITS_FILE = "struct_traits.lua"
CALLS_FILE = "blueprint_calls.lua"
SPELLED_FILE = "spelled_otherwise.txt"
UNION_FILE = "oversized_functions.union.lua"
SHIPPED = os.path.join(modelfile.ROOT, "wax", "runtime", "data", OVERSIZED_FILE)
DUMP_INDEX = "index.dump.json"
FUNCTION_LIBRARY = "/Script/Engine.BlueprintFunctionLibrary"
LATENT = "/Script/Engine.LatentActionInfo"
FUNCTION_FINAL, FUNCTION_NATIVE, FUNCTION_DELEGATE = 0x1, 0x400, 0x100000
SHOWN = 20
UNSIZED_NOTE = "size not known"
CLASS_KINDS = {"blueprint": "BlueprintGeneratedClass", "widget": "WidgetBlueprintGeneratedClass",
               "anim": "AnimBlueprintGeneratedClass", "rig": "ControlRigBlueprintGeneratedClass"}
PROCESS_CLASSES = {"GameEngine": "/Script/Engine.Engine", "GameViewportClientClassName": "/Script/Engine.GameViewportClient",
                   "GameInstanceClass": "/Script/Engine.GameInstance"}
NO_BYTECODE = ("The model holds no bytecode. Read it with: python scripts\\gamemodel\\bytecode.py, then run model.py "
               "and this again. Until then a hook on a native function has to count as reached from blueprints.")


def package_of(path):
    return path.split(".", 1)[0]


def folded(path):
    """A path as the reader of a list has to compare it: lower case, spaces at the end dropped."""
    return modelfile.folded(path)


def described(one):
    """A property's type as the index spells it."""
    out = {"type": one["type"]}
    for key in ("ref", "enum"):
        if key in one:
            out[key] = one[key]
    for key in ("inner", "key", "value"):
        if key in one:
            out[key] = described(one[key])
    return out


def member(one):
    out = {"name": one["name"]}
    out.update(described(one))
    if one.get("offset") is not None:
        out["offset"] = one["offset"]
    if "mask" in one:
        out["mask"] = one["mask"]
    return out


def parameter(one):
    out = {"name": one["name"]}
    out.update(described(one))
    return out


def function(one, native_owner, library):
    """One function of the model as the index has it.

    "oversized" comes with "frame", the bytes its parameters take, and is only set from a number that was
    worked out. A function whose size is not known is "unsized"; its "frame" is then what it takes at least.
    """
    name = one["name"]
    out = {"name": name, "params": [parameter(item) for item in one["params"]]}
    if "returns" in one:
        out["returns"] = described(one["returns"])
    flags = []
    if one["flags"] & FUNCTION_DELEGATE or name.endswith("__DelegateSignature"):
        flags.append("delegate")
    elif not native_owner:
        flags.append("blueprint")
    elif one["flags"] & FUNCTION_NATIVE:
        flags.append("native")
    else:
        flags.append("event")
    if library:
        flags.append("static")
    if name.startswith("ExecuteUbergraph"):
        flags.append("internal")
    if any(item.get("ref") == LATENT for item in out["params"]):
        flags.append("latent")
    size = modelfile.block_size(one)
    if size is None:
        flags.append("unsized")
        size = one.get("parms_at_least", 0)
    if size > OVERSIZED:
        flags.append("oversized")
        out["frame"] = size
    out["flags"] = flags
    if one.get("locals"):
        out["locals"] = one["locals"]
    return out


def index(model):
    """The game index (format 1 of scripts\\gameindex.py) with every class of the model in it."""
    classes, structs, enums, delegates = [], [], [], []
    scoped = {}
    for one in model["delegates"]:
        if "." in one["owner"]:
            scoped.setdefault(one["owner"], []).append(one)
    for one in model["classes"]:
        native = one["origin"] == "native"
        record = {"name": one["name"], "path": one["path"], "package": one["package"], "native": native}
        if one.get("parent"):
            record["parent"] = one["parent"]
        record["kind"] = "Class" if native else CLASS_KINDS.get(one.get("kind"), "BlueprintGeneratedClass")
        library = FUNCTION_LIBRARY in one.get("chain", ())
        record["properties"] = [member(item) for item in one.get("properties", ())]
        record["functions"] = [function(item, native, library) for item in one.get("functions", ())]
        record["functions"] += [function(item, native, library) for item in scoped.get(one["path"], ())]
        classes.append(record)
    for one in model["structs"]:
        record = {"name": one["name"], "path": one["path"], "package": one["package"], "native": one["origin"] == "native"}
        if one.get("parent"):
            record["parent"] = one["parent"]
        record["fields"] = [member(item) for item in one["fields"]]
        structs.append(record)
    for one in model["enums"]:
        enums.append({"name": one["name"], "path": one["path"], "package": one["package"], "native": one["origin"] == "native",
                      "values": [[name.split("::")[-1], value] for name, value in one["values"]]})
    for one in model["delegates"]:
        if "." not in one["owner"]:
            record = function(one, True, False)
            record.update(path=one["path"], package=package_of(one["path"]))
            delegates.append(record)
    for group in (classes, structs, enums, delegates):
        group.sort(key=lambda record: record["path"])
    counts = {
        "classes": len(classes),
        "native_classes": sum(1 for record in classes if record["native"]),
        "blueprint_classes": sum(1 for record in classes if not record["native"]),
        "structs": len(structs),
        "enums": len(enums),
        "enum_values": sum(len(record["values"]) for record in enums),
        "properties": sum(len(record["properties"]) for record in classes),
        "struct_fields": sum(len(record["fields"]) for record in structs),
        "functions": sum(len(record["functions"]) for record in classes),
        "parameters": sum(len(item["params"]) for record in classes for item in record["functions"]),
        "delegates": len(delegates),
    }
    build = model.get("build") or {}
    project = model.get("project") or {}
    source = {"model": build.get("id"), "steam_build": build.get("steam_build"),
              "written": (model.get("made") or {}).get("written"),
              "readers": "the exe's tables, the PDB, the asset registry and the cooked packages",
              "process_classes": {base: project[key] for key, base in PROCESS_CLASSES.items() if key in project},
              "unresolved_references": sum(row["count"] for row in model.get("report", ())
                                           if row["what"].startswith("references to a type"))}
    return {"format": INDEX_FORMAT, "source": source, "counts": counts,
            "classes": classes, "structs": structs, "enums": enums, "delegates": delegates}


def quoted(text):
    return '"%s"' % text.replace("\\", "\\\\").replace('"', '\\"')


def lua_table(rows, value=str):
    """rows are (key, value) or (key, value, a note for the end of the line)."""
    lines = []
    for row in rows:
        note = "  -- %s" % row[2] if len(row) > 2 and row[2] else ""
        lines.append("  [%s] = %s,%s\n" % (quoted(row[0]), value(row[1]), note))
    return "return {\n%s}\n" % "".join(lines)


def build_line(model):
    build = model.get("build") or {}
    steam = " (Steam build %s)" % build["steam_build"] if build.get("steam_build") else ""
    return "Build %s%s" % (build.get("id"), steam)


def oversized(model):
    """(sized, unsized): the functions a call from Lua has no room for.

    sized is [(path, bytes, kind)] of every function whose parameters take more than 512 bytes, largest first.
    unsized is [(path, bytes, kind)] of every function whose size could not be worked out: bytes is what was
    placed before the parameter of unknown size, so the block is at least that large.
    """
    sized, unsized = [], []
    groups = [(one, record["origin"]) for record in model["classes"] for one in record.get("functions", ())]
    groups += [(one, "delegate") for one in model["delegates"]]
    for one, kind in groups:
        size = modelfile.block_size(one)
        if size is None:
            unsized.append((one["path"], one.get("parms_at_least", 0), kind))
        elif size > OVERSIZED:
            sized.append((one["path"], size, kind))
    sized.sort(key=lambda row: (-row[1], row[0]))
    unsized.sort(key=lambda row: (-row[1], row[0]))
    return sized, unsized


def listed(model):
    """The rows of the list: (path, bytes, note). An unsized function is listed as over the limit, so it is refused."""
    sized, unsized = oversized(model)
    rows = [(path, size, None) for path, size, _kind in sized]
    rows += [(path, max(size, OVERSIZED + 1), UNSIZED_NOTE) for path, size, _kind in unsized]
    rows.sort(key=lambda row: (-row[1], row[0]))
    return rows


def oversized_text(model):
    sized, unsized = oversized(model)
    kinds = {kind: sum(1 for row in sized if row[2] == kind) for kind in ("native", "blueprint", "delegate")}
    head = [
        "-- Generated by scripts\\gamemodel\\write.py from the model of the game: functions whose parameter block is larger",
        "-- than the %d-byte buffer UE4SS uses for calls from Lua. The size counts parameters only, not a blueprint" % OVERSIZED,
        "-- function's local variables: the exe's tables give it for a native function, the engine's layout rule for a",
        "-- blueprint one. Keyed by the function's path as the game's files spell it. The running game may show a name",
        "-- in another letter case or with a space at its end, so whatever reads this looks a path up in lower case",
        "-- with spaces at the end dropped, on both sides.",
        "-- %s: %d functions (%d native, %d blueprint, %d delegate signatures)." % (
            build_line(model), len(sized), kinds["native"], kinds["blueprint"], kinds["delegate"]),
    ]
    if unsized:
        head.append("-- %d more have no known size and are listed as over the limit, so that they are refused too (\"%s\")."
                    % (len(unsized), UNSIZED_NOTE))
    return "\n".join(head) + "\n" + lua_table(listed(model))


def union(model, shipped):
    """The list Wax ships, {path: bytes}, with the functions over the limit that it misses. Gives (the list, what was added)."""
    known = {folded(path) for path in shipped}
    out = dict(shipped)
    added = []
    for path, size, _note in listed(model):
        if folded(path) not in known:
            out[path] = size
            added.append(path)
    return out, added


def union_text(model, shipped):
    """The union under the header of the file Wax ships: it names nothing that is not published with Wax."""
    out, _added = union(model, shipped)
    build = model.get("build") or {}
    head = [
        "-- Generated from the game's files and an object dump: functions Wax refuses to call from Lua. The number is the",
        "-- size in bytes measured for the call's parameter block; UE4SS's buffer for it holds %d, and a call that" % OVERSIZED,
        "-- overruns it kills the game. Keyed by the function's path. The running game spells some names in another",
        "-- letter case or with a space at the end, so a path is looked up in lower case with end spaces dropped.",
        "-- Game build %s, %d functions." % (build.get("steam_build") or build.get("id"), len(out)),
    ]
    return "\n".join(head) + "\n" + lua_table(sorted(out.items(), key=lambda row: (-row[1], row[0])))


def struct_traits(model):
    """{struct path: "own" or "inside"}: it carries a vtable pointer, or a field of it holds such a struct by value."""
    structs = {record["path"]: record for record in model["structs"]}
    found = {path: "own" for path, record in structs.items() if record.get("vtable")}
    state = {}

    def holds(path):
        if path in found:
            return True
        if path in state:
            return state[path]
        state[path] = False
        record = structs.get(path)
        inside = False
        while record is not None and not inside:
            inside = any(item["type"] == "Struct" and holds(item.get("ref")) for item in record["fields"])
            record = structs.get(record.get("parent"))
        state[path] = inside
        return inside

    for path in structs:
        if path not in found and holds(path):
            found[path] = "inside"
    return dict(sorted(found.items()))


def struct_traits_text(model):
    found = struct_traits(model)
    own = sum(1 for value in found.values() if value == "own")
    head = [
        "-- Generated by scripts\\gamemodel\\write.py from the model of the game: structs whose memory the engine has to",
        "-- construct. \"own\": the struct carries a vtable pointer (the PDB shows one in the struct or in a base).",
        "-- \"inside\": one of its fields holds such a struct by value. A list of either cannot be made longer entry by",
        "-- entry from Lua, because the new entries are zeroed memory: write the whole list instead.",
        "-- Keyed by the struct's path as the game's files spell it: look a path up in lower case, on both sides.",
        "-- %s: %d structs, %d own and %d inside." % (build_line(model), len(found), own, len(found) - own),
    ]
    return "\n".join(head) + "\n" + lua_table(found.items(), quoted)


def blueprint_calls(model):
    """{native function path: how many blueprint functions call it}, or None when the model holds no bytecode.

    A call by path counts for the function named. A call by name ("virtual") is resolved on the safe side: it
    counts for every native function of that name that is not final, since the code may run on any object.
    """
    native, by_name = {}, {}
    for record in model["classes"]:
        if record["origin"] != "native":
            continue
        for one in record.get("functions", ()):
            native[folded(one["path"])] = one["path"]
            if not one["flags"] & FUNCTION_FINAL:
                by_name.setdefault(folded(one["name"]), []).append(one["path"])
    found, any_calls = {}, False
    for record in model["classes"]:
        if record["origin"] != "blueprint":
            continue
        for one in record.get("functions", ()):
            if "calls" not in one:
                continue
            any_calls = True
            reached = {native.get(folded(str(target))) for target in one["calls"]}
            for name in one.get("virtual") or ():
                reached.update(by_name.get(folded(str(name)), ()))
            for path in reached - {None}:
                found[path] = found.get(path, 0) + 1
    return dict(sorted(found.items())) if any_calls else None


def blueprint_calls_text(model):
    found = blueprint_calls(model)
    if found is None:
        return None
    head = [
        "-- Generated by scripts\\gamemodel\\write.py from the model of the game: native functions that blueprint bytecode",
        "-- calls, with how many blueprint functions call each. A hook on one of these has only its context right when",
        "-- the call comes from a blueprint: its arguments are then the caller's own variables. A call made by name",
        "-- counts for every native function of that name that is not final. A function that is not listed here is",
        "-- called by no blueprint of this build; without this file, treat every native function as listed.",
        "-- Keyed by the function's path as the game's files spell it: look a path up in lower case, on both sides.",
        "-- %s: %d functions." % (build_line(model), len(found)),
    ]
    return "\n".join(head) + "\n" + lua_table(found.items())


def write_text(path, text):
    os.makedirs(os.path.dirname(os.path.abspath(path)), exist_ok=True)
    scratch = path + ".part"
    with open(scratch, "w", encoding="utf-8", newline="\n") as file:
        file.write(text)
    os.replace(scratch, path)


def write_lists(model, folder):
    """Writes the Lua lists into folder. Gives the lines to print."""
    lines = []
    sized, unsized = oversized(model)
    write_text(os.path.join(folder, OVERSIZED_FILE), oversized_text(model))
    lines.append("%s: %d functions over %d bytes of parameters (%d native, %d blueprint, %d delegate signatures)%s" % (
        OVERSIZED_FILE, len(sized), OVERSIZED, sum(1 for row in sized if row[2] == "native"),
        sum(1 for row in sized if row[2] == "blueprint"), sum(1 for row in sized if row[2] == "delegate"),
        "; %d more have no known size and are listed as over the limit" % len(unsized) if unsized else ""))
    traits = struct_traits(model)
    write_text(os.path.join(folder, TRAITS_FILE), struct_traits_text(model))
    lines.append("%s: %d structs carry a vtable pointer, %d more hold one by value" % (
        TRAITS_FILE, sum(1 for value in traits.values() if value == "own"),
        sum(1 for value in traits.values() if value == "inside")))
    calls = blueprint_calls_text(model)
    if calls is None:
        try:
            os.remove(os.path.join(folder, CALLS_FILE))     # one of an earlier model would be taken for this one's
        except OSError:
            pass
        lines.append("%s: not written. %s" % (CALLS_FILE, NO_BYTECODE))
    else:
        write_text(os.path.join(folder, CALLS_FILE), calls)
        lines.append("%s: %d native functions that blueprints call" % (CALLS_FILE, len(blueprint_calls(model))))
    return lines


def against_dump(made, dumped):
    """An index made from the model against one made from an object dump of the running game.

    Gives (missing, spelled): what the dump holds and the model lacks, and the names the two spell differently
    as (owner, the dump's spelling, the model's). The model spells a name as the game's files do; the running
    game shows whichever spelling it met first, and the export tool drops a space at the end of a name.
    """
    missing, spelled = [], []
    for group, keys in (("classes", ("properties", "functions")), ("structs", ("fields",)), ("enums", ("values",))):
        mine = {record["path"].lower(): record for record in made[group]}
        for record in dumped[group]:
            other = mine.get(record["path"].lower())
            if other is None:
                missing.append(record["path"])
                continue
            if other["path"] != record["path"]:
                spelled.append((package_of(record["path"]), record["path"], other["path"]))
            for key in keys:
                names = {}
                for item in other[key]:
                    name = item[0] if key == "values" else item["name"]
                    names.setdefault(name.strip().lower(), []).append(name)
                for item in record[key]:
                    name = item[0] if key == "values" else item["name"]
                    found = names.get(name.strip().lower())
                    if not found:
                        # A value the engine adds to an enum by itself is in no file.
                        if not (key == "values" and name.upper().endswith("_MAX")):
                            missing.append("%s%s%s" % (record["path"], ":" if key == "functions" else ".", name))
                    elif name not in found:
                        spelled.append((record["path"], name, found[0]))
    mine = {record["path"].lower() for record in made["delegates"]}
    mine.update(("%s:%s" % (record["path"], item["name"])).lower() for record in made["classes"] for item in record["functions"])
    for record in dumped["delegates"]:
        if record["path"].lower() not in mine and not record["name"].startswith("Default__"):
            missing.append(record["path"])
    return missing, spelled


def offsets_against_dump(made, dumped):
    """(how many offsets both give, the ones that differ): the model's member offsets against the running game's.

    The offsets of blueprint members are worked out here by rule, and the dump has them as the engine laid them
    out, so this is the one check of that rule on user structs and on members that follow one.
    """
    compared, differ = 0, []
    for group, key in (("classes", "properties"), ("structs", "fields")):
        mine = {record["path"].lower(): record for record in made[group]}
        for record in dumped[group]:
            other = mine.get(record["path"].lower())
            if other is None:
                continue
            # A class can hold two members of one name (a widget and a variable): they are taken in their order.
            offsets, taken = {}, {}
            for item in other[key]:
                offsets.setdefault(item["name"].strip().lower(), []).append(item.get("offset"))
            for item in record[key]:
                name = item["name"].strip().lower()
                place = taken.get(name, 0)
                taken[name] = place + 1
                found = offsets.get(name, [])[place:place + 1]
                if not found or found[0] is None or "offset" not in item:
                    continue
                compared += 1
                if found[0] != item["offset"]:
                    differ.append("%s.%s: %d in the dump, %d in the model" % (record["path"], item["name"], item["offset"], found[0]))
    return compared, differ


def spelled_text(spelled, dumped):
    source = dumped.get("source") or {}
    head = ["Names the running game spelled otherwise than the game's files do, by the object dump of %s." % source.get("written"),
            "The game compares names without letter case, so both find the same member; code that looks a name up",
            "in a table of its own has to do the same. One line a name: owner, the dump's spelling, the model's.", ""]
    return "\n".join(head + ["%s\t%s\t%s" % row for row in sorted(spelled)]) + "\n"


def spelled_oversized(model, spelled):
    """The listed functions whose name, or whose class's name, the dump spells otherwise: (model's path, the dump's)."""
    classes = {folded(theirs): theirs for _owner, theirs, _ours in spelled if theirs.startswith("/")}
    names = {}
    for owner, theirs, ours in spelled:
        if not theirs.startswith("/"):
            names[(folded(owner), folded(ours))] = theirs
    out = []
    for path, _size, _note in listed(model):
        owner, _, name = path.partition(":")
        theirs_owner = classes.get(folded(owner), owner)
        theirs_name = names.get((folded(owner), folded(name)), name)
        if (theirs_owner, theirs_name) != (owner, name):
            out.append((path, "%s:%s" % (theirs_owner, theirs_name)))
    return out


def shown(lines, limit=SHOWN):
    """CHECK lines, the first few of many."""
    out = ["CHECK %s" % line for line in lines[:limit]]
    if len(lines) > limit:
        out.append("CHECK ... and %d more" % (len(lines) - limit))
    return out


def main(arguments=None):
    parser = argparse.ArgumentParser(description="Write the lists the Wax runtime needs from the model of the game.")
    parser.add_argument("--dir", help="the folder of one build (default: build\\game-model\\<id of the installed build>)")
    parser.add_argument("--against", metavar="INDEX", help="an index made from an object dump (default: "
                        "build\\game-index\\index.dump.json when it is there): the model is checked against it")
    parser.add_argument("--shipped", metavar="FILE", default=SHIPPED, help="the list of oversized functions Wax ships "
                        "(default: wax\\runtime\\data\\oversized_functions.lua); it is only read")
    options = parser.parse_args(arguments)
    if hasattr(sys.stdout, "reconfigure"):
        sys.stdout.reconfigure(encoding="utf-8", errors="replace")
    modelfile.lower_priority()
    try:
        folder = options.dir or modelfile.model_dir()
        model = modelfile.load(os.path.join(folder, modelfile.MODEL))
    except (modelfile.ModelError, OSError, ValueError) as problem:
        print("write: %s" % problem, file=sys.stderr)
        return 1
    code = 0
    checks = ["the model: %s" % line for line in modelfile.unclean(model)]
    print("\n".join(write_lists(model, folder)))
    unsized = oversized(model)[1]
    checks += ["%s: the size of its parameters is not known, so it is listed as over the limit" % path
               for path, _size, _kind in unsized]
    if os.path.isfile(options.shipped):
        import gameindex
        with open(options.shipped, encoding="utf-8") as file:
            shipped = gameindex.read_lua_data(file.read(), options.shipped)
        added = union(model, shipped)[1]
        write_text(os.path.join(folder, UNION_FILE), union_text(model, shipped))
        print("%s: the list Wax ships (%d functions) plus %d over the limit that it misses" % (UNION_FILE, len(shipped), len(added)))
    against = options.against or os.path.join(modelfile.ROOT, "build", "game-index", DUMP_INDEX)
    if os.path.isfile(against):
        import json
        with open(against, encoding="utf-8") as file:
            dumped = json.load(file)
        made = index(model)
        missing, spelled = against_dump(made, dumped)
        compared, differ = offsets_against_dump(made, dumped)
        write_text(os.path.join(folder, SPELLED_FILE), spelled_text(spelled, dumped))
        taken = (dumped.get("source") or {}).get("written")
        print("%s: %d names the running game spelled otherwise (by %s, dump of %s)" % (SPELLED_FILE, len(spelled), against, taken))
        print("%d member offsets are in the dump and in the model; %d differ" % (compared, len(differ)))
        checks += ["the dump holds %s and the model does not" % name for name in missing]
        if differ:
            checks.append("%d of %d member offsets differ from the object dump of %s (a dump of an older build of the "
                          "game differs for that reason alone): %s" % (len(differ), compared, taken, "; ".join(differ[:4])))
        # Only a hint: the dump holds a part of the classes, so the reader of a list has to fold names whatever this says.
        for line in shown(["%s is %s in the running game: a reader that does not fold names lets this call through"
                           % pair for pair in spelled_oversized(model, spelled)]):
            print(line)
    elif options.against:
        print("write: no index at %s" % against, file=sys.stderr)
        code = 1
    for line in shown(checks):
        print(line)
    print("in %s" % folder)
    return code or (2 if checks else 0)


if __name__ == "__main__":
    sys.exit(main())
