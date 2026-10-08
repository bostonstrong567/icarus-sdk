// /Script/Icarus.InventoryContainerData
// size 0x38, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FInventoryContainerData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryInfoRowHandle InventoryInfo;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AttachmentSlot;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanInventoryTick;  // 0x0034, size 0x1
};
