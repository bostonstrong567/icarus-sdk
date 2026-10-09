// /Script/ControlRig.RigUnit_MathRBFInterpolateQuatFloat
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
    UPROPERTY() TArray<FMathRBFInterpolateQuatFloat_Target> Targets;  // 0x00D0, size 0x10
    UPROPERTY() float Output;  // 0x00E0, size 0x4
};
