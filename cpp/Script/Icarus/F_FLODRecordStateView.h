// /Script/Icarus.FLODRecordStateView
// size 0xC0, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordStateView : public FFLODRecordInstanceIndices
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFLODRecordInstance> Instances;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFLODRecordInstanceIndices> LevelStateViews;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSet<int32> DestroyedIndices;  // 0x0070, size 0x50
};
