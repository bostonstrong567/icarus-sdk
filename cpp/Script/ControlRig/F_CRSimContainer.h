// /Script/ControlRig.CRSimContainer
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Math/Simulation/CRSimContainer.h

USTRUCT()
struct FCRSimContainer
{
public:
    UPROPERTY() float TimeStep;  // 0x0008, size 0x4
    UPROPERTY() float AccumulatedTime;  // 0x000C, size 0x4
    UPROPERTY() float TimeLeftForStep;  // 0x0010, size 0x4
};
