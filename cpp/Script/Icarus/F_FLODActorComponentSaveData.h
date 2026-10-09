// /Script/Icarus.FLODActorComponentSaveData
// size 0x1C, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FFLODActorComponentSaveData
{
public:
    UPROPERTY(SaveGame) FName TileName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) int32 LevelIndex;  // 0x0008, size 0x4
    UPROPERTY(SaveGame) int32 RecordIndex;  // 0x000C, size 0x4
    UPROPERTY(SaveGame) int32 InstanceIndex;  // 0x0010, size 0x4
    UPROPERTY(SaveGame) bool bSpawnedFromPool;  // 0x0014, size 0x1
    UPROPERTY(SaveGame) bool bIsReservingInstance;  // 0x0015, size 0x1
    UPROPERTY(SaveGame) int32 CurrentFLODState;  // 0x0018, size 0x4
};
