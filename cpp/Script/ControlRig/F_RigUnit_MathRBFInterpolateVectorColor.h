// /Script/ControlRig.RigUnit_MathRBFInterpolateVectorColor
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
    UPROPERTY() TArray<FMathRBFInterpolateVectorColor_Target> Targets;  // 0x00B0, size 0x10
    UPROPERTY() FLinearColor Output;  // 0x00C0, size 0x10
};
