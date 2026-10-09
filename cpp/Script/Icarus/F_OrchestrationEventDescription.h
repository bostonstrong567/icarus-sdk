// /Script/Icarus.OrchestrationEventDescription
// size 0x80, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/OrchestrationEventsLibrary.generated.h

USTRUCT()
struct FOrchestrationEventDescription : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<FOrchestrationStateFlagsRowHandle> RequiredFlags;  // 0x0018, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOrchestrationStateFlagsRowHandle StateFlagToSetOnExecute;  // 0x0068, size 0x18
};
