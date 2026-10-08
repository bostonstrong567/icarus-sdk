"""Writes the model of the game as C++ headers to read: one file a class and a struct, enums and delegates by package.

    python headers.py <model.json> <out folder>

The headers are for reading and searching, not for compiling: they say what each type derives from, where each
variable sits and what each function takes, in the words the engine's own headers use.
"""
import json
import os
import re
import sys

PLAIN = {"Bool": "bool", "Int": "int32", "Int8": "int8", "Int16": "int16", "Int64": "int64", "Byte": "uint8",
         "UInt16": "uint16", "UInt32": "uint32", "UInt64": "uint64", "Float": "float", "Double": "double",
         "Name": "FName", "Str": "FString", "Text": "FText", "FieldPath": "FFieldPath"}
WRAPPED = {"SoftObject": "TSoftObjectPtr<%s>", "SoftClass": "TSoftClassPtr<%s>", "WeakObject": "TWeakObjectPtr<%s>",
           "LazyObject": "TLazyObjectPtr<%s>", "Class": "TSubclassOf<%s>"}
DELEGATES = {"Delegate", "MulticastInlineDelegate", "MulticastSparseDelegate"}
ACTOR = "/Script/Engine.Actor"
INTERFACE = "/Script/CoreUObject.Interface"
PROPERTY_WORDS = (("Edit", "EditAnywhere"), ("Net", "Replicated"), ("RepNotify", "ReplicatedUsing"),
                  ("Transient", "Transient"), ("Config", "Config"), ("SaveGame", "SaveGame"),
                  ("BlueprintAssignable", "BlueprintAssignable"), ("InstancedReference", "Instanced"),
                  ("Interp", "Interp"), ("Deprecated", "Deprecated"))
FUNCTION_WORDS = (("Exec", "Exec"), ("BlueprintCallable", "BlueprintCallable"), ("BlueprintPure", "BlueprintPure"),
                  ("NetServer", "Server"), ("NetClient", "Client"), ("NetMulticast", "NetMulticast"),
                  ("NetReliable", "Reliable"), ("BlueprintAuthorityOnly", "BlueprintAuthorityOnly"),
                  ("BlueprintCosmetic", "BlueprintCosmetic"))
CLASS_WORDS = ("Abstract", "Transient", "Const", "NotPlaceable", "EditInlineNew", "MinimalAPI")


class Writer:
    def __init__(self, model):
        self.model = model
        self.bits = {kind: {name: int(bit) for bit, name in names.items()} for kind, names in model["flags"].items()}
        self.classes = {entry["path"]: entry for entry in model["classes"]}
        self.structs = {entry["path"]: entry for entry in model["structs"]}
        self.files = {}
        self.taken = set()

    def has(self, kind, flags, name):
        return bool(flags & self.bits[kind].get(name, 0))

    def class_name(self, path):
        entry = self.classes.get(path)
        if entry is None:
            return "U" + path.rsplit(".", 1)[-1]
        if entry.get("cpp"):
            return entry["cpp"]
        return ("A" if ACTOR in entry.get("chain", ()) else "U") + identifier(entry["name"])

    def struct_name(self, path):
        entry = self.structs.get(path)
        if entry is None:
            return "F" + path.rsplit(".", 1)[-1]
        return entry.get("cpp") or identifier(entry["name"])

    def type_of(self, prop):
        kind = prop.get("type")
        ref = prop.get("ref")
        if kind == "Byte" and prop.get("enum"):
            return "TEnumAsByte<%s>" % identifier(prop["enum"].rsplit(".", 1)[-1])
        if kind in PLAIN:
            return PLAIN[kind]
        if kind == "Enum":
            return identifier(ref.rsplit(".", 1)[-1]) if ref else "uint8"
        if kind == "Object":
            return self.class_name(ref) + "*" if ref else "UObject*"
        if kind in WRAPPED:
            return WRAPPED[kind] % (self.class_name(ref) if ref else "UObject")
        if kind == "Interface":
            name = self.class_name(ref) if ref else "UInterface"
            return "TScriptInterface<I%s>" % name[1:]
        if kind == "Struct":
            return self.struct_name(ref) if ref else "FStruct"
        if kind == "Array":
            return "TArray<%s>" % self.type_of(prop.get("inner") or {})
        if kind == "Set":
            return "TSet<%s>" % self.type_of(prop.get("inner") or {})
        if kind == "Map":
            return "TMap<%s, %s>" % (self.type_of(prop.get("key") or {}), self.type_of(prop.get("value") or {}))
        if kind in DELEGATES:
            name = (ref or "Delegate").rsplit(":", 1)[-1].rsplit(".", 1)[-1]
            return "F" + identifier(name.replace("__DelegateSignature", ""))
        return prop.get("cpp") or "void"

    def variable(self, prop, macro):
        flags = prop.get("flags", 0)
        words = [word for flag, word in PROPERTY_WORDS if self.has("property", flags, flag)
                 and not (word == "Instanced" and prop.get("type") in DELEGATES)]
        if self.has("property", flags, "BlueprintVisible"):
            words.append("BlueprintReadOnly" if self.has("property", flags, "BlueprintReadOnly") else "BlueprintReadWrite")
        name = identifier(prop["name"])
        if prop.get("type") == "Bool" and prop.get("mask") and not prop.get("native_bool", True):
            text = "uint8 %s : 1;" % name
            where = "0x%04X, mask 0x%02X" % (prop.get("offset", 0), prop["mask"])
        else:
            text = "%s %s;" % (self.type_of(prop), name)
            where = "0x%04X, size 0x%X" % (prop.get("offset", 0), prop.get("size", 0))
        if name != prop["name"]:
            where += ', named "%s"' % prop["name"]
        return "    %s(%s) %s  // %s" % (macro, ", ".join(words), text, where)

    def function(self, function, macro="UFUNCTION"):
        flags = function.get("flags", 0)
        words = [word for flag, word in FUNCTION_WORDS if self.has("function", flags, flag)]
        if self.has("function", flags, "Event"):
            words.append("BlueprintNativeEvent" if self.has("function", flags, "Native") else "BlueprintImplementableEvent")
        result = self.type_of(function["returns"]) if function.get("returns") else "void"
        params = []
        for param in function.get("params", ()):
            pflags = param.get("flags", 0)
            kind = self.type_of(param)
            if self.has("property", pflags, "ReturnParm"):
                result = kind
                continue
            if self.has("property", pflags, "OutParm"):
                kind = ("const %s&" if self.has("property", pflags, "ConstParm") else "%s&") % kind
            params.append("%s %s" % (kind, identifier(param["name"])))
        text = "%s%s %s(%s)%s;" % ("static " if self.has("function", flags, "Static") else "", result,
                                   identifier(function["name"]), ", ".join(params),
                                   " const" if self.has("function", flags, "Const") else "")
        note = "  // parameters 0x%X" % function["parms_size"] if function.get("parms_size") else ""
        if identifier(function["name"]) != function["name"]:
            note += '%s named "%s"' % ("," if note else "  //", function["name"])
        return "    %s(%s) %s%s" % (macro, ", ".join(words), text, note)

    def file_for(self, path, name=None):
        package, _, leaf = path.partition(".")
        parts = [clean(part) for part in package.strip("/").split("/")]
        if path.startswith("/Script/"):
            parts.append(clean(name or leaf))
        else:
            parts[-1] = clean(name or leaf)
        file = "/".join(parts) + ".h"
        while file.lower() in self.taken:
            file = file[:-2] + "_.h"
        self.taken.add(file.lower())
        return file

    def write_class(self, entry):
        flags = entry.get("flags", 0)
        words = [word for word in CLASS_WORDS if self.has("class", flags, word)]
        if entry.get("config"):
            words.append("Config=%s" % entry["config"])
        name = self.class_name(entry["path"])
        bases = []
        if entry.get("parent"):
            bases.append("public " + self.class_name(entry["parent"]))
        for interface in entry.get("interfaces", ()):
            bases.append("public I" + self.class_name(interface["class"])[1:])
        lines = ["// " + entry["path"]]
        if entry.get("chain"):
            lines.append("// Derives from: " + " > ".join(self.class_name(path) for path in entry["chain"]))
        about = []
        if entry.get("size"):
            about.append("size 0x%X" % entry["size"])
        if entry.get("header"):
            about.append("declared in " + entry["header"])
        if entry["origin"] == "blueprint":
            about.append("a blueprint class" + (", %s" % entry["kind"] if entry.get("kind") else ""))
        if about:
            lines.append("// " + ", ".join(about))
        lines += ["", "UCLASS(%s)" % ", ".join(words), "class %s%s" % (name, " : " + ", ".join(bases) if bases else ""),
                  "{", "public:"]
        for prop in sorted(entry.get("properties", ()), key=lambda prop: (prop.get("offset", 0), prop.get("mask", 0))):
            lines.append(self.variable(prop, "UPROPERTY"))
        hidden = entry.get("members") or ()
        if hidden:
            lines += ["", "    // Not reflected: the engine's scripting cannot see these."]
            for member in sorted(hidden, key=lambda member: member.get("offset", 0)):
                lines.append("    %s %s;  // 0x%04X%s" % (member.get("cpp", "?"), member["name"], member.get("offset", 0),
                                                         ", " + member["access"] if member.get("access") else ""))
        functions = sorted(entry.get("functions", ()), key=lambda function: function["name"])
        if functions:
            lines.append("")
            lines += [self.function(function) for function in functions]
        if entry.get("introduces"):
            lines += ["", "    // Virtual functions that start here:"]
            lines += wrapped(sorted(entry["introduces"]), "    //   ")
        lines.append("};")
        self.files[self.file_for(entry["path"])] = lines

    def write_struct(self, entry):
        name = self.struct_name(entry["path"])
        parent = " : public " + self.struct_name(entry["parent"]) if entry.get("parent") else ""
        about = ["size 0x%X" % entry["size"]] if entry.get("size") else []
        if entry.get("header"):
            about.append("declared in " + entry["header"])
        lines = ["// " + entry["path"]] + (["// " + ", ".join(about)] if about else [])
        lines += ["", "USTRUCT()", "struct %s%s" % (name, parent), "{"]
        for field in sorted(entry.get("fields", ()), key=lambda field: (field.get("offset", 0), field.get("mask", 0))):
            shown = dict(field, name=field.get("label") or field["name"])
            lines.append(self.variable(shown, "UPROPERTY"))
        hidden = entry.get("members") or ()
        if hidden:
            lines += ["", "    // Not reflected:"]
            for member in sorted(hidden, key=lambda member: member.get("offset", 0)):
                lines.append("    %s %s;  // 0x%04X" % (member.get("cpp", "?"), member["name"], member.get("offset", 0)))
        lines.append("};")
        self.files[self.file_for(entry["path"], "F_" + entry["name"] if entry["origin"] == "native" else None)] = lines

    def enum_lines(self, entry):
        name = identifier(entry["name"])
        lines = ["// " + entry["path"], "UENUM()", "enum class %s : %s" % (name, entry.get("underlying") or "uint8"), "{"]
        for value, number in entry.get("values", ()):
            lines.append("    %s = %s," % (identifier(value.rsplit("::", 1)[-1]), number))
        return lines + ["};", ""]

    def run(self):
        for entry in self.model["classes"]:
            self.write_class(entry)
        for entry in self.model["structs"]:
            self.write_struct(entry)
        grouped = {}
        for entry in self.model["enums"]:
            if entry["origin"] == "native":
                grouped.setdefault(entry["package"], []).extend(self.enum_lines(entry))
            else:
                self.files[self.file_for(entry["path"])] = self.enum_lines(entry)[:-1]
        for package, lines in grouped.items():
            self.files[self.file_for(package + "._Enums")] = lines[:-1]
        grouped = {}
        for entry in self.model["delegates"]:
            package = entry["path"].partition(".")[0]
            if not package.startswith("/Script/"):
                continue
            line = self.function(dict(entry, name=entry["name"].replace("__DelegateSignature", "")), "DELEGATE")
            grouped.setdefault(package, []).append(line.strip())
        for package, lines in grouped.items():
            self.files[self.file_for(package + "._Delegates")] = sorted(lines)
        return self.files


def identifier(name):
    text = re.sub(r"[^0-9A-Za-z_]", "_", name)
    return "_" + text if text[:1].isdigit() or not text else text


def clean(name):
    return re.sub(r'[^0-9A-Za-z_.+-]', "_", name)[:120] or "_"


def wrapped(names, lead, width=110):
    lines, line = [], lead
    for name in names:
        if len(line) + len(name) + 2 > width and line != lead:
            lines.append(line.rstrip(", ").rstrip(","))
            line = lead
        line += name + ", "
    return lines + [line.rstrip(", ")]


def main():
    model_file, out = sys.argv[1:3]
    with open(model_file, encoding="utf-8") as file:
        model = json.load(file)
    files = Writer(model).run()
    for name, lines in files.items():
        path = os.path.join(out, *name.split("/"))
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, "w", encoding="utf-8", newline="\n") as file:
            file.write("\n".join(lines) + "\n")
    print("%d headers in %s" % (len(files), out))


if __name__ == "__main__":
    main()
