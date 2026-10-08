// /Script/ControlRig.RigUnit_MathFloatIsNearlyZero
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathFloat.h

USTRUCT()
struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() float Tolerance;  // 0x000C, size 0x4
    UPROPERTY() bool Result;  // 0x0010, size 0x1
};
