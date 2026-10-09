// /Script/ControlRig.MathRBFInterpolateQuatXform_Target
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FMathRBFInterpolateQuatXform_Target
{
public:
    UPROPERTY() FQuat Target;  // 0x0000, size 0x10
    UPROPERTY() FTransform Value;  // 0x0010, size 0x30
};
