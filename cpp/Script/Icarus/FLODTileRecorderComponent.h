// /Script/Icarus.FLODTileRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x140, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/FLODTileRecorderComponent.h

UCLASS(Config=Engine)
class UFLODTileRecorderComponent : public UIcarusStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FFLODTileRecorderRecord Record;  // 0x00E0, size 0x60
};
