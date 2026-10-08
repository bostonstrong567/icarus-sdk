#!/usr/bin/env python3
"""The id of a game build, read from the exe's debug directory.

The id is the exe's PDB signature: the GUID as 32 hex digits, a dash, the age (bc15c2e89e614c00988f4716ebaabc7f-1).
It names the exe, and so the native half of the model and the folder build\\game-model\\<id>. Two builds that
differ only in content (a patch that replaces paks and leaves the exe) share it: the paks are named apart, by
cooked.paks_id. Only the exe's headers and its debug record are read; the PDB is not opened. An exe that names
no PDB is named by its SHA-256.

  python scripts\\gamemodel\\build_id.py [exe]
"""
import hashlib
import json
import os
import re
import struct
import sys
import uuid

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
MODEL_DIR = os.path.join(ROOT, "build", "game-model")
APP_ID = "1149460"
EXE = os.path.join("Icarus", "Binaries", "Win64", "Icarus-Win64-Shipping.exe")
PAKS = os.path.join("Icarus", "Content", "Paks")
DEBUG_DIRECTORY = 6
CODEVIEW = 2
CUT_SHORT = "%s is cut short: it ends before its headers do. Let Steam finish updating the game, then run this again."


class BuildIdError(Exception):
    pass


def steam_libraries():
    try:
        import winreg
        with winreg.OpenKey(winreg.HKEY_CURRENT_USER, r"Software\Valve\Steam") as key:
            steam = winreg.QueryValueEx(key, "SteamPath")[0]
    except (ImportError, OSError):
        return []
    found = [steam]
    try:
        with open(os.path.join(steam, "steamapps", "libraryfolders.vdf"), encoding="utf-8", errors="replace") as file:
            found += [path.replace("\\\\", "\\") for path in re.findall(r'"path"\s+"([^"]+)"', file.read())]
    except OSError:
        pass
    return found


def configured_dir():
    """What "gameDir" in icarus.config.json names, or None when the file is absent, unreadable or silent about it."""
    try:
        with open(os.path.join(ROOT, "icarus.config.json"), encoding="utf-8-sig") as file:
            config = json.load(file)
    except (OSError, ValueError):
        return None
    return (config.get("gameDir") or None) if isinstance(config, dict) else None


def game_dir():
    """The folder that holds Icarus\\ and Engine\\, found as scripts\\_common.ps1 finds it.

    "gameDir" in icarus.config.json wins, and a folder it names without the game in it is an error; with no
    such setting it is where Steam has the game.
    """
    chosen = configured_dir()
    if chosen:
        if os.path.isfile(os.path.join(chosen, EXE)):
            return os.path.normpath(chosen)
        raise BuildIdError('"gameDir" in icarus.config.json names %s, and the game is not there.' % chosen)
    for library in steam_libraries():
        manifest = os.path.join(library, "steamapps", "appmanifest_%s.acf" % APP_ID)
        try:
            with open(manifest, encoding="utf-8", errors="replace") as file:
                name = re.search(r'"installdir"\s+"([^"]*)"', file.read())
        except OSError:
            continue
        if name:
            folder = os.path.join(library, "steamapps", "common", name.group(1))
            if os.path.isfile(os.path.join(folder, EXE)):
                return os.path.normpath(folder)
    raise BuildIdError('The game was not found. Set "gameDir" in icarus.config.json to the folder that holds Icarus\\ and Engine\\.')


def steam_build(folder):
    """Steam's build number for the copy of the game in folder, or None when that copy is not Steam's."""
    wanted = os.path.normcase(os.path.abspath(folder))
    for library in steam_libraries():
        try:
            with open(os.path.join(library, "steamapps", "appmanifest_%s.acf" % APP_ID), encoding="utf-8", errors="replace") as file:
                text = file.read()
        except OSError:
            continue
        name = re.search(r'"installdir"\s+"([^"]*)"', text)
        number = re.search(r'"buildid"\s+"([^"]*)"', text)
        if name and number and os.path.normcase(os.path.abspath(os.path.join(library, "steamapps", "common", name.group(1)))) == wanted:
            return number.group(1)
    return None


def game_exe():
    return os.path.join(game_dir(), EXE)


def paks_dir():
    return os.path.join(game_dir(), PAKS)


def exe_beside(paks):
    """The exe of the copy of the game that a Paks folder belongs to."""
    game = os.path.dirname(os.path.dirname(os.path.abspath(paks)))
    return os.path.join(game, "Binaries", "Win64", os.path.basename(EXE))


def debug_record(exe):
    """The exe's link to its PDB as (guid, age, PDB file name, link time, image size), or None when it has none."""
    with open(exe, "rb") as file:
        head = file.read(0x1000)
        if len(head) < 0x40 or head[:2] != b"MZ":
            raise BuildIdError("%s is not a Windows program." % exe)
        pe = struct.unpack_from("<I", head, 0x3C)[0]
        if pe + 24 > len(head) or head[pe:pe + 4] != b"PE\0\0":
            raise BuildIdError("%s has no PE header." % exe)
        try:
            sections, linked = struct.unpack_from("<HI", head, pe + 6)
            optional_size = struct.unpack_from("<H", head, pe + 20)[0]
            optional = pe + 24
            magic = struct.unpack_from("<H", head, optional)[0]
            if magic not in (0x10B, 0x20B):
                raise BuildIdError("%s has an optional header of an unknown kind (%04X)." % (exe, magic))
            directories = optional + (112 if magic == 0x20B else 96)
            image_size = struct.unpack_from("<I", head, optional + 56)[0]
            table = optional + optional_size
            need = table + 40 * sections
            if need > len(head):
                file.seek(0)
                head = file.read(need)
            rva, size = struct.unpack_from("<II", head, directories + 8 * DEBUG_DIRECTORY)
            offset = None
            for index in range(sections):
                virtual_size, virtual, raw_size, raw = struct.unpack_from("<IIII", head, table + 40 * index + 8)
                if virtual <= rva < virtual + max(virtual_size, raw_size):
                    offset = raw + rva - virtual
                    break
        except struct.error:
            raise BuildIdError(CUT_SHORT % exe) from None
        if not size or offset is None:
            return None
        file.seek(offset)
        entries = file.read(size)
        if len(entries) < size:
            raise BuildIdError(CUT_SHORT % exe)
        for at in range(0, len(entries) - 27, 28):
            kind, length, _rva, pointer = struct.unpack_from("<IIII", entries, at + 12)
            if kind != CODEVIEW:
                continue
            file.seek(pointer)
            record = file.read(length)
            if len(record) < length:
                raise BuildIdError(CUT_SHORT % exe)
            if record[:4] != b"RSDS" or len(record) < 24:
                continue
            pdb = record[24:].split(b"\0")[0].decode("utf-8", "replace")
            return (uuid.UUID(bytes_le=record[4:20]), struct.unpack_from("<I", record, 20)[0],
                    pdb.replace("/", "\\").rsplit("\\", 1)[-1], linked, image_size)
    return None


def file_hash(path):
    digest = hashlib.sha256()
    with open(path, "rb") as file:
        for piece in iter(lambda: file.read(1 << 20), b""):
            digest.update(piece)
    return digest.hexdigest()


def read(exe=None):
    """What the exe says about its build: id, and guid, age, pdb, linked (unix time), image_size when it names a PDB."""
    exe = exe or game_exe()
    record = debug_record(exe)
    if record is None:
        return {"id": "sha256-" + file_hash(exe)[:32]}
    guid, age, pdb, linked, image_size = record
    return {"id": "%s-%d" % (guid.hex, age), "guid": str(guid), "age": age, "pdb": pdb, "linked": linked,
            "image_size": image_size}


def read_for(paks=None, named=True):
    """read() for the copy of the game a Paks folder belongs to; the installed game when no folder is given.

    With no exe beside the paks the build cannot be told: an error when it has to be (named), else {}.
    """
    if not paks:
        return read()
    exe = exe_beside(paks)
    if os.path.isfile(exe):
        return read(exe)
    if named:
        raise BuildIdError("%s is not there, so it is not known which build these paks are of. Give --out a folder "
                           "for it." % exe)
    return {}


def build_id(exe=None):
    return read(exe)["id"]


def model_dir(exe=None):
    """build\\game-model\\<id> for the game build that is installed (or for the exe given)."""
    return os.path.join(MODEL_DIR, build_id(exe))


def main(argv=None):
    argv = sys.argv[1:] if argv is None else argv
    try:
        info = read(argv[0] if argv else None)
    except (BuildIdError, OSError) as error:
        print(error, file=sys.stderr)
        return 1
    print(info["id"])
    if "guid" in info:
        print("guid %s age %d, %s, linked %d, image size 0x%X" % (info["guid"], info["age"], info["pdb"], info["linked"], info["image_size"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
