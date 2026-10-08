// /Script/AnimGraphRuntime.AnimNode_SpringBone
// size 0x128, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_SpringBone.h

USTRUCT()
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) FBoneReference SpringBone;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDisplacement;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere) float SpringStiffness;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere) float SpringDamping;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere) float ErrorResetThresh;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere) uint8 bLimitDisplacement : 1;  // 0x0124, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bTranslateX : 1;  // 0x0124, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bTranslateY : 1;  // 0x0124, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bTranslateZ : 1;  // 0x0124, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bRotateX : 1;  // 0x0124, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bRotateY : 1;  // 0x0124, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bRotateZ : 1;  // 0x0124, mask 0x40

    // Not reflected:
    FVector BoneLocation;  // 0x00E8
    FVector BoneVelocity;  // 0x00F4
    FVector OwnerVelocity;  // 0x0100
    FVector LocalBoneTransform;  // 0x010C
    float RemainingTime;  // 0x0118
    float FixedTimeStep;  // 0x011C
    float TimeDilation;  // 0x0120
    uint8 : 1 bHadValidStrength;  // 0x0124
};
