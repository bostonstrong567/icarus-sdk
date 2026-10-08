// /Script/ClothingSystemRuntimeCommon.ClothConfig_Legacy
// size 0xD4, declared in Engine/Source/Runtime/ClothingSystemRuntimeCommon/Public/ClothConfig_Legacy.h

USTRUCT()
struct FClothConfig_Legacy
{
    UPROPERTY() EClothingWindMethod_Legacy WindMethod;  // 0x0000, size 0x1
    UPROPERTY() FClothConstraintSetup_Legacy VerticalConstraintConfig;  // 0x0004, size 0x10
    UPROPERTY() FClothConstraintSetup_Legacy HorizontalConstraintConfig;  // 0x0014, size 0x10
    UPROPERTY() FClothConstraintSetup_Legacy BendConstraintConfig;  // 0x0024, size 0x10
    UPROPERTY() FClothConstraintSetup_Legacy ShearConstraintConfig;  // 0x0034, size 0x10
    UPROPERTY() float SelfCollisionRadius;  // 0x0044, size 0x4
    UPROPERTY() float SelfCollisionStiffness;  // 0x0048, size 0x4
    UPROPERTY() float SelfCollisionCullScale;  // 0x004C, size 0x4
    UPROPERTY() FVector Damping;  // 0x0050, size 0xC
    UPROPERTY() float Friction;  // 0x005C, size 0x4
    UPROPERTY() float WindDragCoefficient;  // 0x0060, size 0x4
    UPROPERTY() float WindLiftCoefficient;  // 0x0064, size 0x4
    UPROPERTY() FVector LinearDrag;  // 0x0068, size 0xC
    UPROPERTY() FVector AngularDrag;  // 0x0074, size 0xC
    UPROPERTY() FVector LinearInertiaScale;  // 0x0080, size 0xC
    UPROPERTY() FVector AngularInertiaScale;  // 0x008C, size 0xC
    UPROPERTY() FVector CentrifugalInertiaScale;  // 0x0098, size 0xC
    UPROPERTY() float SolverFrequency;  // 0x00A4, size 0x4
    UPROPERTY() float StiffnessFrequency;  // 0x00A8, size 0x4
    UPROPERTY() float GravityScale;  // 0x00AC, size 0x4
    UPROPERTY() FVector GravityOverride;  // 0x00B0, size 0xC
    UPROPERTY() bool bUseGravityOverride;  // 0x00BC, size 0x1
    UPROPERTY() float TetherStiffness;  // 0x00C0, size 0x4
    UPROPERTY() float TetherLimit;  // 0x00C4, size 0x4
    UPROPERTY() float CollisionThickness;  // 0x00C8, size 0x4
    UPROPERTY() float AnimDriveSpringStiffness;  // 0x00CC, size 0x4
    UPROPERTY() float AnimDriveDamperStiffness;  // 0x00D0, size 0x4
};
