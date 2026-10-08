// /Script/ControlRig.RigUnit_MathFloatClamp
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathFloat.h

USTRUCT()
struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() float Minimum;  // 0x000C, size 0x4
    UPROPERTY() float Maximum;  // 0x0010, size 0x4
    UPROPERTY() float Result;  // 0x0014, size 0x4
};
