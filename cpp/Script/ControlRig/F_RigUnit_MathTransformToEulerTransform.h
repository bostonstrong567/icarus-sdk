// /Script/ControlRig.RigUnit_MathTransformToEulerTransform
// size 0x70, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathTransform.h

USTRUCT()
struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{
public:
    UPROPERTY() FTransform Value;  // 0x0010, size 0x30
    UPROPERTY() FEulerTransform Result;  // 0x0040, size 0x24
};
