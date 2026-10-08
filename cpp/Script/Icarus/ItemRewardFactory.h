// /Script/Icarus.ItemRewardFactory
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/DataStructs/ItemReward.h

UCLASS()
class UItemRewardFactory : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static TArray<FItemData> GenerateHarvestedItemRewards(const TArray<FItemRewardEntry>& ItemRewards, float ResourceRewardModifier, float SeedRewardMultiplier, UIcarusStatContainer* HarvestingActorStats, UIcarusStatContainer* CropPlotActorStats, UObject* WorldContextObject);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemData GenerateItemData(const FItemReward& ItemReward, UObject* WorldContextObject);  // parameters 0x220
    UFUNCTION(BlueprintCallable) static FItemData GenerateItemFromReward(const FItemRewardEntry& ItemReward, UObject* WorldContextObject);  // parameters 0x280
    UFUNCTION(BlueprintCallable) static FItemData GenerateItemFromRewardWithPlayerStats(const FItemRewardEntry& ItemReward, AIcarusPlayerCharacter* Character, UObject* WorldContextObject);  // parameters 0x288
};
