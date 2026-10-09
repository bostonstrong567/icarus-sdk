// /Script/ControlRig.RigUnit_BinaryTransformOp
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/Math/RigUnit_Transform.h

USTRUCT()
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
public:
    UPROPERTY() FTransform Argument0;  // 0x0010, size 0x30
    UPROPERTY() FTransform Argument1;  // 0x0040, size 0x30
    UPROPERTY() FTransform Result;  // 0x0070, size 0x30
};
