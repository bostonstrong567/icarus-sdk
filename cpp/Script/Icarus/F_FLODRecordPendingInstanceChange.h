// /Script/Icarus.FLODRecordPendingInstanceChange
// size 0xC, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordPendingInstanceChange
{
    UPROPERTY(EditAnywhere) int32 InstanceIndex;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 FromLevelIndex;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 ToLevelIndex;  // 0x0008, size 0x4
};
