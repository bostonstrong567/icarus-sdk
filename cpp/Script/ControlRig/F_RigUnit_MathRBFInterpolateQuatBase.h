// /Script/ControlRig.RigUnit_MathRBFInterpolateQuatBase
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
{
    UPROPERTY() FQuat Input;  // 0x0010, size 0x10
    UPROPERTY() ERBFQuatDistanceType DistanceFunction;  // 0x0020, size 0x1
    UPROPERTY() ERBFKernelType SmoothingFunction;  // 0x0021, size 0x1
    UPROPERTY() float SmoothingAngle;  // 0x0024, size 0x4
    UPROPERTY() bool bNormalizeOutput;  // 0x0028, size 0x1
    UPROPERTY() FVector TwistAxis;  // 0x002C, size 0xC
    UPROPERTY(Transient) FRigUnit_MathRBFInterpolateQuatWorkData WorkData;  // 0x0040, size 0x90
};
