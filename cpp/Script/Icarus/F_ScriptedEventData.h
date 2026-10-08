// /Script/Icarus.ScriptedEventData
// size 0x58, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ScriptedEventsLibrary.generated.h

USTRUCT()
struct FScriptedEventData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AScriptedEvent> EventClass;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText EventName;  // 0x0040, size 0x18
};
