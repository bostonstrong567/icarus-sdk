// /Script/ControlRig.RigUnit_MathTransformSelectBool
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathTransform.h

USTRUCT()
struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{
    UPROPERTY() bool Condition;  // 0x0008, size 0x1
    UPROPERTY() FTransform IfTrue;  // 0x0010, size 0x30
    UPROPERTY() FTransform IfFalse;  // 0x0040, size 0x30
    UPROPERTY() FTransform Result;  // 0x0070, size 0x30
};
