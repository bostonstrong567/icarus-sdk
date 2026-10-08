// /Script/Engine.CustomAttributePerBoneData
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/CustomAttributes.h

USTRUCT()
struct FCustomAttributePerBoneData
{
    UPROPERTY(EditAnywhere) int32 BoneTreeIndex;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) TArray<FCustomAttribute> Attributes;  // 0x0008, size 0x10
};
