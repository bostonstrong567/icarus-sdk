// /Script/Icarus.FLODRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/FLODRecorderComponent.h

UCLASS(Config=Engine)
class UFLODRecorderComponent : public UIcarusStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) FFLODRecorderRecord Record;  // 0x00D8, size 0x4
};
