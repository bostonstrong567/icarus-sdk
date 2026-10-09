// /Script/Icarus.LivingItemBlueprintFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Traits/Behaviours/LivingItem/LivingItemBlueprintFunctionLibrary.h

UCLASS()
class ULivingItemBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static bool GetEquippedItemUpgrades(const FItemData& Item, TArray<FLivingItemUpgradeData>& Upgrades);  // parameters 0x201
    UFUNCTION(BlueprintCallable) static bool GetLivingItemActiveChallengeSlotState(const FItemData& Item, FLivingItemSlotState& ActiveQuestSlot);  // parameters 0x269
    UFUNCTION(BlueprintCallable) static bool GetLivingItemSlotStates(const FItemData& Item, TArray<FLivingItemSlotState>& Slots);  // parameters 0x201
    UFUNCTION(BlueprintCallable) static bool IsLivingItemUpgradeEquipped(const FItemData& Item, FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x209
    UFUNCTION(BlueprintCallable) static bool SetLivingItemUpgrade(FItemData& Item, int32 Slot, FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x20D
    UFUNCTION(BlueprintCallable) static void UpdateLivingItemChallengeProgress(AIcarusPlayerCharacter* OwningCharacter, FItemData& Item, FChallengesRowHandle Challenge, int32 ProgressIncrease);  // parameters 0x214
};
