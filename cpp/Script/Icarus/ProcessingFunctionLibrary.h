// /Script/Icarus.ProcessingFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Traits/Behaviours/Processing/ProcessingFunctionLibrary.h

UCLASS()
class UProcessingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static TArray<FItemData> CookItemsBasedOnChance(const TArray<FItemData>& Items, int32 ChancePercent, UObject* WorldContextObject);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<FProcessorRecipesRowHandle> GetAllRecipeRowsForSet(const FRecipeSetsRowHandle& RecipeSetRow);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static TArray<FProcessorRecipe> GetAllRecipesForSet(const FRecipeSetsRowHandle& RecipeSetRow);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static int32 GetPlayerFellingNaturalResourceChance(AIcarusPlayerCharacter* Player);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static int32 GetPlayerFellingRefinedWoodChance(AIcarusPlayerCharacter* Player);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static int32 GetPlayerFellingRefinedWoodConversion(AIcarusPlayerCharacter* Player);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static int32 GetPlayerFellingScorchChance(AIcarusPlayerCharacter* Player);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static int32 GetPlayerFellingScorchConversion(AIcarusPlayerCharacter* Player);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static int32 GetPlayerMiningSmeltChance(AIcarusPlayerCharacter* Player);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static int32 GetPlayerShatterSmeltChance(AIcarusPlayerCharacter* Player);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static int32 GetPlayerSkinningCookChance(AIcarusPlayerCharacter* Player);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static TArray<FItemData> SmeltItemsBasedOnChance(const TArray<FItemData>& ItemsIn, int32 ChancePercent, UObject* WorldContextObject);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void SmeltItemsBasedOnChanceSplit(const TArray<FItemData>& ItemsIn, int32 ChancePercent, TArray<FItemData>& ItemsOut, TArray<FItemData>& SmeltedItemsOut, UObject* WorldContextObject);  // parameters 0x40
};
