// /Script/Icarus.FLODTileRecordRecordInstance
// size 0x8, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/FLODTileRecorderComponent.h

USTRUCT()
struct FFLODTileRecordRecordInstance
{
    UPROPERTY(SaveGame) int32 InstanceIndex;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) int32 LevelIndex;  // 0x0004, size 0x4
};
