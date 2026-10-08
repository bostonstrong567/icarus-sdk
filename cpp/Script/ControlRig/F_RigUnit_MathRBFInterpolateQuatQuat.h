// /Script/ControlRig.RigUnit_MathRBFInterpolateQuatQuat
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
{
    UPROPERTY() TArray<FMathRBFInterpolateQuatQuat_Target> Targets;  // 0x00D0, size 0x10
    UPROPERTY() FQuat Output;  // 0x00E0, size 0x10
};
