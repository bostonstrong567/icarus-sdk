"""The header tool's tables that the exe still holds, found by the names the PDB gives their addresses."""
import bisect
import mmap
import struct

from . import pdb as pdbfile

FUNCTION_FLAGS = {
    0x1: "Final", 0x2: "RequiredAPI", 0x4: "BlueprintAuthorityOnly", 0x8: "BlueprintCosmetic", 0x40: "Net",
    0x80: "NetReliable", 0x100: "NetRequest", 0x200: "Exec", 0x400: "Native", 0x800: "Event", 0x1000: "NetResponse",
    0x2000: "Static", 0x4000: "NetMulticast", 0x8000: "UbergraphFunction", 0x10000: "MulticastDelegate",
    0x20000: "Public", 0x40000: "Private", 0x80000: "Protected", 0x100000: "Delegate", 0x200000: "NetServer",
    0x400000: "HasOutParms", 0x800000: "HasDefaults", 0x1000000: "NetClient", 0x2000000: "DLLImport",
    0x4000000: "BlueprintCallable", 0x8000000: "BlueprintEvent", 0x10000000: "BlueprintPure",
    0x20000000: "EditorOnly", 0x40000000: "Const", 0x80000000: "NetValidate",
}
PROPERTY_FLAGS = {
    0x1: "Edit", 0x2: "ConstParm", 0x4: "BlueprintVisible", 0x8: "ExportObject", 0x10: "BlueprintReadOnly",
    0x20: "Net", 0x40: "EditFixedSize", 0x80: "Parm", 0x100: "OutParm", 0x200: "ZeroConstructor",
    0x400: "ReturnParm", 0x800: "DisableEditOnTemplate", 0x2000: "Transient", 0x4000: "Config",
    0x10000: "DisableEditOnInstance", 0x20000: "EditConst", 0x40000: "GlobalConfig", 0x80000: "InstancedReference",
    0x200000: "DuplicateTransient", 0x1000000: "SaveGame", 0x2000000: "NoClear", 0x8000000: "ReferenceParm",
    0x10000000: "BlueprintAssignable", 0x20000000: "Deprecated", 0x40000000: "IsPlainOldData",
    0x80000000: "RepSkip", 0x100000000: "RepNotify", 0x200000000: "Interp", 0x400000000: "NonTransactional",
    0x800000000: "EditorOnly", 0x1000000000: "NoDestructor", 0x4000000000: "AutoWeak",
    0x8000000000: "ContainsInstancedReference", 0x10000000000: "AssetRegistrySearchable",
    0x20000000000: "SimpleDisplay", 0x40000000000: "AdvancedDisplay", 0x80000000000: "Protected",
    0x100000000000: "BlueprintCallable", 0x200000000000: "BlueprintAuthorityOnly",
    0x400000000000: "TextExportTransient", 0x800000000000: "NonPIEDuplicateTransient",
    0x1000000000000: "ExposeOnSpawn", 0x2000000000000: "PersistentInstance", 0x4000000000000: "UObjectWrapper",
    0x8000000000000: "HasGetValueTypeHash", 0x10000000000000: "NativeAccessSpecifierPublic",
    0x20000000000000: "NativeAccessSpecifierProtected", 0x40000000000000: "NativeAccessSpecifierPrivate",
    0x80000000000000: "SkipSerialization",
}
CLASS_FLAGS = {
    0x1: "Abstract", 0x2: "DefaultConfig", 0x4: "Config", 0x8: "Transient", 0x10: "Parsed",
    0x20: "MatchedSerializers", 0x40: "ProjectUserConfig", 0x80: "Native", 0x100: "NoExport", 0x200: "NotPlaceable",
    0x400: "PerObjectConfig", 0x800: "ReplicationDataIsSetUp", 0x1000: "EditInlineNew",
    0x2000: "CollapseCategories", 0x4000: "Interface", 0x8000: "CustomConstructor", 0x10000: "Const",
    0x20000: "LayoutChanging", 0x40000: "CompiledFromBlueprint", 0x80000: "MinimalAPI", 0x100000: "RequiredAPI",
    0x200000: "DefaultToInstanced", 0x400000: "TokenStreamAssembled", 0x800000: "HasInstancedReference",
    0x1000000: "Hidden", 0x2000000: "Deprecated", 0x4000000: "HideDropDown", 0x8000000: "GlobalUserConfig",
    0x10000000: "Intrinsic", 0x20000000: "Constructed", 0x40000000: "ConfigDoNotCheckDefaults",
    0x80000000: "NewerVersionExists",
}
STRUCT_FLAGS = {
    0x1: "Native", 0x2: "IdenticalNative", 0x4: "HasInstancedReference", 0x8: "NoExport", 0x10: "Atomic",
    0x20: "Immutable", 0x40: "AddStructReferencedObjects", 0x200: "RequiredAPI", 0x400: "NetSerializeNative",
    0x800: "SerializeNative", 0x1000: "CopyNative", 0x2000: "IsPlainOldData", 0x4000: "NoDestructor",
    0x8000: "ZeroConstructor", 0x10000: "ExportTextItemNative", 0x20000: "ImportTextItemNative",
    0x40000: "PostSerializeNative", 0x80000: "SerializeFromMismatchedTag", 0x100000: "NetDeltaSerializeNative",
    0x200000: "PostScriptConstruct", 0x400000: "NetSharedSerialization", 0x800000: "Trashed",
}
PACKAGE_FLAGS = {
    0x1: "NewlyCreated", 0x2: "ClientOptional", 0x4: "ServerSideOnly", 0x10: "CompiledIn", 0x20: "ForDiffing",
    0x40: "EditorOnly", 0x80: "Developer", 0x100: "UncookedOnly", 0x200: "Cooked", 0x400: "ContainsNoAsset",
    0x2000: "UnversionedProperties", 0x4000: "ContainsMapData", 0x10000: "Compiling", 0x20000: "ContainsMap",
    0x40000: "RequiresLocalizationGather", 0x100000: "PlayInEditor", 0x200000: "ContainsScript",
    0x400000: "DisallowExport", 0x10000000: "DynamicImports", 0x20000000: "RuntimeGenerated",
    0x40000000: "ReloadingForCooker", 0x80000000: "FilterEditorOnly",
}
ENUM_FLAGS = {0x1: "Flags"}
ENUM_FORMS = ("Regular", "Namespaced", "EnumClass")
FLAGS = {"function": FUNCTION_FLAGS, "property": PROPERTY_FLAGS, "class": CLASS_FLAGS, "struct": STRUCT_FLAGS,
         "package": PACKAGE_FLAGS, "enum": ENUM_FLAGS}

KINDS = (
    "ByteProperty", "Int8Property", "Int16Property", "IntProperty", "Int64Property", "UInt16Property",
    "UInt32Property", "UInt64Property", "IntProperty", "UInt32Property", "FloatProperty", "DoubleProperty",
    "BoolProperty", "SoftClassProperty", "WeakObjectProperty", "LazyObjectProperty", "SoftObjectProperty",
    "ClassProperty", "ObjectProperty", "InterfaceProperty", "NameProperty", "StrProperty", "ArrayProperty",
    "MapProperty", "SetProperty", "StructProperty", "DelegateProperty", "MulticastInlineDelegateProperty",
    "MulticastSparseDelegateProperty", "TextProperty", "EnumProperty", "FieldPathProperty",
)
SIZES = {
    "ByteProperty": 1, "Int8Property": 1, "Int16Property": 2, "IntProperty": 4, "Int64Property": 8,
    "UInt16Property": 2, "UInt32Property": 4, "UInt64Property": 8, "FloatProperty": 4, "DoubleProperty": 8,
    "SoftClassProperty": 0x28, "WeakObjectProperty": 8, "LazyObjectProperty": 0x1C, "SoftObjectProperty": 0x28,
    "ClassProperty": 8, "ObjectProperty": 8, "InterfaceProperty": 16, "NameProperty": 8, "StrProperty": 16,
    "ArrayProperty": 16, "MapProperty": 0x50, "SetProperty": 0x50, "DelegateProperty": 16,
    "MulticastInlineDelegateProperty": 16, "MulticastSparseDelegateProperty": 1, "TextProperty": 0x18,
    "FieldPathProperty": 0x20,
}
CHILDREN = {"ArrayProperty": ("inner",), "SetProperty": ("element",), "MapProperty": ("key", "value"),
            "EnumProperty": ("underlying",)}
TARGETS = {
    "ByteProperty": ("enum",), "EnumProperty": ("enum",), "ObjectProperty": ("class",),
    "WeakObjectProperty": ("class",), "LazyObjectProperty": ("class",), "SoftObjectProperty": ("class",),
    "ClassProperty": ("meta_class", "class"), "SoftClassProperty": ("meta_class",),
    "InterfaceProperty": ("interface",), "StructProperty": ("struct",), "DelegateProperty": ("signature",),
    "MulticastInlineDelegateProperty": ("signature",), "MulticastSparseDelegateProperty": ("signature",),
}

CONSTRUCT = "Z_Construct_U"
CLASS, STRUCT, ENUM, PACKAGE = "Z_Construct_UClass_", "Z_Construct_UScriptStruct_", "Z_Construct_UEnum_", "Z_Construct_UPackage_"
FUNCTIONS = ("Z_Construct_UFunction_", "Z_Construct_UDelegateFunction_", "Z_Construct_USparseDelegateFunction_")
STATICS = "_Statics::"

CLASS_TABLE = struct.Struct("<QQQQQQQiiiiI")
STRUCT_TABLE = struct.Struct("<QQQQQQQiII")
FUNCTION_TABLE = struct.Struct("<QQQQQQQiIIHH")
ENUM_TABLE = struct.Struct("<QQQQQiIIIB")
PACKAGE_TABLE = struct.Struct("<QQiIII")
PROPERTY_TABLE = struct.Struct("<QQQIIii")
POINTER = struct.Struct("<Q")
PAIR = struct.Struct("<QQ")
INTERFACE = struct.Struct("<Qi?")
BOOL_TAIL = struct.Struct("<QQ")
NATIVE_BOOL = 0x20
OVERSIZED = 0x200


class TableError(Exception):
    pass


def flag_names(bits, table):
    return [name for bit, name in table.items() if bits & bit]


class Image:
    """The exe's sections, read by address."""

    def __init__(self, path):
        self.path = path
        self.file = open(path, "rb")
        self.map = mmap.mmap(self.file.fileno(), 0, access=mmap.ACCESS_READ)
        data = self.map
        pe, = struct.unpack_from("<I", data, 0x3C)
        if data[:2] != b"MZ" or data[pe:pe + 4] != b"PE\0\0":
            self.close()
            raise TableError("%s is not a Windows program." % path)
        count, = struct.unpack_from("<H", data, pe + 6)
        self.timestamp, = struct.unpack_from("<I", data, pe + 8)
        optional_size, = struct.unpack_from("<H", data, pe + 20)
        optional = pe + 24
        if struct.unpack_from("<H", data, optional)[0] != 0x20B:
            self.close()
            raise TableError("%s is not a 64-bit program." % path)
        self.base, = struct.unpack_from("<Q", data, optional + 24)
        self.image_size, = struct.unpack_from("<I", data, optional + 56)
        self.sections = []
        at = optional + optional_size
        for _ in range(count):
            name = bytes(data[at:at + 8]).rstrip(b"\0").decode("ascii", "replace")
            virtual_size, virtual, raw_size, raw = struct.unpack_from("<IIII", data, at + 8)
            self.sections.append((virtual, min(virtual_size or raw_size, raw_size), raw, name))
            at += 40
        self.sections.sort()
        self.starts = [section[0] for section in self.sections]
        self._text = {}

    def close(self):
        self.map.close()
        self.file.close()

    def offset(self, rva, length=1):
        """Where an address sits in the file, or None when the file holds no bytes for it."""
        i = bisect.bisect_right(self.starts, rva) - 1
        if i < 0:
            return None
        virtual, size, raw, _ = self.sections[i]
        if rva + length > virtual + size:
            return None
        return raw + rva - virtual

    def unpack(self, form, rva):
        at = self.offset(rva, form.size)
        if at is None:
            raise TableError("address 0x%X is not in the file." % rva)
        return form.unpack_from(self.map, at)

    def read(self, rva, length):
        at = self.offset(rva, length)
        return None if at is None else self.map[at:at + length]

    def rva(self, pointer):
        """A stored pointer as an address inside the image, or None for a null or a stray one."""
        if not pointer or not self.base <= pointer < self.base + self.image_size:
            return None
        return pointer - self.base

    def text(self, pointer):
        if not pointer:
            return None
        found = self._text.get(pointer)
        if found is None:
            rva = self.rva(pointer)
            at = None if rva is None else self.offset(rva)
            if at is None:
                raise TableError("text pointer 0x%X is not in the file." % pointer)
            end = self.map.find(b"\0", at, at + 4096)
            found = self._text[pointer] = self.map[at:end if end >= 0 else at].decode("utf-8", "replace")
        return found

    def pointers(self, pointer, count):
        rva = self.rva(pointer)
        if rva is None or count <= 0:
            return ()
        at = self.offset(rva, 8 * count)
        if at is None:
            raise TableError("pointer list at 0x%X is not in the file." % rva)
        return struct.unpack_from("<%dQ" % count, self.map, at)


def set_bit(code):
    """What a property's set-bit function writes: (byte offset, mask of that byte), or None when not understood."""
    at = 0
    wide = 1
    if code[at:at + 1] == b"\x66":
        at += 1
    if 0x48 <= code[at] <= 0x4F:
        if code[at] & 0x07:
            return None
        at += 1
    first = code[at]
    test = False
    if first == 0x0F and code[at + 1] == 0xBA:
        test = True
        at += 2
    elif first in (0x80, 0xC6):
        at += 1
    elif first == 0x83:
        at += 1
    elif first == 0x81:
        wide = 4 if code[0] != 0x66 else 2
        at += 1
    else:
        return None
    form = code[at]
    mode, action, target = form >> 6, (form >> 3) & 7, form & 7
    if target != 1 or mode == 3:
        return None
    if test and action != 5 or first in (0x80, 0x81, 0x83) and action != 1 or first == 0xC6 and action != 0:
        return None
    at += 1
    if mode == 0:
        offset = 0
    elif mode == 1:
        offset, = struct.unpack_from("<b", code, at)
        at += 1
    else:
        offset, = struct.unpack_from("<i", code, at)
        at += 4
    value = int.from_bytes(code[at:at + wide], "little")
    at += wide
    if code[at] != 0xC3 or offset < 0:
        return None
    if test:
        return offset + value // 8, 1 << (value % 8)
    if first == 0xC6:
        return (offset, 0xFF) if value == 1 else None
    if value <= 0 or value & (value - 1):
        return None
    bit = value.bit_length() - 1
    return offset + bit // 8, 1 << (bit % 8)


class Tables:
    """Reads every table. `read()` gives packages, classes, structs, enums and functions as plain records."""

    def __init__(self, image, symbols):
        self.image = image
        self.symbols = symbols
        self.tables = {}
        self.properties = set()
        self.construct = {}
        self.address = {}
        self.natives = {}
        self.enum_tables = {}
        self.package_tables = {}
        self.paths = {}
        self.struct_sizes = {}
        self.enum_sizes = {}
        self.notes = []
        self.folders = {}
        self.untabled = {}
        self.reached = set()
        self.unread_bits = 0
        self.stray_properties = 0

    def note(self, text):
        if len(self.notes) < 200:
            self.notes.append(text)

    def gather(self):
        """One pass over the global symbols, one over the object files that hold enum and package tables."""
        symbols = self.symbols
        wanted = (pdbfile.S_PUB32, pdbfile.S_GDATA32, pdbfile.S_LDATA32)
        for kind, name, rva, _ in symbols.symbols(wanted, (b"Z_Construct_U", b"?Z_Construct_U", b"?exec")):
            if rva is None:
                continue
            if kind == pdbfile.S_PUB32:
                plain = pdbfile.plain_name(name.decode("ascii", "replace"))
                if plain is None:
                    continue
                scope, short = plain
                if scope is None:
                    self.construct.setdefault(rva, short)
                    self.address[short] = rva
                elif short.startswith("exec"):
                    self.natives[(scope, short[4:])] = rva
                continue
            text = name.decode("ascii", "replace")
            owner, _, member = text.partition(STATICS)
            if member in ("ClassParams", "ReturnStructParams", "FuncParams"):
                self.tables[owner] = rva
            elif member.startswith("NewProp_"):
                self.properties.add(rva)
        for module in symbols.modules():
            if ".gen." not in module[0]:
                continue
            found = symbols.local_data(module, (b"Z_Construct_UEnum_", b"Z_Construct_UPackage_"),
                                       (b"EnumParams", b"PackageParams"))
            for (owner, member), rva in found.items():
                if rva is not None:
                    (self.enum_tables if member == b"EnumParams" else self.package_tables)[owner.decode("ascii")] = rva

    def named(self, pointer):
        """The construct function a stored pointer names, or None."""
        rva = self.image.rva(pointer)
        return None if rva is None else self.construct.get(rva)

    def read(self):
        self.gather()
        packages = self.read_packages()
        classes = [self.class_head(owner, rva) for owner, rva in sorted(self.tables.items()) if owner.startswith(CLASS)]
        structs = [self.struct_head(owner, rva) for owner, rva in sorted(self.tables.items()) if owner.startswith(STRUCT)]
        enums = [self.read_enum(owner, rva) for owner, rva in sorted(self.enum_tables.items())]
        functions = {owner: self.function_head(owner, rva) for owner, rva in self.tables.items()
                     if owner.startswith(FUNCTIONS)}
        votes = {}
        for record in classes:
            self.paths[CLASS + record["cpp"]] = record["path"]
            folder = self.symbols.module_of(record["table"])
            if folder:
                seen = votes.setdefault(folder, {})
                seen[record["package"]] = seen.get(record["package"], 0) + 1
        self.folders = {folder: max(seen, key=seen.get) for folder, seen in votes.items()}
        for record in structs:
            self.paths[STRUCT + record["cpp"]] = record["path"]
            self.struct_sizes[record["path"]] = record["size"]
        for record in enums:
            self.paths[record.pop("symbol")] = record["path"]
        self.place_functions(functions)
        for record in classes:
            self.finish_class(record, functions)
        for record in structs:
            self.finish_struct(record)
        delegates = []
        for owner, record in sorted(functions.items()):
            self.finish_function(record)
            linked = record.pop("linked", False)
            if not owner.startswith(FUNCTIONS[0]):
                if linked:
                    record["listed"] = True
                delegates.append(record)
            elif not linked:
                self.note("function table %s is in no class's list." % owner)
        for record in structs:
            self.measure(record["properties"])
        for record in classes:
            self.measure(record["properties"])
            for function in record["functions"]:
                self.measure_function(function)
        for record in delegates:
            self.measure_function(record)
        return {"packages": packages, "classes": classes, "structs": structs, "enums": enums, "delegates": delegates}

    def read_packages(self):
        packages = {}
        for name in self.address:
            if name.startswith(PACKAGE):
                path = name[len(PACKAGE):].replace("_", "/", 2)
                packages[path] = {"name": path, "module": path.rsplit("/", 1)[-1]}
                self.paths[name] = path
        for owner, rva in self.package_tables.items():
            name, _, count, flags, body, declarations = self.image.unpack(PACKAGE_TABLE, rva)
            path = self.image.text(name)
            record = packages.get(self.paths.get(owner))
            if record is None or record["name"] != path:
                self.note("package table %s names %s." % (owner, path))
                continue
            record.update(flags=flags, body_crc=body, declarations_crc=declarations, table=rva)
        return packages

    def package_of(self, pointer, what):
        name = self.named(pointer)
        if name is None or not name.startswith(PACKAGE):
            raise TableError("%s has no package (its outer is %s)." % (what, name))
        return self.paths[name]

    def class_head(self, owner, rva):
        image = self.image
        (_, config, info, singletons, functions, properties, interfaces, singleton_count, function_count,
         property_count, interface_count, flags) = image.unpack(CLASS_TABLE, rva)
        cpp = owner[len(CLASS):]
        parent = package = None
        for pointer in image.pointers(singletons, singleton_count):
            name = self.named(pointer)
            if name is None:
                self.note("%s depends on something with no name." % owner)
            elif name.startswith(PACKAGE):
                package = self.paths[name]
            elif name.startswith(CLASS):
                parent = name
        if package is None:
            raise TableError("%s names no package." % owner)
        deprecated = cpp[1:].startswith("DEPRECATED_")
        name = cpp[len("UDEPRECATED_"):] if deprecated else cpp[1:]
        abstract = None
        place = image.rva(info)
        if place is not None:
            abstract = bool(image.read(place, 1)[0])
        return {"name": name, "cpp": cpp, "package": package, "path": package + "." + name, "super": parent,
                "flags": flags, "config": image.text(config), "abstract": abstract, "table": rva,
                "_functions": (functions, function_count), "_properties": (properties, property_count),
                "_interfaces": (interfaces, interface_count)}

    def struct_head(self, owner, rva):
        image = self.image
        outer, parent, operations, name, size, align, properties, count, _, flags = image.unpack(STRUCT_TABLE, rva)
        package = self.package_of(outer, owner)
        name = image.text(name)
        return {"name": name, "cpp": owner[len(STRUCT):], "package": package, "path": package + "." + name,
                "super": self.named(parent), "flags": flags, "size": size, "align": align,
                "native_operations": bool(operations), "table": rva, "_properties": (properties, count)}

    def read_enum(self, owner, rva):
        image = self.image
        outer, display, name, cpp, values, count, _, flags, dynamic, form = image.unpack(ENUM_TABLE, rva)
        package = self.package_of(outer, owner)
        name = image.text(name)
        listed = []
        place = image.rva(values)
        for i in range(count if place is not None else 0):
            text, value = image.unpack(PAIR, place + 16 * i)
            listed.append([image.text(text), value - (1 << 64) if value >> 63 else value])
        return {"name": name, "package": package, "path": package + "." + name, "cpp_type": image.text(cpp),
                "form": ENUM_FORMS[form] if form < len(ENUM_FORMS) else form, "flags": flags, "values": listed,
                "display_names": bool(display), "dynamic": bool(dynamic), "table": rva, "symbol": owner}

    def function_head(self, owner, rva):
        image = self.image
        (outer, parent, name, owning, delegate, size, properties, count, _, flags, rpc,
         response) = image.unpack(FUNCTION_TABLE, rva)
        record = {"name": image.text(name), "flags": flags, "structure_size": size, "table": rva,
                  "_outer": self.named(outer), "_super": self.named(parent), "_properties": (properties, count)}
        if rpc or response:
            record["rpc"] = rpc
            record["rpc_response"] = response
        if owning:
            record["sparse"] = {"owner": image.text(owning), "property": image.text(delegate)}
        return record

    def place_functions(self, functions):
        for owner, record in functions.items():
            outer = record.pop("_outer")
            where = self.paths.get(outer)
            if where is None:
                raise TableError("%s sits in %s, which has no table." % (owner, outer))
            record["path"] = where + (":" if outer.startswith(CLASS) else ".") + record["name"]
            record["owner"] = where
            self.paths[owner] = record["path"]
            if outer.startswith(CLASS):
                cpp = outer[len(CLASS):]
                native = self.natives.get((cpp, record["name"]), self.natives.get(("I" + cpp[1:], record["name"])))
                if native is not None:
                    record["native"] = native

    def path(self, pointer, what):
        """The path of the type a stored pointer constructs."""
        name = self.named(pointer)
        if name is None:
            if pointer:
                self.note("%s points at 0x%X, which has no name." % (what, pointer))
            return None
        return self.path_named(name, what)

    def path_named(self, name, what):
        if name.endswith("_NoRegister"):
            name = name[:-len("_NoRegister")]
        found = self.paths.get(name)
        if found is None and name.startswith(CLASS):
            found = self.paths[name] = self.untabled_class(name)
        if found is None:
            self.note("%s points at %s, which has no table." % (what, name))
        return found

    def untabled_class(self, name):
        """A class written by hand in the engine has a construct function and no table."""
        cpp = name[len(CLASS):]
        rva = self.address.get(name)
        module = self.symbols.module_of(rva) if rva is not None else None
        package = self.folders.get(module) or ("/Script/" + module if module else None)
        record = {"name": cpp[1:], "cpp": cpp, "package": package, "path": (package or "?") + "." + cpp[1:]}
        self.untabled[cpp] = record
        return record["path"]

    def finish_class(self, record, functions):
        image = self.image
        what = record["cpp"]
        record["super"] = self.path_named(record["super"], what) if record["super"] else None
        pointer, count = record.pop("_interfaces")
        place = image.rva(pointer)
        record["interfaces"] = []
        for i in range(count if place is not None else 0):
            target, offset, blueprint = image.unpack(INTERFACE, place + 16 * i)
            record["interfaces"].append({"class": self.path(target, what), "offset": offset, "blueprint": blueprint})
        record["properties"] = self.read_properties(record.pop("_properties"), what)
        pointer, count = record.pop("_functions")
        place = image.rva(pointer)
        record["functions"] = []
        for i in range(count if place is not None else 0):
            create, name = image.unpack(PAIR, place + 16 * i)
            owner = self.named(create)
            function = functions.get(owner)
            if function is None:
                raise TableError("%s lists a function with no table (%s)." % (what, image.text(name)))
            if function["name"] != image.text(name):
                self.note("%s lists %s under the name %s." % (what, function["name"], image.text(name)))
            function["linked"] = True
            if owner.startswith(FUNCTIONS[0]):
                record["functions"].append(function)

    def finish_struct(self, record):
        parent = record["super"]
        record["super"] = self.paths.get(parent) if parent else None
        if parent and record["super"] is None:
            self.note("%s has parent %s, which has no table." % (record["cpp"], parent))
        record["properties"] = self.read_properties(record.pop("_properties"), record["cpp"])

    def finish_function(self, record):
        parent = record.pop("_super")
        if parent:
            record["super"] = self.paths.get(parent)
        record["params"] = self.read_properties(record.pop("_properties"), record["path"])

    def read_properties(self, listed, what):
        pointer, count = listed
        pointers = list(self.image.pointers(pointer, count))
        found = []
        while pointers:
            found.append(self.read_property(pointers, what))
        found.reverse()
        return found

    def read_property(self, pointers, what):
        image = self.image
        rva = image.rva(pointers.pop())
        if rva is None:
            raise TableError("%s lists a property that is not in the image." % what)
        if self.properties and rva not in self.properties:
            self.stray_properties += 1
        self.reached.add(rva)
        name, notify, flags, gen, _, dim, offset = image.unpack(PROPERTY_TABLE, rva)
        kind = KINDS[gen & 0x1F]
        record = {"name": image.text(name), "kind": kind, "flags": flags}
        if dim != 1:
            record["dim"] = dim
        if notify:
            record["repnotify"] = image.text(notify)
        where = what + "." + record["name"]
        if kind == "BoolProperty":
            _, setter = image.unpack(BOOL_TAIL, rva + 40)
            record["element_size"] = offset
            record["native_bool"] = bool(gen & NATIVE_BOOL)
            place = image.rva(setter)
            code = image.read(place, 16) if place is not None else None
            written = set_bit(code) if code else None
            if not setter:
                record["offset"] = 0
            elif written is None:
                self.unread_bits += 1
                record["offset"] = None
            else:
                record["offset"] = written[0]
                if not record["native_bool"]:
                    record["mask"] = written[1]
        else:
            record["offset"] = offset
            targets = TARGETS.get(kind, ())
            if targets:
                stored = image.unpack(struct.Struct("<%dQ" % len(targets)), rva + 40)
                for key, pointer in zip(targets, stored):
                    if pointer:
                        record[key] = self.path(pointer, where)
        for key in CHILDREN.get(kind, ()):
            if not pointers:
                raise TableError("%s is cut short: no %s." % (where, key))
            child = record[key] = self.read_property(pointers, where)
            del child["offset"]
        return record

    def measure(self, properties):
        """Fills in the bytes each property takes, from its kind and the tables of the types it names."""
        end = 0
        for record in properties:
            size = self.size_of(record)
            if size is not None:
                record["size"] = size
                if record["offset"] is not None:
                    end = max(end, record["offset"] + size * record.get("dim", 1))
        return end

    def size_of(self, record):
        kind = record["kind"]
        for key in CHILDREN.get(kind, ()):
            child = record[key]
            size = self.size_of(child)
            if size is not None:
                child["size"] = size
        if kind == "BoolProperty":
            return record["element_size"]
        if kind == "StructProperty":
            return self.struct_sizes.get(record.get("struct"))
        if kind == "EnumProperty":
            return record["underlying"].get("size")
        return SIZES.get(kind)

    def measure_function(self, record):
        end = self.measure(record["params"])
        unsized = [one["name"] for one in record["params"] if one.get("size") is None or one["offset"] is None]
        if unsized:
            # The block's own size is the safe answer when a parameter cannot be measured.
            self.note("%s: no size or place for %s, so its parameters count as the whole block (%d bytes)." % (
                record["path"], ", ".join(unsized), record["structure_size"]))
            end = max(end, record["structure_size"])
        record["parms_size"] = end


def read(exe, symbols):
    """Every table of the exe. `symbols` is the open PDB that names them."""
    image = Image(exe)
    try:
        tables = Tables(image, symbols)
        found = tables.read()
        for name in tables.address:
            if name.startswith(CLASS) and not name.endswith("_NoRegister") and name not in tables.paths:
                tables.untabled_class(name)
        found["untabled"] = sorted(tables.untabled.values(), key=lambda record: record["cpp"])
        found["folders"] = tables.folders
        found["notes"] = tables.notes
        found["counts"] = {
            "property tables named by the PDB": len(tables.properties),
            "property tables no list reaches": len(tables.properties - tables.reached),
            "properties read that the PDB does not name": tables.stray_properties,
            "set-bit functions not understood": tables.unread_bits,
            "native functions named by the PDB": len(tables.natives),
        }
        return found
    finally:
        image.close()
