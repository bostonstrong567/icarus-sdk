// /Script/ControlRig.RigUnit_AimBone_Target
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h

USTRUCT()
struct FRigUnit_AimBone_Target
{
    UPROPERTY(EditAnywhere) float Weight;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) FVector Axis;  // 0x0004, size 0xC
    UPROPERTY(EditAnywhere) FVector Target;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere) EControlRigVectorKind Kind;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere) FName Space;  // 0x0020, size 0x8
};
