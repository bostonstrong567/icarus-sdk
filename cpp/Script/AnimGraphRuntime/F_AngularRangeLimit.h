// /Script/AnimGraphRuntime.AngularRangeLimit
// size 0x28, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ApplyLimits.h

USTRUCT()
struct FAngularRangeLimit
{
    UPROPERTY(EditAnywhere) FVector LimitMin;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) FVector LimitMax;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere) FBoneReference Bone;  // 0x0018, size 0x10
};
