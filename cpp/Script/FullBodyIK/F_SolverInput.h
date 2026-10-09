// /Script/FullBodyIK.SolverInput
// size 0x24, declared in Engine/Plugins/Experimental/FullBodyIK/Source/FullBodyIK/Private/RigUnit_FullbodyIK.h

USTRUCT()
struct FSolverInput
{
public:
    UPROPERTY() float LinearMotionStrength;  // 0x0000, size 0x4
    UPROPERTY() float MinLinearMotionStrength;  // 0x0004, size 0x4
    UPROPERTY() float AngularMotionStrength;  // 0x0008, size 0x4
    UPROPERTY() float MinAngularMotionStrength;  // 0x000C, size 0x4
    UPROPERTY() float DefaultTargetClamp;  // 0x0010, size 0x4
    UPROPERTY() float Precision;  // 0x0014, size 0x4
    UPROPERTY() float Damping;  // 0x0018, size 0x4
    UPROPERTY() int32 MaxIterations;  // 0x001C, size 0x4
    UPROPERTY() bool bUseJacobianTranspose;  // 0x0020, size 0x1
};
