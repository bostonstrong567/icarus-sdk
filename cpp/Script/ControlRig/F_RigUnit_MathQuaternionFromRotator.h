// /Script/ControlRig.RigUnit_MathQuaternionFromRotator
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{
    UPROPERTY() FRotator Rotator;  // 0x0008, size 0xC
    UPROPERTY() FQuat Result;  // 0x0020, size 0x10
};
