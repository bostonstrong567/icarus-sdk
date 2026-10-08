// /Script/ControlRig.RigUnit_MathRBFInterpolateQuatXform
// size 0x110, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
{
    UPROPERTY() TArray<FMathRBFInterpolateQuatXform_Target> Targets;  // 0x00D0, size 0x10
    UPROPERTY() FTransform Output;  // 0x00E0, size 0x30
};
