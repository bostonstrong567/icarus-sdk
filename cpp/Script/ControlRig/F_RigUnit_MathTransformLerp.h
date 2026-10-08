// /Script/ControlRig.RigUnit_MathTransformLerp
// size 0xB0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathTransform.h

USTRUCT()
struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{
    UPROPERTY() FTransform A;  // 0x0010, size 0x30
    UPROPERTY() FTransform B;  // 0x0040, size 0x30
    UPROPERTY() float T;  // 0x0070, size 0x4
    UPROPERTY() FTransform Result;  // 0x0080, size 0x30
};
