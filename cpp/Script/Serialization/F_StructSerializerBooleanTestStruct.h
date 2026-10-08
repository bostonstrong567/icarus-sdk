// /Script/Serialization.StructSerializerBooleanTestStruct
// size 0x3, declared in Engine/Source/Runtime/Serialization/Private/Tests/StructSerializerTestTypes.h

USTRUCT()
struct FStructSerializerBooleanTestStruct
{
    UPROPERTY() bool BoolFalse;  // 0x0000, size 0x1
    UPROPERTY() bool BoolTrue;  // 0x0001, size 0x1
    UPROPERTY() uint8 Bitfield0 : 1;  // 0x0002, mask 0x01
    UPROPERTY() uint8 Bitfield1 : 1;  // 0x0002, mask 0x02
    UPROPERTY() uint8 Bitfield2Set : 1;  // 0x0002, mask 0x04
    UPROPERTY() uint8 Bitfield3 : 1;  // 0x0002, mask 0x08
    UPROPERTY() uint8 Bitfield4Set : 1;  // 0x0002, mask 0x10
    UPROPERTY() uint8 Bitfield5Set : 1;  // 0x0002, mask 0x20
    UPROPERTY() uint8 Bitfield6 : 1;  // 0x0002, mask 0x40
    UPROPERTY() uint8 Bitfield7Set : 1;  // 0x0002, mask 0x80
};
