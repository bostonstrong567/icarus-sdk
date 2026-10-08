// /Script/Icarus.CaveEntranceRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x200, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CaveEntranceRecorderComponent.h

UCLASS(Config=Engine)
class UCaveEntranceRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FVoxelSaveData VoxelBlockerSaveData;  // 0x01C0, size 0x38
};
