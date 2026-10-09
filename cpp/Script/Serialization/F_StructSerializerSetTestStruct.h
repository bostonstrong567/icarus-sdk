// /Script/Serialization.StructSerializerSetTestStruct
// size 0x140, declared in Engine/Source/Runtime/Serialization/Private/Tests/StructSerializerTestTypes.h

USTRUCT()
struct FStructSerializerSetTestStruct
{
public:
    UPROPERTY() TSet<FString> StrSet;  // 0x0000, size 0x50
    UPROPERTY() TSet<int32> IntSet;  // 0x0050, size 0x50
    UPROPERTY() TSet<FName> NameSet;  // 0x00A0, size 0x50
    UPROPERTY() TSet<FStructSerializerBuiltinTestStruct> StructSet;  // 0x00F0, size 0x50
};
