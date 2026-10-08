"""Reads a PDB one stream at a time. The file is mapped and read in pieces, never loaded whole."""
import array
import bisect
import mmap
import struct
import uuid

MAGIC = b"Microsoft C/C++ MSF 7.00\r\n\x1aDS\0\0\0"
CHUNK = 8 << 20

S_PUB32, S_GDATA32, S_LDATA32, S_PROCREF, S_LPROCREF = 0x110E, 0x110D, 0x110C, 0x1125, 0x1127
S_GPROC32, S_LPROC32, S_GPROC32_ID, S_LPROC32_ID = 0x1110, 0x110F, 0x1147, 0x1146
PROCEDURES = (S_GPROC32, S_LPROC32, S_GPROC32_ID, S_LPROC32_ID)

LF_MODIFIER, LF_POINTER, LF_PROCEDURE, LF_MFUNCTION = 0x1001, 0x1002, 0x1008, 0x1009
LF_ARGLIST, LF_FIELDLIST, LF_BITFIELD, LF_METHODLIST = 0x1201, 0x1203, 0x1205, 0x1206
LF_BCLASS, LF_VBCLASS, LF_IVBCLASS, LF_INDEX, LF_VFUNCTAB = 0x1400, 0x1401, 0x1402, 0x1404, 0x1409
LF_ENUMERATE, LF_ARRAY, LF_CLASS, LF_STRUCTURE, LF_UNION, LF_ENUM = 0x1502, 0x1503, 0x1504, 0x1505, 0x1506, 0x1507
LF_MEMBER, LF_STMEMBER, LF_METHOD, LF_NESTTYPE, LF_ONEMETHOD, LF_INTERFACE = 0x150D, 0x150E, 0x150F, 0x1510, 0x1511, 0x1519
LF_NESTTYPEEX, LF_VFUNCOFF, LF_UDT_SRC_LINE, LF_UDT_MOD_SRC_LINE = 0x1512, 0x140C, 0x1606, 0x1607
RECORDS = (LF_CLASS, LF_STRUCTURE, LF_INTERFACE)
NAMED = (LF_CLASS, LF_STRUCTURE, LF_INTERFACE, LF_UNION, LF_ENUM)

FORWARD, NESTED, HAS_CONSTRUCTOR = 0x80, 0x08, 0x02
ACCESS = {0: None, 1: "private", 2: "protected", 3: "public"}
VANILLA, VIRTUAL, STATIC, FRIEND, INTRODUCING, PURE, PURE_INTRODUCING = range(7)

BASIC = {
    0x00: "...", 0x03: "void", 0x08: "HRESULT", 0x10: "int8", 0x20: "uint8", 0x68: "int8", 0x69: "uint8",
    0x70: "char", 0x71: "wchar_t", 0x7A: "char16_t", 0x7B: "char32_t", 0x7C: "char8_t", 0x11: "int16",
    0x21: "uint16", 0x72: "int16", 0x73: "uint16", 0x12: "long", 0x22: "unsigned long", 0x74: "int32",
    0x75: "uint32", 0x13: "int64", 0x23: "uint64", 0x76: "int64", 0x77: "uint64", 0x40: "float", 0x41: "double",
    0x42: "long double", 0x30: "bool", 0x0F: "nullptr_t",
}
BASIC_SIZE = {
    0x10: 1, 0x20: 1, 0x68: 1, 0x69: 1, 0x70: 1, 0x7C: 1, 0x30: 1, 0x71: 2, 0x7A: 2, 0x11: 2, 0x21: 2, 0x72: 2,
    0x73: 2, 0x7B: 4, 0x12: 4, 0x22: 4, 0x74: 4, 0x75: 4, 0x40: 4, 0x08: 4, 0x13: 8, 0x23: 8, 0x76: 8, 0x77: 8,
    0x41: 8, 0x42: 8, 0x0F: 8,
}


class PdbError(Exception):
    pass


class Stream:
    """One stream of the file: its blocks joined into runs, read by offset."""

    def __init__(self, mapped, block, blocks, size):
        self.map = mapped
        self.size = size
        self.starts, self.files, self.lengths = [], [], []
        at = 0
        previous = None
        for number in blocks:
            if previous is not None and number == previous + 1:
                self.lengths[-1] += block
            else:
                self.starts.append(at)
                self.files.append(number * block)
                self.lengths.append(block)
            previous = number
            at += block

    def read(self, start=0, length=None):
        if length is None:
            length = self.size - start
        length = min(length, self.size - start)
        if start < 0 or length <= 0:
            return b""
        i = bisect.bisect_right(self.starts, start) - 1
        inside = start - self.starts[i]
        if inside + length <= self.lengths[i]:
            begin = self.files[i] + inside
            return self.map[begin:begin + length]
        parts = []
        while length > 0:
            take = min(length, self.lengths[i] - inside)
            begin = self.files[i] + inside
            parts.append(self.map[begin:begin + take])
            length -= take
            inside = 0
            i += 1
        return b"".join(parts)

    def chunks(self, start=0, end=None, size=None):
        size = size or CHUNK
        end = self.size if end is None else min(end, self.size)
        while start < end:
            piece = self.read(start, min(size, end - start))
            yield start, piece
            start += len(piece)


class Msf:
    """The container: a directory of streams, each a list of blocks."""

    def __init__(self, path):
        self.path = path
        self.file = open(path, "rb")
        try:
            self.map = mmap.mmap(self.file.fileno(), 0, access=mmap.ACCESS_READ)
        except (ValueError, OSError):
            self.file.close()
            raise PdbError("%s is empty or cannot be mapped." % path)
        if self.map[:len(MAGIC)] != MAGIC:
            self.close()
            raise PdbError("%s is not a PDB (no MSF 7.00 header)." % path)
        self.block, _, self.block_count, directory_bytes, _, map_block = struct.unpack_from("<IIIIII", self.map, 32)
        if self.block not in (512, 1024, 2048, 4096, 8192, 16384, 32768) or self.block_count * self.block > len(self.map):
            self.close()
            raise PdbError("%s is cut short: it says %d blocks and holds fewer. Is the game still updating?"
                           % (path, self.block_count))
        count = -(-directory_bytes // self.block)
        listed = struct.unpack_from("<%dI" % count, self.map, map_block * self.block)
        directory = Stream(self.map, self.block, listed, directory_bytes).read()
        streams, = struct.unpack_from("<I", directory, 0)
        self.sizes = [0 if size == 0xFFFFFFFF else size for size in struct.unpack_from("<%dI" % streams, directory, 4)]
        self.blocks = array.array("I")
        self.blocks.frombytes(directory[4 + 4 * streams:])
        self.first = []
        at = 0
        for size in self.sizes:
            self.first.append(at)
            at += -(-size // self.block)
        if at > len(self.blocks):
            self.close()
            raise PdbError("%s is cut short: its directory names more blocks than it holds." % path)

    def stream(self, index):
        if not 0 <= index < len(self.sizes):
            raise PdbError("%s has no stream %d." % (self.path, index))
        size = self.sizes[index]
        first = self.first[index]
        return Stream(self.map, self.block, self.blocks[first:first + -(-size // self.block)], size)

    def close(self):
        self.map.close()
        self.file.close()


def numeric(data, at):
    """A CodeView number: the value, and where the next field starts."""
    value, = struct.unpack_from("<H", data, at)
    if value < 0x8000:
        return value, at + 2
    kind = {0x8000: "<b", 0x8001: "<h", 0x8002: "<H", 0x8003: "<i", 0x8004: "<I", 0x8009: "<q", 0x800A: "<Q"}.get(value)
    if kind is None:
        raise PdbError("number of kind 0x%X is not known." % value)
    return struct.unpack_from(kind, data, at + 2)[0], at + 2 + struct.calcsize(kind)


def text_at(data, at):
    end = data.index(b"\0", at)
    return data[at:end].decode("utf-8", "replace"), end + 1


def plain_name(decorated):
    """`?name@Scope@@...` as (scope or None, name); None for names that are not of that shape."""
    if not decorated.startswith("?") or decorated.startswith("??"):
        return None
    body = decorated[1:].split("@@", 1)[0]
    parts = body.split("@")
    if not parts[0] or len(parts) > 2:
        return None
    return (parts[1] if len(parts) == 2 else None), parts[0]


class Pdb:
    def __init__(self, path):
        self.msf = Msf(path)
        try:
            head = self.msf.stream(1).read(0, 28)
            if len(head) < 28:
                raise PdbError("%s has no information stream." % path)
            self.version, self.signature, self.age = struct.unpack_from("<III", head, 0)
            self.guid = uuid.UUID(bytes_le=head[12:28])
            self.read_debug_header()
        except Exception:
            self.msf.close()
            raise

    def read_debug_header(self):
        debug = self.msf.stream(3)
        head = debug.read(0, 64)
        if len(head) < 64:
            raise PdbError("%s has no debug information stream." % self.msf.path)
        (_, _, _, self.globals_stream, _, self.publics_stream, _, self.records_stream, _, self.modules_bytes,
         contributions, section_map, sources, type_servers, _, optional, edit, self.flags, self.machine,
         _) = struct.unpack_from("<iIIHHHHHHiiiiiIiiHHI", head, 0)
        self.stripped = bool(self.flags & 2)
        self.contribution_bytes = contributions
        self._contributions = None
        at = 64 + self.modules_bytes + contributions + section_map + sources + type_servers + edit
        extra = struct.unpack_from("<%dH" % (optional // 2), debug.read(at, optional), 0)
        self.sections = []
        if len(extra) > 5 and extra[5] != 0xFFFF:
            raw = self.msf.stream(extra[5]).read()
            for i in range(0, len(raw) - 39, 40):
                virtual_size, virtual = struct.unpack_from("<II", raw, i + 8)
                self.sections.append((raw[i:i + 8].rstrip(b"\0").decode("ascii", "replace"), virtual, virtual_size))
        self._modules = None

    def close(self):
        self.msf.close()

    def rva(self, segment, offset):
        """A symbol's address relative to the image base, or None when its section is not in the image."""
        if 0 < segment <= len(self.sections):
            return self.sections[segment - 1][1] + offset
        return None

    def symbols(self, kinds, prefixes=()):
        """Named records of the global symbol stream: (kind, name, rva, type index or public flags)."""
        stream = self.msf.stream(self.records_stream)
        kinds = frozenset(kinds)
        prefixes = tuple(prefixes)
        unpack_head = struct.Struct("<HH").unpack_from
        unpack_place = struct.Struct("<IIH").unpack_from
        sections = self.sections
        count = len(sections)
        carry = b""
        for _, piece in stream.chunks():
            data = carry + piece if carry else piece
            at, end = 0, len(data)
            while at + 4 <= end:
                length, kind = unpack_head(data, at)
                after = at + 2 + length
                if after > end:
                    break
                if kind in kinds and (not prefixes or data.startswith(prefixes, at + 14)):
                    extra, offset, segment = unpack_place(data, at + 4)
                    stop = data.find(b"\0", at + 14, after)
                    name = data[at + 14:stop if stop >= 0 else after]
                    yield kind, name, (sections[segment - 1][1] + offset if 0 < segment <= count else None), extra
                at = after
            carry = data[at:]

    def modules(self):
        """The object files the exe was linked from: (name, stream, bytes of symbols)."""
        if self._modules is None:
            raw = self.msf.stream(3).read(64, self.modules_bytes)
            found = []
            at = 0
            while at + 64 < len(raw):
                stream, symbol_bytes = struct.unpack_from("<HI", raw, at + 34)
                end = raw.index(b"\0", at + 64)
                name = raw[at + 64:end].decode("utf-8", "replace")
                end = raw.index(b"\0", end + 1)
                found.append((name, None if stream == 0xFFFF else stream, symbol_bytes))
                at = (end + 4) & ~3
            self._modules = found
        return self._modules

    def contributions(self):
        """Which object file each piece of the image came from: sorted starts, ends and module numbers."""
        if self._contributions is None:
            raw = self.msf.stream(3).read(64 + self.modules_bytes, self.contribution_bytes)
            version = struct.unpack_from("<I", raw, 0)[0] if len(raw) >= 4 else 0
            each = {0xF12EBA2D: 28, 0xF13151E4: 32}.get(version)
            if each is None:
                raise PdbError("section contributions of version 0x%X are not known." % version)
            pieces = []
            count = len(self.sections)
            for at in range(4, len(raw) - each + 1, each):
                segment, _, offset, size, _, module = struct.unpack_from("<HHiiIH", raw, at)
                if 0 < segment <= count and size > 0:
                    start = self.sections[segment - 1][1] + offset
                    pieces.append((start, start + size, module))
            pieces.sort()
            self._contributions = ([piece[0] for piece in pieces], pieces)
        return self._contributions

    def module_at(self, rva):
        """The object file an address came from, or None."""
        starts, pieces = self.contributions()
        i = bisect.bisect_right(starts, rva) - 1
        if i < 0 or rva >= pieces[i][1]:
            return None
        modules = self.modules()
        return modules[pieces[i][2]][0] if pieces[i][2] < len(modules) else None

    def module_of(self, rva):
        """The build module an address belongs to: the folder its object file was compiled in."""
        name = self.module_at(rva)
        if not name:
            return None
        parts = name.replace("/", "\\").split("\\")
        return parts[-2] if len(parts) > 1 else None

    def named_streams(self):
        """The streams the file names itself: {name: stream number}."""
        data = self.msf.stream(1).read()
        found = {}
        if len(data) < 44:
            return found
        size, = struct.unpack_from("<I", data, 28)
        names = data[32:32 + size]
        at = 32 + size
        count, _, words = struct.unpack_from("<III", data, at)
        at += 12 + 4 * words
        words, = struct.unpack_from("<I", data, at)
        at += 4 + 4 * words
        for _ in range(count):
            key, stream = struct.unpack_from("<II", data, at)
            at += 8
            found[names[key:names.index(b"\0", key)].decode("utf-8", "replace")] = stream
        return found

    def sources(self, wanted):
        """Where each wanted type was declared: {type index: (file, line)}."""
        stream = self.named_streams().get("/names")
        if stream is None or len(self.msf.sizes) <= 4:
            return {}
        names = self.msf.stream(stream)
        ids = self.msf.stream(4)
        head = ids.read(0, 20)
        if len(head) < 20:
            return {}
        _, header, _, _, size = struct.unpack_from("<IIIII", head, 0)
        unpack_head = struct.Struct("<HH").unpack_from
        unpack_line = struct.Struct("<III").unpack_from
        found = {}
        carry = b""
        for _, piece in ids.chunks(header, header + size):
            data = carry + piece if carry else piece
            at, end = 0, len(data)
            while at + 4 <= end:
                length, kind = unpack_head(data, at)
                after = at + 2 + length
                if after > end:
                    break
                if kind == LF_UDT_MOD_SRC_LINE:
                    index, name, line = unpack_line(data, at + 4)
                    if index in wanted:
                        found[index] = (name, line)
                at = after
            carry = data[at:]
        texts = {}
        for index, (name, line) in found.items():
            if name not in texts:
                raw = names.read(12 + name, 520)
                texts[name] = raw.split(b"\0", 1)[0].decode("utf-8", "replace")
            found[index] = (texts[name], line)
        return found

    def module_symbols(self, module):
        """The symbol records of one object file, as one block of bytes."""
        _, stream, symbol_bytes = module
        if stream is None or symbol_bytes <= 4:
            return b""
        return self.msf.stream(stream).read(4, symbol_bytes - 4)

    def local_data(self, module, procedures, names):
        """Statics inside functions: {(function name, static name): rva} for the wanted pairs."""
        data = self.module_symbols(module)
        found = {}
        if not data or not any(name in data for name in names):
            return found
        unpack_head = struct.Struct("<HH").unpack_from
        at, end = 0, len(data)
        inside, close = None, 0
        while at + 4 <= end:
            length, kind = unpack_head(data, at)
            after = at + 2 + length
            if length < 2 or after > end:
                break
            if kind in PROCEDURES:
                stop = data.find(b"\0", at + 39, after)
                name = data[at + 39:stop if stop >= 0 else after]
                inside = name if name.startswith(procedures) else None
                close = struct.unpack_from("<I", data, at + 8)[0] - 4
            elif inside is not None:
                if at >= close:
                    inside = None
                elif kind == S_LDATA32 or kind == S_GDATA32:
                    stop = data.find(b"\0", at + 14, after)
                    name = data[at + 14:stop if stop >= 0 else after]
                    if name in names:
                        _, offset, segment = struct.unpack_from("<IIH", data, at + 4)
                        found[(inside, name)] = self.rva(segment, offset)
            at = after
        return found


class Types:
    """The type records. One pass finds every record and the definitions by name; reads after that are by index."""

    def __init__(self, pdb, stream=2):
        self.stream = pdb.msf.stream(stream)
        head = self.stream.read(0, 56)
        if len(head) < 20:
            raise PdbError("%s has no type records." % pdb.msf.path)
        self.version, self.header, self.first, self.last, self.bytes = struct.unpack_from("<IIIII", head, 0)
        self.offsets = array.array("I")
        self.names = {}
        self.repeated = {}
        self.kinds = {}
        self._text = {}
        self._size = {}

    def index(self, keep=None):
        """Walks every record once. `keep(name)` chooses which definitions are found by name later."""
        unpack_head = struct.Struct("<HH").unpack_from
        unpack_flags = struct.Struct("<H").unpack_from
        append = self.offsets.append
        names = self.names
        repeated = self.repeated
        kinds = self.kinds
        number = self.first
        carry = b""
        base = self.header
        for start, piece in self.stream.chunks(self.header, self.header + self.bytes):
            data = carry + piece if carry else piece
            base = start - len(carry)
            at, end = 0, len(data)
            while at + 4 <= end:
                length, kind = unpack_head(data, at)
                after = at + 2 + length
                if after > end:
                    break
                append(base + at)
                if kind in NAMED:
                    kinds[kind] = kinds.get(kind, 0) + 1
                    if not unpack_flags(data, at + 6)[0] & FORWARD:
                        if kind == LF_ENUM:
                            begin = at + 16
                        else:
                            begin = at + (12 if kind == LF_UNION else 20)
                            begin += 2 if unpack_flags(data, begin)[0] < 0x8000 else self.wide(data, begin)
                        name = data[begin:data.index(b"\0", begin, after)]
                        if keep is None or keep(name):
                            if name in names:
                                repeated.setdefault(name, []).append(number)
                            else:
                                names[name] = number
                number += 1
                at = after
            carry = data[at:]
        self.offsets.append(self.header + self.bytes)
        if number != self.last:
            raise PdbError("the type stream holds %d records, its header says %d." % (number - self.first, self.last - self.first))

    @staticmethod
    def wide(data, at):
        return numeric(data, at)[1] - at

    def record(self, index):
        """One record: (kind, its bytes after the kind)."""
        place = index - self.first
        if not 0 <= place < len(self.offsets) - 1:
            raise PdbError("type index 0x%X is outside the stream." % index)
        begin = self.offsets[place]
        data = self.stream.read(begin, self.offsets[place + 1] - begin)
        length, kind = struct.unpack_from("<HH", data, 0)
        return kind, data[4:2 + length]

    def find(self, name):
        """The index of the definition with this name, or None."""
        return self.names.get(name.encode("utf-8") if isinstance(name, str) else name)

    def find_all(self, name):
        """Every definition under this name: one program can hold several that differ."""
        name = name.encode("utf-8") if isinstance(name, str) else name
        first = self.names.get(name)
        return [] if first is None else [first] + self.repeated.get(name, [])

    def head(self, index):
        """A class, struct, union or enum record as a dict, or None for anything else."""
        if index < self.first:
            return None
        kind, body = self.record(index)
        if kind in RECORDS:
            count, flags, fields = struct.unpack_from("<HHI", body, 0)
            size, at = numeric(body, 16)
            return {"kind": kind, "count": count, "flags": flags, "fields": fields, "size": size, "name": text_at(body, at)[0]}
        if kind == LF_UNION:
            count, flags, fields = struct.unpack_from("<HHI", body, 0)
            size, at = numeric(body, 8)
            return {"kind": kind, "count": count, "flags": flags, "fields": fields, "size": size, "name": text_at(body, at)[0]}
        if kind == LF_ENUM:
            count, flags, under, fields = struct.unpack_from("<HHII", body, 0)
            return {"kind": kind, "count": count, "flags": flags, "fields": fields, "under": under, "name": text_at(body, 12)[0]}
        return None

    def defined(self, index):
        """The same type's definition when the index names a forward reference; None when there is none."""
        head = self.head(index)
        if head is None:
            return None
        if not head["flags"] & FORWARD:
            head["index"] = index
            return head
        found = self.find(head["name"])
        if found is None:
            return None
        head = self.head(found)
        head["index"] = found
        return head

    def fields(self, index):
        """Every entry of a field list, with the lists it continues in."""
        while index:
            kind, body = self.record(index)
            if kind != LF_FIELDLIST:
                raise PdbError("type 0x%X is not a field list." % index)
            index = 0
            at, end = 0, len(body)
            while at + 2 <= end:
                if body[at] >= 0xF0:
                    at += body[at] & 0x0F
                    continue
                leaf, = struct.unpack_from("<H", body, at)
                if leaf == LF_MEMBER:
                    access, kind = struct.unpack_from("<HI", body, at + 2)
                    offset, at = numeric(body, at + 8)
                    name, at = text_at(body, at)
                    yield ("member", access & 3, name, offset, kind)
                elif leaf == LF_ONEMETHOD:
                    access, kind = struct.unpack_from("<HI", body, at + 2)
                    how = (access >> 2) & 7
                    at += 12 if how in (INTRODUCING, PURE_INTRODUCING) else 8
                    name, at = text_at(body, at)
                    yield ("method", access & 3, name, how, kind)
                elif leaf == LF_METHOD:
                    _, listed = struct.unpack_from("<HI", body, at + 2)
                    name, at = text_at(body, at + 8)
                    _, entries = self.record(listed)
                    place = 0
                    while place + 8 <= len(entries):
                        access, _, kind = struct.unpack_from("<HHI", entries, place)
                        how = (access >> 2) & 7
                        place += 12 if how in (INTRODUCING, PURE_INTRODUCING) else 8
                        yield ("method", access & 3, name, how, kind)
                elif leaf == LF_BCLASS:
                    access, kind = struct.unpack_from("<HI", body, at + 2)
                    offset, at = numeric(body, at + 8)
                    yield ("base", access & 3, kind, offset)
                elif leaf in (LF_VBCLASS, LF_IVBCLASS):
                    access, kind = struct.unpack_from("<HI", body, at + 2)
                    _, at = numeric(body, at + 12)
                    _, at = numeric(body, at)
                    yield ("virtual base", access & 3, kind, None)
                elif leaf == LF_STMEMBER:
                    access, kind = struct.unpack_from("<HI", body, at + 2)
                    name, at = text_at(body, at + 8)
                    yield ("static", access & 3, name, kind)
                elif leaf == LF_NESTTYPE or leaf == LF_NESTTYPEEX:
                    kind, = struct.unpack_from("<I", body, at + 4)
                    name, at = text_at(body, at + 8)
                    yield ("nested", name, kind)
                elif leaf == LF_ENUMERATE:
                    value, at = numeric(body, at + 4)
                    name, at = text_at(body, at)
                    yield ("value", name, value)
                elif leaf == LF_VFUNCTAB:
                    at += 8
                    yield ("vtable",)
                elif leaf == LF_VFUNCOFF:
                    at += 12
                elif leaf == LF_INDEX:
                    index, = struct.unpack_from("<I", body, at + 4)
                    at += 8
                else:
                    raise PdbError("field of kind 0x%X is not known." % leaf)

    def size(self, index):
        """Bytes a value of this type takes, or None when the records do not say."""
        if index < self.first:
            return 8 if index >> 8 else BASIC_SIZE.get(index & 0xFF)
        if index in self._size:
            return self._size[index]
        kind, body = self.record(index)
        size = None
        if kind == LF_POINTER:
            size = (struct.unpack_from("<I", body, 4)[0] >> 13) & 0x3F or 8
        elif kind == LF_MODIFIER or kind == LF_BITFIELD:
            size = self.size(struct.unpack_from("<I", body, 0)[0])
        elif kind == LF_ARRAY:
            size = numeric(body, 8)[0]
        elif kind == LF_ENUM:
            size = self.size(struct.unpack_from("<I", body, 4)[0])
        elif kind in RECORDS or kind == LF_UNION:
            head = self.defined(index)
            size = head["size"] if head else None
        self._size[index] = size
        return size

    def text(self, index, depth=0):
        """The type as C++ would write it."""
        if index < self.first:
            name = BASIC.get(index & 0xFF, "type%02X" % (index & 0xFF))
            return name + " *" if index >> 8 else name
        if depth == 0 and index in self._text:
            return self._text[index]
        if depth > 8:
            return "..."
        kind, body = self.record(index)
        if kind in RECORDS:
            _, at = numeric(body, 16)
            text = text_at(body, at)[0]
        elif kind == LF_UNION:
            _, at = numeric(body, 8)
            text = text_at(body, at)[0]
        elif kind == LF_ENUM:
            text = text_at(body, 12)[0]
        elif kind == LF_POINTER:
            under, flags = struct.unpack_from("<II", body, 0)
            mode = (flags >> 5) & 7
            inner = self.kind_of(under)
            if inner in (LF_PROCEDURE, LF_MFUNCTION) and mode == 0:
                text = self.call(under, depth + 1, " (*)")
            else:
                text = self.text(under, depth + 1) + {0: " *", 1: " &", 4: " &&"}.get(mode, " ::*")
            if flags & 0x400:
                text += " const"
        elif kind == LF_MODIFIER:
            under, flags = struct.unpack_from("<IH", body, 0)
            text = ("const " if flags & 1 else "") + ("volatile " if flags & 2 else "") + self.text(under, depth + 1)
        elif kind == LF_ARRAY:
            element, = struct.unpack_from("<I", body, 0)
            total = numeric(body, 8)[0]
            each = self.size(element)
            text = "%s[%s]" % (self.text(element, depth + 1), total // each if each else "%d bytes" % total)
        elif kind == LF_BITFIELD:
            under, bits, _ = struct.unpack_from("<IBB", body, 0)
            text = "%s : %d" % (self.text(under, depth + 1), bits)
        elif kind in (LF_PROCEDURE, LF_MFUNCTION):
            text = self.call(index, depth, "")
        else:
            text = "leaf%04X" % kind
        if depth == 0:
            self._text[index] = text
        return text

    def kind_of(self, index):
        return None if index < self.first else self.record(index)[0]

    def call(self, index, depth, between):
        result, arguments, _ = self.signature(index)
        return "%s%s(%s)" % (self.text(result, depth + 1) + (" " if between == "" else ""), between,
                             ", ".join(self.text(argument, depth + 1) for argument in arguments))

    def signature(self, index):
        """A function type: (return type, argument types, the type of `this` or 0)."""
        kind, body = self.record(index)
        if kind == LF_MFUNCTION:
            result, _, this, _, _, _, listed = struct.unpack_from("<IIIBBHI", body, 0)
        elif kind == LF_PROCEDURE:
            result, _, _, _, listed = struct.unpack_from("<IBBHI", body, 0)
            this = 0
        else:
            raise PdbError("type 0x%X is not a function." % index)
        arguments = ()
        if listed >= self.first:
            kind, body = self.record(listed)
            if kind == LF_ARGLIST:
                count, = struct.unpack_from("<I", body, 0)
                arguments = struct.unpack_from("<%dI" % count, body, 4)
        return result, arguments, this

    def is_const(self, index):
        """True when a member function type takes a const `this`."""
        _, _, this = self.signature(index)
        if this < self.first:
            return False
        kind, body = self.record(this)
        if kind != LF_POINTER:
            return False
        under, = struct.unpack_from("<I", body, 0)
        if under < self.first:
            return False
        kind, body = self.record(under)
        return kind == LF_MODIFIER and bool(struct.unpack_from("<H", body, 4)[0] & 1)

    def bit_field(self, index):
        """(base type, bits, first bit) when the type is a bit field, else None."""
        if index < self.first:
            return None
        kind, body = self.record(index)
        if kind != LF_BITFIELD:
            return None
        return struct.unpack_from("<IBB", body, 0)

    def enumerators(self, index):
        """An enum's own values as declared: [(name, value)]."""
        head = self.defined(index)
        if head is None or head["kind"] != LF_ENUM:
            return None
        return [(entry[1], entry[2]) for entry in self.fields(head["fields"]) if entry[0] == "value"]
