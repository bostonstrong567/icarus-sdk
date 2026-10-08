// /Script/Icarus.LandingPadRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/LandingPadRecorderComponent.h

UCLASS(Config=Engine)
class ULandingPadRecorderComponent : public UDeployableRecorderComponent
{
public:
    UPROPERTY(SaveGame) FLandingPadRecord LandingPadRecord;  // 0x0290, size 0x20
};
