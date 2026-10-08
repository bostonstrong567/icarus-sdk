// /Script/ControlRig.RigUnit_MathTransformRotateVector
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathTransform.h

USTRUCT()
struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{
    UPROPERTY() FTransform Transform;  // 0x0010, size 0x30
    UPROPERTY() FVector Direction;  // 0x0040, size 0xC
    UPROPERTY() FVector Result;  // 0x004C, size 0xC
};
