// /Script/Icarus.GOAPMotivationTrigger
// size 0x68, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusGOAPMotivation.generated.h

USTRUCT()
struct FGOAPMotivationTrigger
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TriggerThreshold;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPState ThresholdOutcome;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> ThresholdStats;  // 0x0018, size 0x50
};
