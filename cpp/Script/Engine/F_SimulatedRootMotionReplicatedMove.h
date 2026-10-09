// /Script/Engine.SimulatedRootMotionReplicatedMove
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/Character.h

USTRUCT()
struct FSimulatedRootMotionReplicatedMove
{
public:
    UPROPERTY() float Time;  // 0x0000, size 0x4
    UPROPERTY() FRepRootMotionMontage RootMotion;  // 0x0008, size 0x98
};
