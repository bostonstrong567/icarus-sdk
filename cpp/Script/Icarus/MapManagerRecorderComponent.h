// /Script/Icarus.MapManagerRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x138, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/MapManagerRecorderComponent.h

UCLASS(Config=Engine)
class UMapManagerRecorderComponent : public UIcarusStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FMapManagerRecord Record;  // 0x00D8, size 0x60
};
