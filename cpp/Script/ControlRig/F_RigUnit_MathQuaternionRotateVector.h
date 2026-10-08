// /Script/ControlRig.RigUnit_MathQuaternionRotateVector
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{
    UPROPERTY() FQuat Quaternion;  // 0x0010, size 0x10
    UPROPERTY() FVector Vector;  // 0x0020, size 0xC
    UPROPERTY() FVector Result;  // 0x002C, size 0xC
};
