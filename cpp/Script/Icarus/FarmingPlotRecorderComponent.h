// /Script/Icarus.FarmingPlotRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/FarmingPlotRecorderComponent.h

UCLASS(Config=Engine)
class UFarmingPlotRecorderComponent : public UDeployableRecorderComponent
{
public:
    UPROPERTY(SaveGame) bool bIsSeeded;  // 0x0290, size 0x1
    UPROPERTY(SaveGame) bool bIsHarvestable;  // 0x0291, size 0x1
    UPROPERTY(SaveGame) int32 CurrentGrowthStage;  // 0x0294, size 0x4
    UPROPERTY(SaveGame) float CurrentTime;  // 0x0298, size 0x4
    UPROPERTY(SaveGame) FName CurrentSeedRow;  // 0x029C, size 0x8
    UPROPERTY(SaveGame) float NextStageTime;  // 0x02A4, size 0x4
    UPROPERTY(SaveGame) float GrowthCompleteTime;  // 0x02A8, size 0x4
};
