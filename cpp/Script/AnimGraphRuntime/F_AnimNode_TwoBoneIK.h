// /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
// size 0x1E0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_TwoBoneIK.h

USTRUCT()
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) FBoneReference IKBone;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) float StartStretchRatio;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere) float MaxStretchScale;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EffectorLocation;  // 0x00E0, size 0xC
    UPROPERTY(EditAnywhere) FBoneSocketTarget EffectorTarget;  // 0x00F0, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector JointTargetLocation;  // 0x0150, size 0xC
    UPROPERTY(EditAnywhere) FBoneSocketTarget JointTarget;  // 0x0160, size 0x60
    UPROPERTY(EditAnywhere) FAxis TwistAxis;  // 0x01C0, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneControlSpace> EffectorLocationSpace;  // 0x01D0, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace;  // 0x01D1, size 0x1
    UPROPERTY(EditAnywhere) uint8 bAllowStretching : 1;  // 0x01D2, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bTakeRotationFromEffectorSpace : 1;  // 0x01D2, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bMaintainEffectorRelRot : 1;  // 0x01D2, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bAllowTwist : 1;  // 0x01D2, mask 0x08

    // Not reflected:
    FCompactPoseBoneIndex CachedUpperLimbIndex;  // 0x00EC
    FCompactPoseBoneIndex CachedLowerLimbIndex;  // 0x015C
};
