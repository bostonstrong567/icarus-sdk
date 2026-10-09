// /Script/ControlRig.CRSimPointForce
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Math/Simulation/CRSimPointForce.h

USTRUCT()
struct FCRSimPointForce
{
public:
    UPROPERTY() ECRSimPointForceType ForceType;  // 0x0000, size 0x1
    UPROPERTY() FVector Vector;  // 0x0004, size 0xC
    UPROPERTY() float Coefficient;  // 0x0010, size 0x4
    UPROPERTY() bool bNormalize;  // 0x0014, size 0x1
};
