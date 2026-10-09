// /Script/Icarus.InventoryModerator
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Inventory/InventoryModerator.h

UCLASS(Abstract)
class UInventoryModerator : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool IsSlotValidForItem(UInventoryComponent* Inventory, FInventoryIDEnum InventoryID, FItemData Item, int32 SlotIndex) const;  // parameters 0x20D
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool StripItemTags(UInventoryComponent* Inventory, FInventoryIDEnum InventoryID, FItemData Item, int32 SlotIndex, FGameplayTagContainer& ItemTags) const;  // parameters 0x231
};
