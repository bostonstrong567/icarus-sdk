// /Script/Icarus.InventorySlotChangeListener
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/UI/InventorySlotChangeListener.h

UCLASS(Abstract)
class UInventorySlotChangeListener : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) void HandleChangedSlots(UInventory* Inventory, const TSet<int32>& ChangedSlotIndices);  // parameters 0x58
};
