// /Script/Icarus.VoxelRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x200, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/VoxelRecorderComponent.h

UCLASS(Config=Engine)
class UVoxelRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) FVoxelSaveData VoxelSaveData;  // 0x01C0, size 0x38
};
