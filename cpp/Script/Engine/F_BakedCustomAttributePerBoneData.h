// /Script/Engine.BakedCustomAttributePerBoneData
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Animation/CustomAttributes.h

USTRUCT()
struct FBakedCustomAttributePerBoneData
{
public:
    UPROPERTY() int32 BoneTreeIndex;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) TArray<FBakedStringCustomAttribute> StringAttributes;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBakedIntegerCustomAttribute> IntAttributes;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBakedFloatCustomAttribute> FloatAttributes;  // 0x0028, size 0x10
};
