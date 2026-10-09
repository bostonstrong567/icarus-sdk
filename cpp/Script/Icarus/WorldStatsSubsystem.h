// /Script/Icarus.WorldStatsSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x98, declared in Icarus/Source/Icarus/Subsystems/World/WorldStatsSubsystem.h

UCLASS()
class UWorldStatsSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FWorldStatsUpdatedSignature WorldStatsUpdated;  // 0x0030, size 0x10
protected:
    FStatList ProspectStats;  // 0x0040, not reflected
    FStatList GreatHuntStats;  // 0x0050, not reflected
    FStatList CustomStats;  // 0x0060, not reflected
    FStatList DynamicMissionStats;  // 0x0070, not reflected
    FStatList WorldStats;  // 0x0080, not reflected
    FStatSource DefaultWorldStatsSource;  // 0x0090, not reflected
public:
    UFUNCTION() void AddProspectStats(const FProspectListRowHandle& ProspectRowHandle, EMissionDifficulty Difficulty);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetWorldStat(FStatsRowHandle Stat) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) TMap<FStatsRowHandle, int32> GetWorldStats() const;  // parameters 0x50
    UFUNCTION() void RebuildWorldStats();
    UFUNCTION() void UpdateDynamicMissionStats(const FProspectListRowHandle& MissionRow, EMissionDifficulty Difficulty);  // parameters 0x19
    UFUNCTION() void UpdateGreatHuntStats(FStatList NewGreatHuntStats);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateProspectStats(const FProspectListRowHandle& ProspectRowHandle, EMissionDifficulty Difficulty);  // parameters 0x19
};
