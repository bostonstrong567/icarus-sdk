// /Script/ControlRig.RigUnit_MathFloatToInt
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathFloat.h

USTRUCT()
struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
{
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() int32 Result;  // 0x000C, size 0x4
};
