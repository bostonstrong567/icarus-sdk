// /Script/ControlRig.RigUnit_BinaryQuaternionOp
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Quaternion.h

USTRUCT()
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
public:
    UPROPERTY() FQuat Argument0;  // 0x0010, size 0x10
    UPROPERTY() FQuat Argument1;  // 0x0020, size 0x10
    UPROPERTY() FQuat Result;  // 0x0030, size 0x10
};
