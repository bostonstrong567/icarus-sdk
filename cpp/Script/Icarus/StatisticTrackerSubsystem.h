// /Script/Icarus.StatisticTrackerSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x80, declared in Icarus/Source/Icarus/Subsystems/World/StatisticTrackerSubsystem.h

UCLASS()
class UStatisticTrackerSubsystem : public UWorldSubsystem
{
private:
    TMap<FString,FPlayerStatistics,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlayerStatistics,0> > ProspectStatistics;  // 0x0030, not reflected
public:
    UFUNCTION(BlueprintCallable) bool ClearTrackedStatisticsForPlayer(FString PlayerID);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) FPlayerStatistics GetTrackedStatisticsForPlayer(FString PlayerID) const;  // parameters 0x60
    UFUNCTION(BlueprintCallable) bool IncrementStatistic(FString PlayerID, FStatisticsRowHandle StatisticRow);  // parameters 0x29
    UFUNCTION() void OnPlayerDeath(FString PlayerID);  // parameters 0x10
    UFUNCTION() void OnPlayerRevived(FString PlayerID);  // parameters 0x10
    UFUNCTION() void OnPlayerRevivedOtherPlayer(FString PlayerID);  // parameters 0x10
    UFUNCTION() void OnTreeChopped(FString PlayerID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool SetStatisticValue(FString PlayerID, FStatisticsRowHandle StatisticRow, int32 Value);  // parameters 0x2D
};
