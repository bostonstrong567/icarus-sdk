#!/usr/bin/env python3
"""What the game's cooked blueprints hold, as plain records.

Runs tools\\assets\\Ue4Export over every blueprint-like package (blueprints, widget, anim and control rig
blueprints, user-defined structs and enums) and turns each exported package into records: class path, parent,
properties with types and flags, functions with parameters, components with ids and parents, objects inside
the default object, the widget tree, struct fields with their ids, enum values.

The export runs in slices, at below-normal priority, at most 4 at a time, and can be stopped and started
again: a finished slice is kept in build\\game-model\\<build id>\\slices and is not run twice. The raw exports
stay in build\\game-model\\<build id>\\export. The game folder is only read.

  python scripts\\gamemodel\\cooked.py [--workers N] [--slice N] [--force] [--reconvert] [--list]

Measured on the build of 2026-09-30 with the game running: 9,458 packages in 69 s with four tools at a time,
each holding up to 776 MB; the exports are 310 MB. Reading kept exports again takes 15 s while Windows still
has them in memory and about 2 minutes when it does not.

Level blueprints are not exported: their package is a whole map. The export tool drops a space at the end of
a name (the game has members called "Initialise " and "OverlappedComponent "), so such a name is one
character short here. Compare names with the running game's without letter case: the two spell some differently.
"""
import argparse
import concurrent.futures
import ctypes
import hashlib
import importlib
import json
import os
import re
import subprocess
import sys
import threading
import time

build_id = importlib.import_module(__package__ + ".build_id" if __package__ else "build_id")
registry = importlib.import_module(__package__ + ".registry" if __package__ else "registry")

ROOT = build_id.ROOT
TOOL = os.path.join(ROOT, "tools", "assets", "Ue4Export", "Ue4Export.exe")
ENGINE = "UE4_27"
RECORD_FORMAT = 1
MAX_WORKERS = 4
SLICE = 500
MEMORY_LIMIT_MB = 4000
# A later slice was seen to hold 776 MB where the first held 240.
LATER_SLICES = 3.3
SLICE_TIMEOUT = 1800
BELOW_NORMAL = 0x00004000
NO_WINDOW = 0x08000000
PAK_FOOTER = 221
PAK_MAGIC = bytes.fromhex("e1126f5a")
GAME_CONFIG = "Icarus/Config/DefaultGame.ini"
LEVEL = "level blueprint: its package is a whole map"
NO_FILE = "no file of this package is in the paks"
CLASS_KINDS = registry.CLASS_KINDS
PLUGIN = re.compile(r"^(?:.*/)?Plugins/(?:.*/)?([^/]+)/Content/(.*)$", re.IGNORECASE)
FAILED_LINE = re.compile(r"Export of asset (.+?) failed!\s*(.*)")
NATIVE_CLASS = re.compile(r'"ObjectName":\s*"Class\'([^\':."]+)\'",\s*"ObjectPath":\s*"(/Script/[^".]+)"')
FIELD_NAME = re.compile(r"^(.*)_(\d+)_([0-9A-Fa-f]{32})$")
HEX32 = re.compile(r"^[0-9A-F]{32}$")
REFERENCE = {"Struct": "Struct", "Object": "PropertyClass", "WeakObject": "PropertyClass", "LazyObject": "PropertyClass",
             "SoftObject": "PropertyClass", "Class": "MetaClass", "SoftClass": "MetaClass", "Interface": "InterfaceClass",
             "Enum": "Enum", "Delegate": "SignatureFunction", "MulticastDelegate": "SignatureFunction",
             "MulticastInlineDelegate": "SignatureFunction", "MulticastSparseDelegate": "SignatureFunction"}
PARAMETER_FLAGS = ("OutParm", "ReferenceParm", "ConstParm")


class CookedError(Exception):
    pass


class Mounts:
    """Where a file in the paks sits as a package: Icarus/Content/X is /Game/X, a plugin's Content is /<Plugin>/."""

    def __init__(self, roots=None):
        self.roots = {"engine/content/": "/Engine/", "icarus/content/": "/Game/"}
        for root, mount in (roots or {}).items():
            self.roots[root.lower()] = mount
        self.order = sorted(self.roots, key=len, reverse=True)
        self.known = {}

    @classmethod
    def from_files(cls, files):
        roots = {}
        for path in files:
            low = path.lower()
            folder, _, name = path.rpartition("/")
            if low.endswith(".uplugin") and folder:
                roots[folder + "/Content/"] = "/%s/" % name[:-len(".uplugin")]
            elif low.endswith(".uproject") and folder:
                roots[folder + "/Content/"] = "/Game/"
        return cls(roots)

    def package(self, path):
        """The package name of a pak path without its extension, or None when no content root holds it."""
        found = self.known.get(path)
        if found is None and path not in self.known:
            low = path.lower()
            for root in self.order:
                if low.startswith(root):
                    found = self.roots[root] + path[len(root):]
                    break
            else:
                plugin = PLUGIN.match(path)
                found = "/%s/%s" % plugin.groups() if plugin else None
            self.known[path] = found
        return found


class PakIndex:
    """The packages the paks hold: find(package) gives (pak path without extension, extension)."""

    def __init__(self, files):
        files = list(files)
        self.mounts = Mounts.from_files(files)
        self.files = {}
        for path in files:
            base, dot, extension = path.rpartition(".")
            if dot and extension.lower() in ("uasset", "umap"):
                package = self.mounts.package(base)
                if package:
                    self.files.setdefault(package.lower(), (base, "." + extension.lower()))

    def find(self, package):
        return self.files.get(package.lower())


def list_paks(paks, repak=None):
    """Every package, plugin and project file named by the game's own paks (not the ones in sub-folders)."""
    files = []
    names = sorted(name for name in os.listdir(paks) if name.lower().endswith(".pak"))
    if not names:
        raise CookedError("%s holds no pak." % paks)
    for name in names:
        done = subprocess.run([repak or registry.REPAK, "list", os.path.join(paks, name)], capture_output=True)
        if done.returncode != 0:
            raise CookedError("repak could not list %s: %s" % (name, done.stderr.decode("utf-8", "replace").strip()[:300]))
        for line in done.stdout.decode("utf-8", "replace").splitlines():
            line = line.strip()
            if line.lower().endswith((".uasset", ".umap", ".uplugin", ".uproject")):
                files.append(line)
    return files


def wanted(reg, index, classes=None):
    """(what to export, what is left out): [{package, file}] sorted by file, and {package: why}."""
    classes = registry.blueprint_classes(reg) if classes is None else classes
    packages, left_out = {}, {}
    for record in classes.values():
        if record.get("level"):
            left_out[record["package"]] = LEVEL
        else:
            packages[record["package"]] = True
    for record in registry.user_types(reg).values():
        packages[record["package"]] = True
    out = []
    for package in packages:
        found = index.find(package)
        if not found:
            left_out[package] = NO_FILE
        elif found[1] == ".umap":
            left_out[package] = LEVEL
        else:
            out.append({"package": package, "file": found[0]})
    out.sort(key=lambda entry: entry["file"].lower())
    return out, left_out


def slices(entries, size=SLICE):
    size = max(1, int(size))
    return [entries[at:at + size] for at in range(0, len(entries), size)]


def slice_key(entries, tool_version="", content=""):
    """Names what a kept slice was made from: its files, the export tool and the paks (paks_id)."""
    text = "\n".join(entry["file"] for entry in entries) + "\n" + tool_version + ("\n" + content if content else "")
    return hashlib.sha1(text.encode("utf-8")).hexdigest()


def pak_index_hash(path):
    """The hash a pak stores of its own index (entry names, offsets, sizes), read from the last bytes of the file."""
    with open(path, "rb") as file:
        file.seek(0, os.SEEK_END)
        size = file.tell()
        file.seek(max(0, size - 4096))
        tail = file.read()
    foot = tail[-PAK_FOOTER:]
    if len(foot) == PAK_FOOTER and foot[17:21] == PAK_MAGIC:
        return foot[41:61].hex()
    # Not the footer this reader knows: the last bytes of the file still change when the index does.
    return "tail-" + hashlib.sha1(tail).hexdigest()


def paks_id(paks, registry_digest=""):
    """Names the content of a Paks folder: each pak's name, size and index hash, and the registry's bytes.

    The exe's id does not change when a patch replaces paks alone, so kept slices and assets.json are tied to this.
    """
    digest = hashlib.sha1()
    for name in sorted(name for name in os.listdir(paks) if name.lower().endswith(".pak")):
        path = os.path.join(paks, name)
        digest.update(("%s\t%d\t%s\n" % (name.lower(), os.path.getsize(path), pak_index_hash(path))).encode("utf-8"))
    digest.update(registry_digest.encode("utf-8"))
    return digest.hexdigest()


def project_version(paks, repak=None):
    """ProjectVersion out of DefaultGame.ini in the first pak, for people to read. None when it cannot be read."""
    pak = os.path.join(paks, registry.FIRST_PAK)
    if not os.path.isfile(pak):
        return None
    try:
        done = subprocess.run([repak or registry.REPAK, "get", pak, GAME_CONFIG], capture_output=True,
                              creationflags=BELOW_NORMAL | NO_WINDOW if os.name == "nt" else 0)
    except OSError:
        return None
    found = re.search(r"^ProjectVersion=(.+)$", done.stdout.decode("utf-8-sig", "replace"), re.M) if done.returncode == 0 else None
    return found.group(1).strip() if found else None


class _Counters(ctypes.Structure):
    _fields_ = [("cb", ctypes.c_uint32), ("faults", ctypes.c_uint32), ("peak", ctypes.c_size_t), ("now", ctypes.c_size_t),
                ("a", ctypes.c_size_t), ("b", ctypes.c_size_t), ("c", ctypes.c_size_t), ("d", ctypes.c_size_t),
                ("page_file", ctypes.c_size_t), ("peak_page_file", ctypes.c_size_t)]


def peak_memory_mb(process=None):
    """The most memory a process held at once (this one when none is given), in MB; None when it cannot be asked."""
    if os.name != "nt":
        return None
    try:
        kernel = ctypes.WinDLL("kernel32", use_last_error=True)
        kernel.GetCurrentProcess.restype = ctypes.c_void_p
        kernel.K32GetProcessMemoryInfo.argtypes = [ctypes.c_void_p, ctypes.POINTER(_Counters), ctypes.c_uint32]
        handle = kernel.GetCurrentProcess() if process is None else int(process._handle)
        counters = _Counters()
        counters.cb = ctypes.sizeof(counters)
        if not kernel.K32GetProcessMemoryInfo(handle, ctypes.byref(counters), counters.cb):
            return None
        return round(counters.peak / 1048576.0, 1)
    except (AttributeError, OSError, ValueError):
        return None


def lower_own_priority():
    if os.name != "nt":
        return False
    try:
        kernel = ctypes.WinDLL("kernel32", use_last_error=True)
        kernel.GetCurrentProcess.restype = ctypes.c_void_p
        kernel.SetPriorityClass.argtypes = [ctypes.c_void_p, ctypes.c_uint32]
        return bool(kernel.SetPriorityClass(kernel.GetCurrentProcess(), BELOW_NORMAL))
    except (AttributeError, OSError):
        return False


def tool_version():
    try:
        with open(os.path.join(ROOT, "tools", ".versions.json"), encoding="utf-8-sig") as file:
            return "Ue4Export " + str(json.load(file).get("assets\\Ue4Export", "")).strip()
    except (OSError, ValueError):
        return "Ue4Export"


def words(text, prefix=""):
    if not isinstance(text, str) or not text or text == "None":
        return []
    found = [part.strip() for part in text.split("|")]
    return [word[len(prefix):] if prefix and word.startswith(prefix) else word for word in found if word and word != "None"]


def guid(text):
    """An id as 32 capital hex digits, however the export wrote it; other text is given back unchanged."""
    if not isinstance(text, str):
        return None
    digits = text.replace("-", "").replace("{", "").replace("}", "").upper()
    return digits if HEX32.match(digits) else text


def object_name(text):
    """Kind'Inner' -> (Kind, Inner)."""
    if not isinstance(text, str):
        return None, None
    at = text.find("'")
    if at < 0 or not text.endswith("'") or at == len(text) - 1:
        return None, text
    return text[:at], text[at + 1:-1]


def leaf(inner):
    return re.split(r"[:.]", inner)[-1] if inner else inner


def set_name(value):
    return value if isinstance(value, str) and value not in ("", "None") else None


def read_text(path):
    with open(path, "rb") as file:
        return file.read().decode("utf-8-sig")


def parse_export(text):
    exports = json.loads(text)
    if not isinstance(exports, list):
        raise ValueError("the export is not a list of objects")
    return [e for e in exports if isinstance(e, dict)]


def read_export(path):
    return parse_export(read_text(path))


class Converter:
    """One exported package -> its records. natives collects the native classes named with their module."""

    def __init__(self, exports, package, file, mounts, natives=None):
        self.exports = exports
        self.package = package
        self.file = file.lower()
        self.mounts = mounts
        self.natives = {} if natives is None else natives
        self.unplaced = 0
        self.by_outer = {}
        for export in exports:
            self.by_outer.setdefault(export.get("Outer"), []).append(export)

    def package_of(self, base):
        if base.lower() == self.file:
            return self.package
        found = self.mounts.package(base)
        if found is None:
            self.unplaced += 1
            return base
        return found

    def base_of(self, where):
        base, dot, tail = where.rpartition(".")
        return (base, int(tail)) if dot and tail.isdigit() else (where, None)

    def path(self, ref):
        """A reference as a full object path: /Script/Engine.Actor, /Game/X/BP.BP_C:Function."""
        if not isinstance(ref, dict):
            return None
        kind, inner = object_name(ref.get("ObjectName"))
        where = ref.get("ObjectPath") or ""
        if not inner:
            return None
        if where.startswith("/"):
            if kind == "Class" and ":" not in inner and "." not in inner:
                self.natives[inner] = "%s.%s" % (where, inner)
            return "%s.%s" % (where, inner)
        if not where:
            return inner
        return "%s.%s" % (self.package_of(self.base_of(where)[0]), inner)

    def local(self, ref):
        """The export of this package a reference points at, or None."""
        if not isinstance(ref, dict):
            return None
        base, index = self.base_of(ref.get("ObjectPath") or "")
        if base.lower() != self.file:
            return None
        name = leaf(object_name(ref.get("ObjectName"))[1])
        if index is not None and 0 <= index < len(self.exports) and self.exports[index].get("Name") == name:
            return self.exports[index]
        return next((e for e in self.exports if e.get("Name") == name), None)

    def class_text(self, text):
        """An export's own class: a full path for a blueprint class, the bare name for a native one."""
        kind, inner = object_name(text)
        if not inner:
            return None
        base, dot, name = inner.rpartition(".")
        if dot and "/" in base:
            return "%s.%s" % (self.package_of(base), name)
        return inner

    def describe(self, prop):
        kind = prop.get("Type") or "?"
        kind = kind[:-8] if kind.endswith("Property") else kind
        out = {"type": kind}
        key = REFERENCE.get(kind)
        if key:
            target = self.path(prop.get(key))
            if target:
                out["ref"] = target
        elif kind == "Byte":
            target = self.path(prop.get("Enum"))
            if target:
                out["enum"] = target
        elif kind in ("Array", "Set"):
            inner = prop.get("Inner") if kind == "Array" else prop.get("ElementProp")
            if isinstance(inner, dict):
                out["inner"] = self.describe(inner)
        elif kind == "Map":
            for side, source in (("key", "KeyProp"), ("value", "ValueProp")):
                if isinstance(prop.get(source), dict):
                    out[side] = self.describe(prop[source])
        return out

    def member(self, prop, keep=None):
        out = {"name": prop.get("Name")}
        out.update(self.describe(prop))
        flags = words(prop.get("PropertyFlags"))
        if keep is not None:
            flags = [flag for flag in flags if flag in keep]
        if flags:
            out["flags"] = flags
        if isinstance(prop.get("ElementSize"), int):
            out["size"] = prop["ElementSize"]
        if isinstance(prop.get("ArrayDim"), int) and prop["ArrayDim"] != 1:
            out["dim"] = prop["ArrayDim"]
        if out["type"] == "Bool" and prop.get("bIsNativeBool") is False and isinstance(prop.get("ByteMask"), int):
            out["mask"] = prop["ByteMask"]
        if set_name(prop.get("RepNotifyFunc")):
            out["rep_notify"] = prop["RepNotifyFunc"]
        if set_name(prop.get("BlueprintReplicationCondition")):
            out["rep_condition"] = prop["BlueprintReplicationCondition"]
        return out

    def function(self, export):
        out = {"name": export.get("Name")}
        flags = words(export.get("FunctionFlags"), "FUNC_")
        if flags:
            out["flags"] = flags
        params, local_count = [], 0
        for prop in export.get("ChildProperties") or []:
            if not isinstance(prop, dict):
                continue
            own = words(prop.get("PropertyFlags"))
            if "Parm" not in own:
                local_count += 1
            elif "ReturnParm" in own:
                out["returns"] = self.describe(prop)
                if isinstance(prop.get("ElementSize"), int):
                    out["returns"]["size"] = prop["ElementSize"]
            else:
                params.append(self.member(prop, PARAMETER_FLAGS))
        out["params"] = params
        if local_count:
            out["locals"] = local_count
        overrides = self.path(export.get("SuperStruct"))
        if overrides:
            out["overrides"] = overrides
        return out

    def template_name(self, ref):
        return leaf(object_name(ref.get("ObjectName"))[1]) if isinstance(ref, dict) else None

    def components(self, owner, class_props):
        script = self.local(class_props.get("SimpleConstructionScript"))
        if script is None:
            script = next((e for e in self.by_outer.get(owner, []) if e.get("Type") == "SimpleConstructionScript"), None)
        if script is None:
            return []
        props = script.get("Properties") or {}
        nodes = [self.local(ref) for ref in props.get("AllNodes") or []]
        nodes = [node for node in nodes if node is not None]
        used = {id(node) for node in nodes}
        nodes += [e for e in self.by_outer.get(script.get("Name"), []) if e.get("Type") == "SCS_Node" and id(e) not in used]
        root = self.local(props.get("DefaultSceneRootNode"))
        out, by_node, children = [], {}, []
        for node in nodes:
            if id(node) in by_node:
                continue
            values = node.get("Properties") or {}
            template = self.template_name(values.get("ComponentTemplate"))
            name = set_name(values.get("InternalVariableName"))
            if not name and template:
                name = template[:-len("_GEN_VARIABLE")] if template.endswith("_GEN_VARIABLE") else template
            record = {"name": name or node.get("Name")}
            if values.get("VariableGuid"):
                record["id"] = guid(values["VariableGuid"])
            target = self.path(values.get("ComponentClass"))
            if target:
                record["class"] = target
            if template:
                record["template"] = template
            parent = set_name(values.get("ParentComponentOrVariableName"))
            if parent:
                record["parent"] = parent
                if values.get("bIsParentComponentNative"):
                    record["parent_native"] = True
                if set_name(values.get("ParentComponentOwnerClassName")):
                    record["parent_owner"] = values["ParentComponentOwnerClassName"]
            if node is root:
                record["scene_root"] = True
            if id(node) not in used:
                record["unused"] = True
            by_node[id(node)] = record
            children.append((record, values.get("ChildNodes") or []))
            out.append(record)
        for record, refs in children:
            for ref in refs:
                child = self.local(ref)
                if child is not None and id(child) in by_node and "parent" not in by_node[id(child)]:
                    by_node[id(child)]["parent"] = record["name"]
        return out

    def overrides(self, owner, class_props):
        handler = self.local(class_props.get("InheritableComponentHandler"))
        if handler is None:
            handler = next((e for e in self.by_outer.get(owner, []) if e.get("Type") == "InheritableComponentHandler"), None)
        out = []
        for entry in ((handler or {}).get("Properties") or {}).get("Records") or []:
            if not isinstance(entry, dict):
                continue
            key = entry.get("ComponentKey") or {}
            record = {"name": key.get("SCSVariableName")}
            if key.get("AssociatedGuid"):
                record["id"] = guid(key["AssociatedGuid"])
            for name, ref in (("owner", key.get("OwnerClass")), ("class", entry.get("ComponentClass"))):
                target = self.path(ref)
                if target:
                    record[name] = target
            template = self.template_name(entry.get("ComponentTemplate"))
            if template:
                record["template"] = template
            out.append(record)
        return out

    def subobjects(self, default_name):
        out = []
        for export in self.by_outer.get(default_name, []) if default_name else []:
            record = {"name": export.get("Name")}
            target = self.class_text(export.get("Class"))
            if target:
                record["class"] = target
            template = self.path(export.get("Template"))
            if template:
                record["template"] = template
            if "RF_DefaultSubObject" in words(export.get("Flags")):
                record["default"] = True
            out.append(record)
        return out

    def widget(self, export, variables, seen, reached):
        record = {"name": export.get("Name")}
        reached.append((export, record))
        target = self.class_text(export.get("Class"))
        if target:
            record["class"] = target
        if export.get("Name") in variables:
            record["variable"] = True
        props = export.get("Properties") or {}
        children = []
        for ref in props.get("Slots") or []:
            slot = self.local(ref)
            content = self.local((slot.get("Properties") or {}).get("Content")) if slot else None
            if content is not None and id(content) not in seen:
                seen.add(id(content))
                child = self.widget(content, variables, seen, reached)
                child["slot"] = slot.get("Type")
                children.append(child)
        for binding in props.get("NamedSlotBindings") or []:
            content = self.local(binding.get("Content")) if isinstance(binding, dict) else None
            if content is not None and id(content) not in seen:
                seen.add(id(content))
                child = self.widget(content, variables, seen, reached)
                child["named_slot"] = binding.get("Name")
                children.append(child)
        if children:
            record["children"] = children
        return record

    def widgets(self, owner, class_props, variables):
        """(the tree from its root, the widgets of the tree that nothing holds)."""
        tree = self.local(class_props.get("WidgetTree"))
        if tree is None:
            tree = next((e for e in self.by_outer.get(owner, []) if e.get("Type") == "WidgetTree"), None)
        root = self.local(((tree or {}).get("Properties") or {}).get("RootWidget"))
        if root is None:
            return None, []
        seen, reached = {id(root)}, []
        top = self.widget(root, variables, seen, reached)
        inside = self.by_outer.get(tree.get("Name"), [])
        at = 0
        while at < len(reached) and any(id(e) not in seen for e in inside):
            export, record = reached[at]
            at += 1
            for key, value in (export.get("Properties") or {}).items():
                if key in ("Slot", "Slots", "NamedSlotBindings") or not isinstance(value, dict):
                    continue
                content = self.local(value)
                if content is None or id(content) in seen or content.get("Outer") != tree.get("Name"):
                    continue
                seen.add(id(content))
                child = self.widget(content, variables, seen, reached)
                child["property"] = key
                record.setdefault("children", []).append(child)
        loose = [{"name": e.get("Name"), "class": self.class_text(e.get("Class"))} for e in inside if id(e) not in seen]
        return top, loose

    def blueprint(self, export):
        name = export.get("Name")
        record = {"path": "%s.%s" % (self.package, name), "name": name, "package": self.package,
                  "kind": CLASS_KINDS[export["Type"]]}
        parent = self.path(export.get("SuperStruct"))
        if parent:
            record["parent"] = parent
        flags = words(export.get("ClassFlags"), "CLASS_")
        if flags:
            record["flags"] = flags
        if set_name(export.get("ClassConfigName")):
            record["config"] = export["ClassConfigName"]
        within = self.path(export.get("ClassWithin"))
        if within and within != "/Script/CoreUObject.Object":
            record["within"] = within
        interfaces = []
        for entry in export.get("Interfaces") or []:
            target = self.path(entry.get("Class")) if isinstance(entry, dict) else None
            if target:
                interfaces.append({"class": target, "blueprint": bool(entry.get("bImplementedByK2"))})
        if interfaces:
            record["interfaces"] = interfaces
        props = export.get("Properties") or {}
        record["properties"] = [self.member(p) for p in export.get("ChildProperties") or [] if isinstance(p, dict)]
        record["functions"] = [self.function(e) for e in self.by_outer.get(name, []) if e.get("Type") == "Function"]
        for key, value in (("components", self.components(name, props)), ("overrides", self.overrides(name, props))):
            if value:
                record[key] = value
        default = self.local(export.get("ClassDefaultObject"))
        default_name = default.get("Name") if default else "Default__" + str(name)
        inside = self.subobjects(default_name)
        if inside:
            record["subobjects"] = inside
        timelines = []
        for ref in props.get("Timelines") or []:
            values = (self.local(ref) or {}).get("Properties") or {}
            if set_name(values.get("VariableName")):
                timeline = {"name": values["VariableName"]}
                if values.get("TimelineGuid"):
                    timeline["id"] = guid(values["TimelineGuid"])
                timelines.append(timeline)
        if timelines:
            record["timelines"] = timelines
        if record["kind"] == "widget":
            variables = {p["name"] for p in record["properties"] if p["type"] == "Object"}
            tree, loose = self.widgets(name, props, variables)
            if tree:
                record["widgets"] = tree
            if loose:
                record["loose_widgets"] = loose
            animations = [self.template_name(ref) for ref in props.get("Animations") or []]
            if any(animations):
                record["animations"] = [a for a in animations if a]
            slots = [s for s in props.get("NamedSlots") or [] if isinstance(s, str)]
            if slots:
                record["named_slots"] = slots
            bindings = []
            for entry in props.get("Bindings") or []:
                if isinstance(entry, dict):
                    binding = {"widget": entry.get("ObjectName"), "property": entry.get("PropertyName")}
                    if set_name(entry.get("FunctionName")):
                        binding["function"] = entry["FunctionName"]
                    bindings.append(binding)
            if bindings:
                record["bindings"] = bindings
        return record

    def struct(self, export):
        name = export.get("Name")
        record = {"path": "%s.%s" % (self.package, name), "name": name, "package": self.package, "kind": "struct"}
        if (export.get("Properties") or {}).get("Guid"):
            record["id"] = guid(export["Properties"]["Guid"])
        fields = []
        for prop in export.get("ChildProperties") or []:
            if not isinstance(prop, dict):
                continue
            field = self.member(prop)
            parts = FIELD_NAME.match(field["name"] or "")
            if parts:
                field["label"] = parts.group(1)
                field["id"] = parts.group(3).upper()
            fields.append(field)
        record["fields"] = fields
        return record

    def enum(self, export):
        name = export.get("Name")
        record = {"path": "%s.%s" % (self.package, name), "name": name, "package": self.package, "kind": "enum"}
        shown = {}
        for entry in (export.get("Properties") or {}).get("DisplayNameMap") or []:
            if isinstance(entry, dict):
                value = entry.get("Value")
                if isinstance(value, dict):
                    value = value.get("SourceString", value.get("LocalizedString", value.get("CultureInvariantString")))
                if isinstance(value, str):
                    shown[entry.get("Key")] = value
        values = []
        names = export.get("Names") or {}
        pairs = names.items() if isinstance(names, dict) else [(e.get("Key"), e.get("Value")) for e in names if isinstance(e, dict)]
        for key, number in pairs:
            short = str(key).split("::", 1)[-1]
            entry = {"name": short, "value": number}
            if short in shown:
                entry["display"] = shown[short]
            values.append(entry)
        record["values"] = values
        if set_name(export.get("CppForm")):
            record["form"] = export["CppForm"]
        return record

    def records(self):
        out = []
        for export in self.exports:
            kind = export.get("Type")
            if export.get("Outer") is not None:
                continue
            if kind in CLASS_KINDS:
                out.append(self.blueprint(export))
            elif kind == "UserDefinedStruct":
                out.append(self.struct(export))
            elif kind == "UserDefinedEnum":
                out.append(self.enum(export))
        return out


def convert(entries, export_dir, mounts):
    """Records of the exported packages of one slice: (records, {package: why it gave none}, natives, unplaced)."""
    records, failed, natives, unplaced = [], {}, {}, 0
    for entry in entries:
        path = os.path.join(export_dir, *entry["file"].split("/")) + ".json"
        try:
            text = read_text(path)
            exports = parse_export(text)
        except OSError:
            failed[entry["package"]] = "the export tool wrote no file for it"
            continue
        except ValueError as error:
            failed[entry["package"]] = "its export cannot be read: %s" % error
            continue
        try:
            converter = Converter(exports, entry["package"], entry["file"], mounts, natives)
            found = converter.records()
        except (AttributeError, KeyError, TypeError, ValueError, RecursionError) as error:
            failed[entry["package"]] = "its export has a shape this reader does not know (%s: %s)" % (type(error).__name__, error)
            continue
        for name, module in NATIVE_CLASS.findall(text):
            natives.setdefault(name, "%s.%s" % (module, name))
        unplaced += converter.unplaced
        if not found:
            failed[entry["package"]] = "its export holds no class, struct or enum"
        records.extend(found)
    return records, failed, natives, unplaced


def write_json(path, value):
    os.makedirs(os.path.dirname(path), exist_ok=True)
    scratch = path + ".part"
    with open(scratch, "w", encoding="utf-8", newline="\n") as file:
        json.dump(value, file, ensure_ascii=False, separators=(",", ":"))
    os.replace(scratch, path)


def read_json(path):
    try:
        with open(path, encoding="utf-8") as file:
            return json.load(file)
    except (OSError, ValueError):
        return None


class Export:
    """One run over the slices. tool is the command that starts the export tool, as a list."""

    def __init__(self, model_dir, paks, mounts, tool=None, workers=MAX_WORKERS, memory_limit_mb=MEMORY_LIMIT_MB,
                 timeout=SLICE_TIMEOUT, version=None, log=None, content=""):
        self.model_dir = model_dir
        self.content = content
        self.export_dir = os.path.join(model_dir, "export")
        self.slice_dir = os.path.join(model_dir, "slices")
        self.paks = paks
        self.mounts = mounts
        self.tool = list(tool) if tool else [TOOL]
        self.workers = max(1, min(int(workers), MAX_WORKERS))
        self.memory_limit_mb = memory_limit_mb
        self.timeout = timeout
        self.version = tool_version() if version is None else version
        self.log = log or (lambda text: None)
        self.running = set()
        self.lock = threading.Lock()
        self.stopped = False
        self.flags = (BELOW_NORMAL | NO_WINDOW) if os.name == "nt" else 0

    def paths(self, number):
        stem = os.path.join(self.slice_dir, "%04d" % number)
        return {"list": stem + ".txt", "log": stem + ".log", "exported": stem + ".exported.json", "records": stem + ".json"}

    def run_tool(self, list_file, log_file):
        command = self.tool + ["--mix-output", "--no-subdirs", self.paks, ENGINE, list_file, self.export_dir]
        started = time.time()
        with open(log_file, "wb") as output:
            process = subprocess.Popen(command, stdout=output, stderr=subprocess.STDOUT, stdin=subprocess.DEVNULL,
                                       creationflags=self.flags)
            with self.lock:
                self.running.add(process)
            try:
                code = process.wait(self.timeout)
            except subprocess.TimeoutExpired:
                process.kill()
                process.wait()
                code = None
            finally:
                with self.lock:
                    self.running.discard(process)
            peak = peak_memory_mb(process)
        return code, time.time() - started, peak

    def export(self, number, entries, key):
        """Runs the tool over one slice. Gives what it wrote down about the slice, or raises CookedError."""
        paths = self.paths(number)
        os.makedirs(self.slice_dir, exist_ok=True)
        os.makedirs(self.export_dir, exist_ok=True)
        with open(paths["list"], "w", encoding="utf-8", newline="\n") as file:
            file.write("[Text]\n" + "".join(entry["file"] + "\n" for entry in entries))
        for entry in entries:
            try:
                os.remove(os.path.join(self.export_dir, *entry["file"].split("/")) + ".json")
            except OSError:
                pass
        code, seconds, peak = self.run_tool(paths["list"], paths["log"])
        if self.stopped:
            raise CookedError("stopped")
        if code not in (0, 2):
            why = "did not finish in %d seconds and was stopped" % self.timeout if code is None else "ended with code %s" % code
            raise CookedError("The export tool %s on slice %d. Its output is in %s. Run again to try that slice again." % (why, number, paths["log"]))
        reasons = {}
        with open(paths["log"], encoding="utf-8", errors="replace") as file:
            for line in file:
                found = FAILED_LINE.search(line)
                if found:
                    reasons[found.group(1).strip().lower()] = found.group(2).strip()
        failed = {entry["package"]: reasons[entry["file"].lower()] for entry in entries if entry["file"].lower() in reasons}
        state = {"key": key, "seconds": round(seconds, 2), "peak_mb": peak, "code": code, "failed": failed}
        write_json(paths["exported"], state)
        return state

    def slice(self, number, entries, force=False, reconvert=False, offline=False):
        """One slice, from whatever is already there: kept records, a kept export, or a new run of the tool."""
        key = slice_key(entries, self.version, self.content)
        paths = self.paths(number)
        kept = None if force or reconvert else read_json(paths["records"])
        if kept and kept.get("key") == key and kept.get("format") == RECORD_FORMAT:
            kept["from"] = "kept"
            return kept
        exported = None if force else read_json(paths["exported"])
        source = "converted"
        if not exported or exported.get("key") != key:
            if offline:
                raise CookedError("Slice %d has not been exported yet." % number)
            exported = self.export(number, entries, key)
            source = "exported"
        started = time.time()
        records, failed, natives, unplaced = convert(entries, self.export_dir, self.mounts)
        for package, why in exported.get("failed", {}).items():
            failed[package] = "the export tool failed on it: %s" % why
        result = {"format": RECORD_FORMAT, "key": key, "packages": len(entries), "records": records, "failed": failed,
                  "natives": natives, "unplaced": unplaced, "export_seconds": exported.get("seconds"),
                  "convert_seconds": round(time.time() - started, 2), "peak_mb": exported.get("peak_mb")}
        write_json(paths["records"], result)
        result["from"] = source
        return result

    def stop(self):
        self.stopped = True
        with self.lock:
            running = list(self.running)
        for process in running:
            try:
                process.kill()
            except OSError:
                pass

    def run(self, entries, size=SLICE, force=False, reconvert=False, offline=False):
        """Every slice. Gives { records, failed, natives, stats }; stats.unfinished names slices to run again."""
        started = time.time()
        parts = slices(entries, size)
        results, unfinished = {}, {}
        stats = {"packages": len(entries), "slices": len(parts), "slice_size": size, "workers": self.workers,
                 "tool": self.version, "exported_slices": 0, "converted_slices": 0, "kept_slices": 0}

        def one(number):
            if self.stopped:
                raise CookedError("stopped")
            result = self.slice(number, parts[number - 1], force, reconvert, offline)
            self.log("slice %d of %d: %d packages, %d records, %s%s" % (
                number, len(parts), result["packages"], len(result["records"]), result["from"],
                ", %d failed" % len(result["failed"]) if result["failed"] else ""))
            return result

        def keep(number, call):
            try:
                results[number] = call()
            except CookedError as error:
                unfinished[number] = str(error)
                self.log(str(error))

        numbers = list(range(1, len(parts) + 1))
        pool = None
        try:
            if numbers:
                keep(1, lambda: one(1))
                first = results.get(1)
                if first and first.get("peak_mb") and self.memory_limit_mb:
                    room = self.memory_limit_mb - (peak_memory_mb() or 0)
                    fit = max(1, int(room // (first["peak_mb"] * LATER_SLICES)))
                    if fit < self.workers:
                        self.log("the first export tool held %d MB, so %d run at a time instead of %d" % (first["peak_mb"], fit, self.workers))
                        self.workers = stats["workers"] = fit
            pool = concurrent.futures.ThreadPoolExecutor(max_workers=self.workers)
            futures = {pool.submit(one, number): number for number in numbers[1:]}
            for future in concurrent.futures.as_completed(futures):
                keep(futures[future], future.result)
        except KeyboardInterrupt:
            self.stop()
            raise
        finally:
            if pool is not None:
                pool.shutdown(wait=True, cancel_futures=True)
        records, failed, natives, unplaced, peaks = [], {}, {}, 0, []
        for number in sorted(results):
            result = results[number]
            records.extend(result["records"])
            failed.update(result["failed"])
            natives.update(result.get("natives") or {})
            unplaced += result.get("unplaced") or 0
            stats[{"exported": "exported_slices", "converted": "converted_slices", "kept": "kept_slices"}[result["from"]]] += 1
            if result.get("peak_mb"):
                peaks.append(result["peak_mb"])
        stats.update({"records": len(records), "failed": len(failed), "unplaced_references": unplaced,
                      "unfinished": unfinished, "seconds": round(time.time() - started, 1),
                      "tool_seconds": round(sum(r.get("export_seconds") or 0 for r in results.values()), 1),
                      "convert_seconds": round(sum(r.get("convert_seconds") or 0 for r in results.values()), 1),
                      "tool_peak_mb": max(peaks) if peaks else None, "python_peak_mb": peak_memory_mb()})
        return {"records": records, "failed": failed, "natives": natives, "stats": stats}


def folder_size(path):
    total = count = 0
    for folder, _dirs, names in os.walk(path):
        for name in names:
            try:
                total += os.path.getsize(os.path.join(folder, name))
                count += 1
            except OSError:
                pass
    return total, count


def main(argv=None):
    parser = argparse.ArgumentParser(description="Export the game's blueprint-like packages and read them into records.")
    parser.add_argument("--paks", help="the Paks folder of a copy of the game (the installed game when left out); "
                        "the build is read from the exe beside it")
    parser.add_argument("--out", help="the model folder (build\\game-model\\<build id> when left out)")
    parser.add_argument("--workers", type=int, default=MAX_WORKERS, help="export tools at a time, 1 to %d" % MAX_WORKERS)
    parser.add_argument("--slice", type=int, default=SLICE, help="packages a slice")
    parser.add_argument("--force", action="store_true", help="export everything again")
    parser.add_argument("--reconvert", action="store_true", help="read the kept exports again")
    parser.add_argument("--list", action="store_true", help="only say what would be exported")
    parser.add_argument("--only", help="only packages whose name holds this text (for a quick look; use another --out)")
    args = parser.parse_args(argv)
    try:
        paks = args.paks or build_id.paks_dir()
        model_dir = args.out or os.path.join(build_id.MODEL_DIR, build_id.read_for(args.paks)["id"])
        reg = registry.load(paks)
        content = paks_id(paks, reg.digest)
        index = PakIndex(list_paks(paks))
        entries, left_out = wanted(reg, index)
    except (CookedError, registry.RegistryError, build_id.BuildIdError, OSError) as error:
        print(error, file=sys.stderr)
        return 1
    if args.only:
        entries = [entry for entry in entries if args.only.lower() in entry["package"].lower()]
    print("%d packages to export in %d slices; %d left out" % (len(entries), len(slices(entries, args.slice)), len(left_out)))
    if args.list:
        for package, why in sorted(left_out.items()):
            print("  left out: %s (%s)" % (package, why))
        return 0
    lower_own_priority()
    run = Export(model_dir, paks, index.mounts, workers=args.workers, log=print, content=content)
    result = run.run(entries, args.slice, args.force, args.reconvert)
    stats = result["stats"]
    print("%d records from %d packages in %.1f s (%d slices exported, %d read again, %d kept); %d packages failed" % (
        stats["records"], stats["packages"], stats["seconds"], stats["exported_slices"], stats["converted_slices"],
        stats["kept_slices"], stats["failed"]))
    for package, why in sorted(result["failed"].items())[:30]:
        print("  FAILED %s: %s" % (package, why))
    for number, why in sorted(stats["unfinished"].items()):
        print("  NOT DONE slice %s: %s" % (number, why))
    return 1 if stats["unfinished"] else 0


if __name__ == "__main__":
    sys.exit(main())
