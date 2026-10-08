// /Script/ControlRig.RigUnit_MathRBFInterpolateVectorXform
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
{
    UPROPERTY() TArray<FMathRBFInterpolateVectorXform_Target> Targets;  // 0x00B0, size 0x10
    UPROPERTY() FTransform Output;  // 0x00C0, size 0x30
};
