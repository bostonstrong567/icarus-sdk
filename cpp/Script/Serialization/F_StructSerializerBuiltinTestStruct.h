// /Script/Serialization.StructSerializerBuiltinTestStruct
// size 0x90, declared in Engine/Source/Runtime/Serialization/Private/Tests/StructSerializerTestTypes.h

USTRUCT()
struct FStructSerializerBuiltinTestStruct
{
    UPROPERTY() FGuid Guid;  // 0x0000, size 0x10
    UPROPERTY() FName Name;  // 0x0010, size 0x8
    UPROPERTY() FString String;  // 0x0018, size 0x10
    UPROPERTY() FText Text;  // 0x0028, size 0x18
    UPROPERTY() FVector Vector;  // 0x0040, size 0xC
    UPROPERTY() FVector4 Vector4;  // 0x0050, size 0x10
    UPROPERTY() FRotator Rotator;  // 0x0060, size 0xC
    UPROPERTY() FQuat Quat;  // 0x0070, size 0x10
    UPROPERTY() FColor Color;  // 0x0080, size 0x4
};
