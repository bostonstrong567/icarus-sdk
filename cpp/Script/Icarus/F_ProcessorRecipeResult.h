// /Script/Icarus.ProcessorRecipeResult
// size 0x28, declared in Icarus/Source/Icarus/Inventory/InventoryItemLibrary.h

USTRUCT()
struct FProcessorRecipeResult
{
    UPROPERTY(BlueprintReadWrite) FProcessorRecipesRowHandle Recipe;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadWrite) TArray<FTagQueriesRowHandle> SuccessfulQueries;  // 0x0018, size 0x10
};
