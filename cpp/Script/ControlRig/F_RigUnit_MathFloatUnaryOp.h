// /Script/ControlRig.RigUnit_MathFloatUnaryOp
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathFloat.h

USTRUCT()
struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{
public:
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() float Result;  // 0x000C, size 0x4
};
