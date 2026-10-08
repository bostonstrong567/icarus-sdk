// /Script/Icarus.CraftingFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Crafting/CraftingFunctionLibrary.h

UCLASS()
class UCraftingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static TArray<FCraftingInput> CreateRecipeInputItemData(const FProcessorRecipesRowHandle& Input, AActor* CraftingActor, AActor* ProcessingActor);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static TArray<FQueryInput> CreateRecipeInputQueryData(const FProcessorRecipesRowHandle& Input, AActor* CraftingActor, AActor* ProcessingActor);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static TArray<FResourceItem> CreateRecipeInputResourceData(const FProcessorRecipesRowHandle& Input, AActor* CraftingActor, AActor* ProcessingActor);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static TArray<FItemData> CreateRecipeOutputItemData(const FProcessorRecipesRowHandle& Input, AActor* CraftingActor);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<FResourceItem> CreateRecipeOutputResourceData(const FProcessorRecipesRowHandle& Input, AActor* CraftingActor);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static int32 GetNumberOfProcessorRecipesRequiringTalent(const FTalentsRowHandle& Talent, int32 OptionalStartIndex, int32 OptionalStopIndex);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static int32 GetScaledRecipeInputCount(const FProcessorRecipesRowHandle& Recipe, int32 BaseCount, AActor* CraftingActor, AActor* ProcessingActor);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static int32 GetScaledRecipeResourceItemCount(const FProcessorRecipesRowHandle& Recipe, const FResourceItem& Resource, AActor* CraftingActor, AActor* ProcessingActor);  // parameters 0x44
    UFUNCTION(BlueprintCallable) static float GetStatBasedResourceCostMultiplier(const FProcessorRecipesRowHandle& Recipe, AActor* CraftingActor, AActor* ProcessingActor);  // parameters 0x2C
};
