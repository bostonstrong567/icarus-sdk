// /Script/AnimGraphRuntime.AnimLegIKDefinition
// size 0x2C, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h

USTRUCT()
struct FAnimLegIKDefinition
{
public:
    UPROPERTY(EditAnywhere) FBoneReference IKFootBone;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference FKFootBone;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) int32 NumBonesInLimb;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float MinRotationAngle;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EAxis> FootBoneForwardAxis;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EAxis> HingeRotationAxis;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableRotationLimit;  // 0x002A, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableKneeTwistCorrection;  // 0x002B, size 0x1
};
