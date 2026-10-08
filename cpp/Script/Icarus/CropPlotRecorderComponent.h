// /Script/Icarus.CropPlotRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CropPlotRecorderComponent.h

UCLASS(Config=Engine)
class UCropPlotRecorderComponent : public UDeployableRecorderComponent
{
public:
    UPROPERTY(SaveGame) TArray<FCultivationSaveData> CultivationSaveData;  // 0x0290, size 0x10
};
