// /Script/Engine.BoneNode
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Animation/Skeleton.h

USTRUCT()
struct FBoneNode
{
    UPROPERTY(Deprecated) FName Name;  // 0x0000, size 0x8
    UPROPERTY(Deprecated) int32 ParentIndex;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneTranslationRetargetingMode> TranslationRetargetingMode;  // 0x000C, size 0x1
};
