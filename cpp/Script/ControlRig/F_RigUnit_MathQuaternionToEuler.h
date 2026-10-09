// /Script/ControlRig.RigUnit_MathQuaternionToEuler
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{
public:
    UPROPERTY() FQuat Value;  // 0x0010, size 0x10
    UPROPERTY() EControlRigRotationOrder RotationOrder;  // 0x0020, size 0x1
    UPROPERTY() FVector Result;  // 0x0024, size 0xC
};
