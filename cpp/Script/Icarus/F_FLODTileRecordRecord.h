// /Script/Icarus.FLODTileRecordRecord
// size 0x40, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/FLODTileRecorderComponent.h

USTRUCT()
struct FFLODTileRecordRecord
{
    UPROPERTY(SaveGame) int32 RecordIndex;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) FName RecorderName;  // 0x0004, size 0x8
    UPROPERTY(SaveGame) TArray<FFLODTileRecordRecordInstance> Instances;  // 0x0010, size 0x10
    UPROPERTY(SaveGame) TArray<FFLODTileRecordRecordInstanceDynamic> DynamicInstances;  // 0x0020, size 0x10
    UPROPERTY(SaveGame) TArray<int32> DestroyedInstanceIndices;  // 0x0030, size 0x10
};
