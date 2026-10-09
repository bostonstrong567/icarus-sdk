// /Script/ControlRig.RigUnit_MathBoolUnaryOp
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathBool.h

USTRUCT()
struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{
public:
    UPROPERTY() bool Value;  // 0x0008, size 0x1
    UPROPERTY() bool Result;  // 0x0009, size 0x1
};
