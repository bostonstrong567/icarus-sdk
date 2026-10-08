// /Script/Icarus.FLODRecordInstanceIndices
// size 0x50, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordInstanceIndices
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSet<int32> InstanceIndices;  // 0x0000, size 0x50
};
