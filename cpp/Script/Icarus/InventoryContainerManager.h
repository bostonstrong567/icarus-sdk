// /Script/Icarus.InventoryContainerManager
// Derives from: AIcarusActor > AActor > UObject
// size 0x2F0, declared in Icarus/Source/Icarus/Inventory/ContainerManager/InventoryContainerManager.h

UCLASS(Config=Engine)
class AInventoryContainerManager : public AIcarusActor
{
public:
    UPROPERTY(Replicated, ReplicatedUsing) TArray<UInventory*> Inventories;  // 0x02C0, size 0x10
    UPROPERTY() int32 LastInventoryNum;  // 0x02D0, size 0x4
    FOnInventoriesUpdated OnInventoriesUpdated;  // 0x02D8, not reflected
private:
    FTimerHandle DelayedInventoryUpdateTimer;  // 0x02E8, not reflected
public:
    UFUNCTION(BlueprintCallable) int32 AddInventory();  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 DEBUG_ClearEmptyInventories();  // parameters 0x4
    UFUNCTION(BlueprintCallable) UInventory* GetInventory(int32 InventoryIndex);  // parameters 0x10
    UFUNCTION() void OnInventoriesReplicated();

    // Virtual functions that start here:
    //   CreateInventoryInIndex
};
