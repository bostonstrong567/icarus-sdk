// /Script/ControlRig.RigUnit_MathRBFInterpolateVectorVector
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
{
    UPROPERTY() TArray<FMathRBFInterpolateVectorVector_Target> Targets;  // 0x00B0, size 0x10
    UPROPERTY() FVector Output;  // 0x00C0, size 0xC
};
