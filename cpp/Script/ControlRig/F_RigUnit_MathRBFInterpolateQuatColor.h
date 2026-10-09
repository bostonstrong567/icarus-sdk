// /Script/ControlRig.RigUnit_MathRBFInterpolateQuatColor
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
    UPROPERTY() TArray<FMathRBFInterpolateQuatColor_Target> Targets;  // 0x00D0, size 0x10
    UPROPERTY() FLinearColor Output;  // 0x00E0, size 0x10
};
