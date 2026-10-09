// /Script/Icarus.InventoryContainerComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Traits/InventoryContainerComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UInventoryContainerComponent : public UTraitComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnInventoryAvailable OnInventoryAvailable;  // 0x00D0, size 0x10
protected:
    UPROPERTY(Replicated, ReplicatedUsing) int32 InventoryInstanceId;  // 0x00E0, size 0x4
private:
    bool bWaitingForContainerLink;  // 0x00E4, not reflected
    bool bWaitingForContainerInventory;  // 0x00E5, not reflected
    bool bWaitingForContainerManager;  // 0x00E6, not reflected
public:
    UFUNCTION(BlueprintCallable) bool GetInventory(UInventory*& Inventory);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInventoryContainerData(FInventoryContainerData& OutData) const;  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasLinkedInventory_Fast() const;  // parameters 0x1
    UFUNCTION() void OnInventoryIdReplicated();
    UFUNCTION() void OnInventoryManagerUpdated();
};
