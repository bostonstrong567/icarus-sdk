// /Script/ControlRig.RigUnit_UnaryQuaternionOp
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Quaternion.h

USTRUCT()
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
    UPROPERTY() FQuat Argument;  // 0x0010, size 0x10
    UPROPERTY() FQuat Result;  // 0x0020, size 0x10
};
