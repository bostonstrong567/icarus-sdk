// /Script/ClothingSystemRuntimeNv.ClothConfigNv
// Derives from: UClothConfigCommon > UClothConfigBase > UObject
// size 0x140, declared in Engine/Source/Runtime/ClothingSystemRuntimeNv/Public/ClothConfigNv.h

UCLASS()
class UClothConfigNv : public UClothConfigCommon
{
public:
    UPROPERTY(EditAnywhere) EClothingWindMethodNv ClothingWindMethod;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) FClothConstraintSetupNv VerticalConstraint;  // 0x002C, size 0x10
    UPROPERTY(EditAnywhere) FClothConstraintSetupNv HorizontalConstraint;  // 0x003C, size 0x10
    UPROPERTY(EditAnywhere) FClothConstraintSetupNv BendConstraint;  // 0x004C, size 0x10
    UPROPERTY(EditAnywhere) FClothConstraintSetupNv ShearConstraint;  // 0x005C, size 0x10
    UPROPERTY(EditAnywhere) float SelfCollisionRadius;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere) float SelfCollisionStiffness;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere) float SelfCollisionCullScale;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere) FVector Damping;  // 0x0078, size 0xC
    UPROPERTY(EditAnywhere) float Friction;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) float WindDragCoefficient;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere) float WindLiftCoefficient;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere) FVector LinearDrag;  // 0x0090, size 0xC
    UPROPERTY(EditAnywhere) FVector AngularDrag;  // 0x009C, size 0xC
    UPROPERTY(EditAnywhere) FVector LinearInertiaScale;  // 0x00A8, size 0xC
    UPROPERTY(EditAnywhere) FVector AngularInertiaScale;  // 0x00B4, size 0xC
    UPROPERTY(EditAnywhere) FVector CentrifugalInertiaScale;  // 0x00C0, size 0xC
    UPROPERTY(EditAnywhere) float SolverFrequency;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere) float StiffnessFrequency;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere) float GravityScale;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere) FVector GravityOverride;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere) bool bUseGravityOverride;  // 0x00E4, size 0x1
    UPROPERTY(EditAnywhere) float TetherStiffness;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere) float TetherLimit;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere) float CollisionThickness;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere) float AnimDriveSpringStiffness;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere) float AnimDriveDamperStiffness;  // 0x00F8, size 0x4
    UPROPERTY(Deprecated) EClothingWindMethod_Legacy WindMethod;  // 0x00FC, size 0x1
    UPROPERTY(Deprecated) FClothConstraintSetup_Legacy VerticalConstraintConfig;  // 0x0100, size 0x10
    UPROPERTY(Deprecated) FClothConstraintSetup_Legacy HorizontalConstraintConfig;  // 0x0110, size 0x10
    UPROPERTY(Deprecated) FClothConstraintSetup_Legacy BendConstraintConfig;  // 0x0120, size 0x10
    UPROPERTY(Deprecated) FClothConstraintSetup_Legacy ShearConstraintConfig;  // 0x0130, size 0x10
};
