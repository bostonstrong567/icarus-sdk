// /Script/ControlRig.RigUnit_MathFloatSelectBool
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathFloat.h

USTRUCT()
struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{
    UPROPERTY() bool Condition;  // 0x0008, size 0x1
    UPROPERTY() float IfTrue;  // 0x000C, size 0x4
    UPROPERTY() float IfFalse;  // 0x0010, size 0x4
    UPROPERTY() float Result;  // 0x0014, size 0x4
};
