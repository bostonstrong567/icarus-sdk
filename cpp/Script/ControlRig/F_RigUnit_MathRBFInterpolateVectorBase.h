// /Script/ControlRig.RigUnit_MathRBFInterpolateVectorBase
// size 0xB0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h

USTRUCT()
struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
{
public:
    UPROPERTY() FVector Input;  // 0x0008, size 0xC
    UPROPERTY() ERBFVectorDistanceType DistanceFunction;  // 0x0014, size 0x1
    UPROPERTY() ERBFKernelType SmoothingFunction;  // 0x0015, size 0x1
    UPROPERTY() float SmoothingRadius;  // 0x0018, size 0x4
    UPROPERTY() bool bNormalizeOutput;  // 0x001C, size 0x1
    UPROPERTY(Transient) FRigUnit_MathRBFInterpolateVectorWorkData WorkData;  // 0x0020, size 0x90
};
