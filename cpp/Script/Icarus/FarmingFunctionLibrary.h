// /Script/Icarus.FarmingFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Traits/Behaviours/Farmable/FarmingFunctionLibrary.h

UCLASS()
class UFarmingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool GetGrowthStateData(FFarmingSeedsRowHandle Seed, EPlantGrowthStates GrowthState, FFarmingGrowthStatesRowHandle& GrowthStateRow);  // parameters 0x35
    UFUNCTION(BlueprintCallable) static bool GetSeedRewards(FFarmingSeedsRowHandle Seed, EPlantGrowthStates GrowthState, FItemRewardsRowHandle& ItemRewardRow);  // parameters 0x35
    UFUNCTION(BlueprintCallable) static bool GetSeedRow(FItemData Item, FFarmingSeedsRowHandle& SeedRow);  // parameters 0x209
    UFUNCTION(BlueprintCallable) static bool GetSeedRowFromTemplate(FItemTemplateRowHandle Template, FFarmingSeedsRowHandle& SeedRow);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static bool GetTotalGrowthTime(FFarmingSeedsRowHandle Seed, float& RemainingTime);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) static bool UpdateCropPlotModifiers(AIcarusPlayerCharacter* Player, FItemData Seed, AIcarusItem* Item);  // parameters 0x201
};
