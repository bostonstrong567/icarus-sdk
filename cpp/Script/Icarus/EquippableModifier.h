// /Script/Icarus.EquippableModifier
// Derives from: UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Traits/Behaviours/Equippable/EquippableModifier.h

UCLASS(Config=Engine)
class UEquippableModifier : public UActorComponent
{
public:
    UPROPERTY(Instanced, BlueprintReadOnly) UInventory* Inventory;  // 0x00B0, size 0x8
    UPROPERTY(BlueprintReadOnly) int32 InventorySlot;  // 0x00B8, size 0x4
    UPROPERTY(BlueprintReadOnly) FEquippableRowHandle EquippableRow;  // 0x00BC, size 0x18
    UPROPERTY(BlueprintReadOnly) int32 CachedUID;  // 0x00D4, size 0x4
    UPROPERTY() bool SelfDestruct;  // 0x00D8, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    bool bWantsToReinitialise;  // 0x00D9, private
    float StackedModifierMultiplier;  // 0x00DC, private

    UFUNCTION() void ArmourSlotUpdated(UInventory* SourceInventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintNativeEvent) bool CheckTickConditions();  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void EquippedTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) void GetEquippableStatsToAdd(TMap<FStatsEnum, int32>& Stats);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetStackedModifierMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) bool ItemEquipped();  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool ItemUnequipped();  // parameters 0x1
    UFUNCTION() void OnItemRemoved(UInventory* RemovedInventory, int32 RemovedSlot);  // parameters 0xC

    // Virtual functions that start here:
    //   CheckTickConditions_Implementation, EquippedTick_Implementation
    //   GetEquippableStatsToAdd_Implementation, ItemEquipped_Implementation, ItemUnequipped_Implementation
};
