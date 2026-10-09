// /Script/ControlRig.RigUnit_MathQuaternionUnaryOp
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{
public:
    UPROPERTY() FQuat Value;  // 0x0010, size 0x10
    UPROPERTY() FQuat Result;  // 0x0020, size 0x10
};
