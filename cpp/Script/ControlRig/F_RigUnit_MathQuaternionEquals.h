// /Script/ControlRig.RigUnit_MathQuaternionEquals
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{
public:
    UPROPERTY() FQuat A;  // 0x0010, size 0x10
    UPROPERTY() FQuat B;  // 0x0020, size 0x10
    UPROPERTY() bool Result;  // 0x0030, size 0x1
};
