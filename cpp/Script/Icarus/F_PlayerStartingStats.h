// /Script/Icarus.PlayerStartingStats
// size 0x80, declared in Icarus/Source/Icarus/Stats/PlayerStartStats.h

USTRUCT()
struct FPlayerStartingStats : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> StatsGranted;  // 0x0018, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSurvivalTriggersRowHandle SurvivalTriggers;  // 0x0068, size 0x18
};
