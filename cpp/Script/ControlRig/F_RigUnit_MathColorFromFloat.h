// /Script/ControlRig.RigUnit_MathColorFromFloat
// size 0x20, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathColor.h

USTRUCT()
struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
{
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() FLinearColor Result;  // 0x000C, size 0x10
};
