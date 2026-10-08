// /Script/AnimGraphRuntime.AnimPhysConstraintSetup
// size 0x48, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_AnimDynamics.h

USTRUCT()
struct FAnimPhysConstraintSetup
{
    UPROPERTY(EditAnywhere) AnimPhysLinearConstraintType LinearXLimitType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) AnimPhysLinearConstraintType LinearYLimitType;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) AnimPhysLinearConstraintType LinearZLimitType;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere) FVector LinearAxesMin;  // 0x0004, size 0xC
    UPROPERTY(EditAnywhere) FVector LinearAxesMax;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere) AnimPhysAngularConstraintType AngularConstraintType;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere) AnimPhysTwistAxis TwistAxis;  // 0x001D, size 0x1
    UPROPERTY(EditAnywhere) AnimPhysTwistAxis AngularTargetAxis;  // 0x001E, size 0x1
    UPROPERTY(EditAnywhere) float ConeAngle;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) FVector AngularLimitsMin;  // 0x0024, size 0xC
    UPROPERTY(EditAnywhere) FVector AngularLimitsMax;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) FVector AngularTarget;  // 0x003C, size 0xC

    // Not reflected:
    bool bLinearFullyLocked;  // 0x0003
};
