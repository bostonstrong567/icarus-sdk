// /Script/Icarus.AIEventData
// size 0x50, declared in Icarus/Source/Icarus/IcarusGenerated/AIEvents/AIEventsTable.h

USTRUCT()
struct FAIEventData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AAIEvent> AIEventBehaviourClass;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSimultaneousEvents;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CooldownDuration;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CooldownRandomDeviation;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStartOnCooldown;  // 0x004C, size 0x1
};
