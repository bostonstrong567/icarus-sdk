// /Script/ControlRig.CRSimPoint
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Math/Simulation/CRSimPoint.h

USTRUCT()
struct FCRSimPoint
{
public:
    UPROPERTY() float Mass;  // 0x0000, size 0x4
    UPROPERTY() float Size;  // 0x0004, size 0x4
    UPROPERTY() float LinearDamping;  // 0x0008, size 0x4
    UPROPERTY() float InheritMotion;  // 0x000C, size 0x4
    UPROPERTY() FVector Position;  // 0x0010, size 0xC
    UPROPERTY() FVector LinearVelocity;  // 0x001C, size 0xC
};
