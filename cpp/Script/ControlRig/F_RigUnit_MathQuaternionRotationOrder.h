// /Script/ControlRig.RigUnit_MathQuaternionRotationOrder
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h

USTRUCT()
struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{
public:
    UPROPERTY() EControlRigRotationOrder RotationOrder;  // 0x0008, size 0x1
};
