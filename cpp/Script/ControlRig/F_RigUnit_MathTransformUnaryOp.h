// /Script/ControlRig.RigUnit_MathTransformUnaryOp
// size 0x70, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathTransform.h

USTRUCT()
struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{
    UPROPERTY() FTransform Value;  // 0x0010, size 0x30
    UPROPERTY() FTransform Result;  // 0x0040, size 0x30
};
