// /Script/Icarus.DurableData
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FDurableData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Max_Durability;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Destroyed_At_Zero;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRepairData> ItemsForRepair;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRecipeSetsRowHandle> NoRecipe_RequiredRecipeSet;  // 0x0030, size 0x10
};
