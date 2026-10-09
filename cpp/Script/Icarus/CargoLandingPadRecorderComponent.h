// /Script/Icarus.CargoLandingPadRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CargoLandingPadRecorderComponent.h

UCLASS(Config=Engine)
class UCargoLandingPadRecorderComponent : public UDeployableRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(SaveGame) FCargoLandingPadRecord LandingPadRecord;  // 0x0290, size 0x8
};
