// /Script/ControlRig.RigUnit_MathQuaternionBinaryOp
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{
    UPROPERTY() FQuat A;  // 0x0010, size 0x10
    UPROPERTY() FQuat B;  // 0x0020, size 0x10
    UPROPERTY() FQuat Result;  // 0x0030, size 0x10
};
