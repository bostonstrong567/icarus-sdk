"""The model of the game, made from files only. One folder per game build under build\\game-model.

Where the game is and which build it is are read in one place, build_id.py; this file only passes its names on.
"""
import os
import re

from .build_id import APP_ID, BuildIdError, EXE as EXE_PATH, MODEL_DIR as MODELS, ROOT
from .build_id import file_hash, game_dir, model_dir, steam_libraries

GameNotFound = BuildIdError


def steam_state():
    """What Steam's manifest says about the game: its folder and its build number."""
    for library in steam_libraries():
        manifest = os.path.join(library, "steamapps", "appmanifest_%s.acf" % APP_ID)
        if not os.path.isfile(manifest):
            continue
        with open(manifest, encoding="utf-8", errors="replace") as file:
            text = file.read()

        def value(key):
            found = re.search(r'"%s"\s+"([^"]*)"' % key, text)
            return found.group(1) if found else None

        folder = value("installdir")
        if folder:
            return {"dir": os.path.join(library, "steamapps", "common", folder), "build": value("buildid")}
    return None


def game_files(folder=None):
    """The exe and the PDB beside it. The PDB is None when the game did not ship one."""
    exe = os.path.join(folder or game_dir(), EXE_PATH)
    pdb = exe[:-4] + ".pdb"
    return exe, (pdb if os.path.isfile(pdb) else None)


def lower_priority():
    """Heavy readers run below normal priority: the game may be running beside them."""
    try:
        import ctypes
        kernel = ctypes.WinDLL("kernel32", use_last_error=True)
        kernel.GetCurrentProcess.restype = ctypes.c_void_p
        kernel.SetPriorityClass.argtypes = [ctypes.c_void_p, ctypes.c_uint32]
        return bool(kernel.SetPriorityClass(kernel.GetCurrentProcess(), 0x4000))
    except (ImportError, AttributeError, OSError):
        return False


def peak_memory():
    """The most memory this process has held, in bytes: (own, with mapped files), or None."""
    try:
        import ctypes
        from ctypes import wintypes

        class Counters(ctypes.Structure):
            _fields_ = [("cb", wintypes.DWORD), ("faults", wintypes.DWORD)] + [
                (name, ctypes.c_size_t) for name in ("peak_set", "set", "peak_paged", "paged", "peak_pool", "pool",
                                                     "file", "peak_file")]

        kernel = ctypes.WinDLL("kernel32", use_last_error=True)
        kernel.GetCurrentProcess.restype = ctypes.c_void_p
        kernel.K32GetProcessMemoryInfo.argtypes = [ctypes.c_void_p, ctypes.POINTER(Counters), wintypes.DWORD]
        counters = Counters()
        counters.cb = ctypes.sizeof(Counters)
        if kernel.K32GetProcessMemoryInfo(kernel.GetCurrentProcess(), ctypes.byref(counters), counters.cb):
            return counters.peak_file, counters.peak_set
    except (ImportError, AttributeError, OSError):
        pass
    return None
