// /Script/ControlRig.CRSimLinearSpring
// size 0x10, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Math/Simulation/CRSimLinearSpring.h

USTRUCT()
struct FCRSimLinearSpring
{
public:
    UPROPERTY() int32 SubjectA;  // 0x0000, size 0x4
    UPROPERTY() int32 SubjectB;  // 0x0004, size 0x4
    UPROPERTY() float Coefficient;  // 0x0008, size 0x4
    UPROPERTY() float Equilibrium;  // 0x000C, size 0x4
};
