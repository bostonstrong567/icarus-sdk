// /Script/ControlRig.RigUnit_MathQuaternionToRotator
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{
public:
    UPROPERTY() FQuat Value;  // 0x0010, size 0x10
    UPROPERTY() FRotator Result;  // 0x0020, size 0xC
};
