// /Script/ControlRig.RigUnit_MathTransformMakeRelative
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathTransform.h

USTRUCT()
struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{
    UPROPERTY() FTransform Global;  // 0x0010, size 0x30
    UPROPERTY() FTransform Parent;  // 0x0040, size 0x30
    UPROPERTY() FTransform Local;  // 0x0070, size 0x30
};
