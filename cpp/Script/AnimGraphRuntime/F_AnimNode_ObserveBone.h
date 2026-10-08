// /Script/AnimGraphRuntime.AnimNode_ObserveBone
// size 0x100, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ObserveBone.h

USTRUCT()
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) FBoneReference BoneToObserve;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneControlSpace> DisplaySpace;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere) bool bRelativeToRefPose;  // 0x00D9, size 0x1
    UPROPERTY() FVector Translation;  // 0x00DC, size 0xC
    UPROPERTY() FRotator Rotation;  // 0x00E8, size 0xC
    UPROPERTY() FVector Scale;  // 0x00F4, size 0xC
};
