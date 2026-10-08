// /Script/Icarus.InventoryComponent
// Derives from: UTraitBehaviours > UTraitComponent > UActorComponent > UObject
// size 0x198, declared in Icarus/Source/Icarus/Traits/InventoryComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UInventoryComponent : public UTraitBehaviours
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<FInventoryIDEnum, UInventory*> Inventories;  // 0x00E8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FInventoryIDEnum, FManuallyAddedInventoryItems> ManuallyAddedItems;  // 0x0138, size 0x50
    UPROPERTY(BlueprintAssignable) FInventoryItemAdded OnInventoryItemAdded;  // 0x0188, size 0x1
    UPROPERTY(BlueprintAssignable) FInventoryItemRemoved OnInventoryItemRemoved;  // 0x0189, size 0x1
    UPROPERTY(BlueprintAssignable) FInventoryItemRemovedVerbose OnInventoryItemRemovedVerbose;  // 0x018A, size 0x1
    UPROPERTY(BlueprintAssignable) FInventoryItemChanged OnInventoryItemChanged;  // 0x018B, size 0x1
    UPROPERTY(BlueprintAssignable) FBounceItem OnBounceItem;  // 0x018C, size 0x1
    UPROPERTY() bool bRequiresUpdate;  // 0x018D, size 0x1
    UPROPERTY() bool bRequiresRadiationUpdate;  // 0x018E, size 0x1
    UPROPERTY() float EmitterItemCount;  // 0x0190, size 0x4
    UPROPERTY(BlueprintAssignable) FInventoryWeightUpdated OnWeightUpdated;  // 0x0194, size 0x1

    UFUNCTION(BlueprintCallable) void CheckInventorySlotStats();
    UFUNCTION() void DoInventoryUpdate();
    UFUNCTION() void DoRadiationUpdate();
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FFindItemSlotInfo> FindAllItems(FItemsStaticRowHandle ItemsStaticRowHandle, TArray<FStatsEnum> RequiredStats) const;  // parameters 0x38
    UFUNCTION(BlueprintCallable) TArray<FFindItemSlotInfo> FindContainers(FIcarusResourcesEnum ResourceType);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FFindItemSlotInfo> FindItems(FItemsStaticRowHandle ItemsStaticRowHandle, int32 Count) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindItemsTotal(FItemsStaticRowHandle ItemsStaticRowHandle, TArray<FStatsEnum> RequiredStats) const;  // parameters 0x2C
    UFUNCTION(BlueprintCallable) TArray<FFindItemSlotInfo> FindItemsWithGameplayTagQuery(FGameplayTagQuery Query);  // parameters 0x58
    UFUNCTION(BlueprintCallable) TArray<FFindItemSlotInfo> FindItemsWithTag(FTagQueriesRowHandle Query);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) UInventory* GetInventory(FInventoryIDEnum InventoryID) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInventoryData(FInventoryData& OutData) const;  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FInventoryIDEnum> GetInventoryIds() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInventoryInfoData(FInventoryInfoRowHandle InventoryInfoRowHandle, FInventoryInfo& OutData) const;  // parameters 0xC9
    UFUNCTION(BlueprintCallable) int32 GetTotalWeight();  // parameters 0x4
    UFUNCTION() void ItemAddedDelagate(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION() void ItemChangedDelegate(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION() void ItemRemovedDelagate(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION() void ItemRemovedVerboseDelagate(UInventory* Inventory, int32 Slot, const FItemData& ItemData);  // parameters 0x200
    UFUNCTION() void StatsUpdated();
    UFUNCTION(BlueprintCallable) bool TransferInventories(UInventoryComponent* Other);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void UpdateInventorySlotCount(UInventory* inventory, int32 DesiredSlotCount);  // parameters 0xC
    UFUNCTION() void WeightUpdatedDelagate(int32 NewWeight);  // parameters 0x4
};
