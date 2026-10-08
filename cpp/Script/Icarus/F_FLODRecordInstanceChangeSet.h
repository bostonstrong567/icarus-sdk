// /Script/Icarus.FLODRecordInstanceChangeSet
// size 0x30, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordInstanceChangeSet
{
    UPROPERTY(EditAnywhere) TArray<int32> ConcealIndices;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) TArray<int32> RevealIndices;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) TArray<FFLODRecordInstanceChange> InstanceChanges;  // 0x0020, size 0x10
};
