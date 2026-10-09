// /Script/Icarus.FLODTileRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x140, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/FLODTileRecorderComponent.h

UCLASS(Config=Engine)
class UFLODTileRecorderComponent : public UIcarusStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) FFLODTileRecorderRecord Record;  // 0x00E0, size 0x60
};
