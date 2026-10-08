// /Script/ControlRig.RigUnit_MathQuaternionFromEuler
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{
    UPROPERTY() FVector Euler;  // 0x0008, size 0xC
    UPROPERTY() EControlRigRotationOrder RotationOrder;  // 0x0014, size 0x1
    UPROPERTY() FQuat Result;  // 0x0020, size 0x10
};
