// /Script/Icarus.GroupedInstancedMapData
// size 0x30, declared in Icarus/Source/Icarus/IcarusGenerated/GroupedInstancedMapData/GroupedInstancedMapDataRowHandle.h

USTRUCT()
struct FGroupedInstancedMapData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInstancedMapDataRowHandle> InstancedMaps;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInstancedLevelPickType PickType;  // 0x0028, size 0x1
};
