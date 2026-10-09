// /Script/Serialization.StructSerializerMapTestStruct
// size 0x140, declared in Engine/Source/Runtime/Serialization/Private/Tests/StructSerializerTestTypes.h

USTRUCT()
struct FStructSerializerMapTestStruct
{
public:
    UPROPERTY() TMap<int32, FString> IntToStr;  // 0x0000, size 0x50
    UPROPERTY() TMap<FString, FString> StrToStr;  // 0x0050, size 0x50
    UPROPERTY() TMap<FString, FVector> StrToVec;  // 0x00A0, size 0x50
    UPROPERTY() TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct;  // 0x00F0, size 0x50
};
