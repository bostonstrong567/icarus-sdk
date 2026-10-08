// /Script/ControlRig.RigUnit_MathTransformBinaryOp
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathTransform.h

USTRUCT()
struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{
    UPROPERTY() FTransform A;  // 0x0010, size 0x30
    UPROPERTY() FTransform B;  // 0x0040, size 0x30
    UPROPERTY() FTransform Result;  // 0x0070, size 0x30
};
