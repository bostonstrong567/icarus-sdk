// /Script/ControlRig.RigUnit_MathTransformFromEulerTransform
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathTransform.h

USTRUCT()
struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{
    UPROPERTY() FEulerTransform EulerTransform;  // 0x0008, size 0x24
    UPROPERTY() FTransform Result;  // 0x0030, size 0x30
};
