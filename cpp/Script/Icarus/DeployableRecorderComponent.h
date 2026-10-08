// /Script/Icarus.DeployableRecorderComponent
// Derives from: UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x290, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/DeployableRecorderComponent.h

UCLASS(Config=Engine)
class UDeployableRecorderComponent : public UItemStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FDeployableRecord DeployableRecord;  // 0x0250, size 0x20
    UPROPERTY(SaveGame) FTameInteractableRecord TameInteractableRecord;  // 0x0270, size 0x20
};
