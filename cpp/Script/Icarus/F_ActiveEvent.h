// /Script/Icarus.ActiveEvent
// size 0x10, declared in Icarus/Source/Icarus/AI/Coordinator/AICoordinatorSubsystem.h

USTRUCT()
struct FActiveEvent
{
public:
    UPROPERTY() AAIEvent* Event;  // 0x0000, size 0x8
    UPROPERTY() AActor* InstigatorActor;  // 0x0008, size 0x8
};
