// /Script/Icarus.CaveEntranceRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x200, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CaveEntranceRecorderComponent.h

UCLASS(Config=Engine)
class UCaveEntranceRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) FVoxelSaveData VoxelBlockerSaveData;  // 0x01C0, size 0x38
};
