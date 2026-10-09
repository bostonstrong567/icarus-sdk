// /Script/Icarus.FarmingPlotRecorderInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/FarmingPlotRecorderComponent.h

UCLASS(Abstract, MinimalAPI)
class UFarmingPlotRecorderInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) void GetFarmingPlotValues(bool& bIsSeededRecord, bool& bIsHarvestableRecord, int32& CurrentGrowthStageRecord, float& CurrentTimeRecord, FFarmingSeedsRowHandle& CurrentSeedRowRecord, float& NextStageTimeRecord, float& GrowthCompleteTimeRecord) const;  // parameters 0x2C
    UFUNCTION(BlueprintNativeEvent) void SetFarmingPlotValues(bool bIsSeededRecord, bool bIsHarvestableRecord, int32 CurrentGrowthStageRecord, float CurrentTimeRecord, FFarmingSeedsRowHandle CurrentSeedRowRecord, float NextStageTimeRecord, float GrowthCompleteTimeRecord);  // parameters 0x2C
};
