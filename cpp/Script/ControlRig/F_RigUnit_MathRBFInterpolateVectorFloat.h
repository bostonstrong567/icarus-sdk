// /Script/ControlRig.RigUnit_MathRBFInterpolateVectorFloat
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
{
    UPROPERTY() TArray<FMathRBFInterpolateVectorFloat_Target> Targets;  // 0x00B0, size 0x10
    UPROPERTY() float Output;  // 0x00C0, size 0x4
};
