// /Script/Icarus.FLODTileRecorderRecord
// size 0x60, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/FLODTileRecorderComponent.h

USTRUCT()
struct FFLODTileRecorderRecord
{
    UPROPERTY(SaveGame) FName TileName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) FTransform Transform;  // 0x0010, size 0x30
    UPROPERTY(SaveGame) float RelevancyRadius;  // 0x0040, size 0x4
    UPROPERTY(SaveGame) TArray<FFLODTileRecordRecord> Records;  // 0x0048, size 0x10
};
