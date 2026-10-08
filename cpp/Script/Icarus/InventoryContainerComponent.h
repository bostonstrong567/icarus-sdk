// /Script/Icarus.InventoryContainerComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Traits/InventoryContainerComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UInventoryContainerComponent : public UTraitComponent
{
public:
    UPROPERTY(BlueprintAssignable) FOnInventoryAvailable OnInventoryAvailable;  // 0x00D0, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing) int32 InventoryInstanceId;  // 0x00E0, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    bool bWaitingForContainerLink;  // 0x00E4, private
    bool bWaitingForContainerInventory;  // 0x00E5, private
    bool bWaitingForContainerManager;  // 0x00E6, private

    UFUNCTION(BlueprintCallable) bool GetInventory(UInventory*& Inventory);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInventoryContainerData(FInventoryContainerData& OutData) const;  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasLinkedInventory_Fast() const;  // parameters 0x1
    UFUNCTION() void OnInventoryIdReplicated();
    UFUNCTION() void OnInventoryManagerUpdated();
};
