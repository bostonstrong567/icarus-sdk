// /Script/Icarus.InventoryInfo
// size 0xB0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryComponent.generated.h

USTRUCT()
struct FInventoryInfo : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum InventoryID;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle SlotTemplate;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingSlots;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInventorySlotOverride> SlotOverrides;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RemoveOnly;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsClientSideOnly;  // 0x0059, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> Stats;  // 0x0060, size 0x50
};
