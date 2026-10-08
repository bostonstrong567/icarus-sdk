// /Script/Icarus.FLODRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/FLODRecorderComponent.h

UCLASS(Config=Engine)
class UFLODRecorderComponent : public UIcarusStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FFLODRecorderRecord Record;  // 0x00D8, size 0x4
};
