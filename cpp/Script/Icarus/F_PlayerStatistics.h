// /Script/Icarus.PlayerStatistics
// size 0x50, declared in Icarus/Source/Icarus/Subsystems/World/StatisticTrackerSubsystem.h

USTRUCT()
struct FPlayerStatistics
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<FStatisticsRowHandle, int32> StatisticsMap;  // 0x0000, size 0x50
};
