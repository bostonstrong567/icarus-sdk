// /Script/Icarus.DrillRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/DrillRecorderComponent.h

UCLASS(Config=Engine)
class UDrillRecorderComponent : public UDeployableRecorderComponent
{
public:
    UPROPERTY(SaveGame) FDrillSaveData DrillSaveData;  // 0x0290, size 0x2
};
