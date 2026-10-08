// /Script/Icarus.CargoLandingPadRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CargoLandingPadRecorderComponent.h

UCLASS(Config=Engine)
class UCargoLandingPadRecorderComponent : public UDeployableRecorderComponent
{
public:
    UPROPERTY(SaveGame) FCargoLandingPadRecord LandingPadRecord;  // 0x0290, size 0x8
};
