// /Script/ControlRig.RigUnit_AimConstraint
// size 0xC0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/RigUnit_AimConstraint.h

USTRUCT()
struct FRigUnit_AimConstraint : public FRigUnitMutable
{
public:
    UPROPERTY(EditAnywhere) FName Joint;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) EAimMode AimMode;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere) EAimMode UpMode;  // 0x0071, size 0x1
    UPROPERTY(EditAnywhere) FVector AimVector;  // 0x0074, size 0xC
    UPROPERTY(EditAnywhere) FVector UpVector;  // 0x0080, size 0xC
    UPROPERTY(EditAnywhere) TArray<FAimTarget> AimTargets;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) TArray<FAimTarget> UpTargets;  // 0x00A0, size 0x10
    UPROPERTY() FRigUnit_AimConstraint_WorkData WorkData;  // 0x00B0, size 0x10
};
