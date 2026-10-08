// /Script/AnimGraphRuntime.AnimNode_CCDIK
// size 0x180, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_CCDIK.h

USTRUCT()
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) FVector EffectorLocation;  // 0x00C8, size 0xC
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;  // 0x00D4, size 0x1
    UPROPERTY(EditAnywhere) FBoneSocketTarget EffectorTarget;  // 0x00E0, size 0x60
    UPROPERTY(EditAnywhere) FBoneReference TipBone;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference RootBone;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere) float Precision;  // 0x0160, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxIterations;  // 0x0164, size 0x4
    UPROPERTY(EditAnywhere) bool bStartFromTail;  // 0x0168, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableRotationLimit;  // 0x0169, size 0x1
    UPROPERTY(EditAnywhere) TArray<float> RotationLimitPerJoints;  // 0x0170, size 0x10
};
