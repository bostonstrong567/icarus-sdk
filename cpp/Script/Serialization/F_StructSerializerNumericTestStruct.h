// /Script/Serialization.StructSerializerNumericTestStruct
// size 0x30, declared in Engine/Source/Runtime/Serialization/Private/Tests/StructSerializerTestTypes.h

USTRUCT()
struct FStructSerializerNumericTestStruct
{
public:
    UPROPERTY() int8 Int8;  // 0x0000, size 0x1
    UPROPERTY() int16 Int16;  // 0x0002, size 0x2
    UPROPERTY() int32 Int32;  // 0x0004, size 0x4
    UPROPERTY() int64 Int64;  // 0x0008, size 0x8
    UPROPERTY() uint8 UInt8;  // 0x0010, size 0x1
    UPROPERTY() uint16 UInt16;  // 0x0012, size 0x2
    UPROPERTY() uint32 UInt32;  // 0x0014, size 0x4
    UPROPERTY() uint64 UInt64;  // 0x0018, size 0x8
    UPROPERTY() float Float;  // 0x0020, size 0x4
    UPROPERTY() double Double;  // 0x0028, size 0x8
};
