// /Script/Serialization.StructSerializerTestStruct
// size 0x450, declared in Engine/Source/Runtime/Serialization/Private/Tests/StructSerializerTestTypes.h

USTRUCT()
struct FStructSerializerTestStruct
{
public:
    UPROPERTY() FStructSerializerNumericTestStruct Numerics;  // 0x0000, size 0x30
    UPROPERTY() FStructSerializerBooleanTestStruct Booleans;  // 0x0030, size 0x3
    UPROPERTY() FStructSerializerObjectTestStruct Objects;  // 0x0038, size 0xA0
    UPROPERTY() FStructSerializerBuiltinTestStruct Builtins;  // 0x00E0, size 0x90
    UPROPERTY() FStructSerializerArrayTestStruct Arrays;  // 0x0170, size 0x60
    UPROPERTY() FStructSerializerMapTestStruct Maps;  // 0x01D0, size 0x140
    UPROPERTY() FStructSerializerSetTestStruct Sets;  // 0x0310, size 0x140
};
