// /Script/Icarus.FLODTileRecordRecordInstanceDynamic
// size 0x40, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/FLODTileRecorderComponent.h

USTRUCT()
struct FFLODTileRecordRecordInstanceDynamic
{
    UPROPERTY(SaveGame) int32 InstanceIndex;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) FTransform Transform;  // 0x0010, size 0x30
};
