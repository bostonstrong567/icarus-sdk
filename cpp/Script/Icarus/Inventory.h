// /Script/Icarus.Inventory
// Derives from: UTraitBehaviour > UActorComponent > UObject
// size 0x3C0, declared in Icarus/Source/Icarus/Traits/Inventory.h

UCLASS(Transient, Config=Engine)
class UInventory : public UTraitBehaviour
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnInventoryItemChanged OnInventoryItemChanged;  // 0x00C8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnAllInventoryItemsChanged OnAllInventoryItemsChanged;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 CurrentWeight;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FInventorySlotsFastArray Slots;  // 0x00F0, size 0x158
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform OverflowSpawnTransform;  // 0x0250, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOverflowSpawnCanStack;  // 0x0280, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> InitialItems;  // 0x0288, size 0x10
    UPROPERTY(BlueprintAssignable) FItemAdded OnItemAdded;  // 0x0298, size 0x1
    UPROPERTY(BlueprintAssignable) FItemRemoved OnItemRemoved;  // 0x0299, size 0x1
    UPROPERTY(BlueprintAssignable) FItemRemovedVerbose OnItemRemovedVerbose;  // 0x029A, size 0x1
    UPROPERTY(BlueprintAssignable) FItemsUpdated Client_OnItemsUpdated;  // 0x029B, size 0x1
    UPROPERTY(BlueprintAssignable) FWeightUpdated OnWeightUpdated;  // 0x029C, size 0x1
    UPROPERTY(BlueprintAssignable) FSlotCountChange SlotCountChange;  // 0x029D, size 0x1
    UPROPERTY(BlueprintAssignable) FSlotsUpdated SlotsUpdated;  // 0x029E, size 0x1
    UPROPERTY(BlueprintAssignable) FDroppingOverflowItem OnDroppingOverflowItem;  // 0x029F, size 0x1
    UPROPERTY(BlueprintAssignable) FItemBroke OnItemBroke;  // 0x02A0, size 0x1
    UPROPERTY() TMap<FEquippableRowHandle, FEquippableModifierList> CurrentlyEquippedModifiers;  // 0x02A8, size 0x50
    UPROPERTY(BlueprintAssignable) FReplicatedStackMultipliersUpdatedSignature OnReplicatedStackMultipliersUpdated;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<float> ReplicatedModifierStackMultipliers;  // 0x0308, size 0x10
    TMap<FItemsStaticRowHandle,TArray<FInventoryBag,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FItemsStaticRowHandle,TArray<FInventoryBag,TSizedDefaultAllocator<32> >,0> > BagCache;  // 0x0350, not reflected
protected:
    UPROPERTY(Replicated) FInventoryInfoRowHandle InventoryInfoRowHandle;  // 0x0318, size 0x18
private:
    FTimerHandle RetryRegisterWithHUDTimer;  // 0x00C0, not reflected
    bool TriggerWeightUpdate;  // 0x0330, not reflected
    bool RemoveBypass;  // 0x0331, not reflected
    bool bIgnoreQuery;  // 0x0332, not reflected
    float CurrentSpoilTime;  // 0x0334, not reflected
    UPROPERTY(Replicated) float SpoilTickRate;  // 0x0338, size 0x4
    float CurrentLeakTime;  // 0x033C, not reflected
    float MaxLeakTime;  // 0x0340, not reflected
    int32 AdditionalSlotableSlots;  // 0x0344, not reflected
    int32 CachedSlotCount;  // 0x0348, not reflected
    bool bShouldInvalidateStatContainerOnUpdate;  // 0x034C, not reflected
    UPROPERTY(Replicated, Instanced) TWeakObjectPtr<UInventory> ParentInventory;  // 0x03A0, size 0x8
    TArray<int,TSizedDefaultAllocator<32> > PendingBagSlots;  // 0x03A8, not reflected
    bool bRegisteredForContainerManagerUpdate;  // 0x03B8, not reflected
public:
    UFUNCTION() void AddEquippableModifier(UEquippableModifier* Modifier);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddSlots(int32 SlotsToAdd, FTagQueriesRowHandle QueryOverride);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) bool ApplyAlteration(int32 Location, FAlterationsRowHandle AlterationsRow);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) int32 AttemptPartialStackPlacement(FItemData Item, int32 Count);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) bool AutomaticallyPlaceItem(FItemData Item, int32& PlacedLocation, bool DropItemAtOverFlow, bool AllowStacking);  // parameters 0x1F7
    UFUNCTION() bool CanAdd(FItemData Item, int32 Location) const;  // parameters 0x1F5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanInventorySpoil() const;  // parameters 0x1
    UFUNCTION() bool CanPlace(FItemData Item, int32 Location, bool AllowStacking, int32 Amount) const;  // parameters 0x1FD
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanPlaceItems(TArray<FItemData> Items, bool AllowStacking) const;  // parameters 0x12
    UFUNCTION() bool CanStack(FItemData Item, int32 Location, int32 Amount) const;  // parameters 0x1F9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanTransferInventory(UInventory* Other) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckAutoPlacement(FItemData Item) const;  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) static bool CheckFillableItem(const TArray<FIcarusResourcesEnum>& FillableTypes, bool bResourceStorage, const FItemData& ItemData);  // parameters 0x209
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckPlacement(FItemData Item, int32 Location, bool AllowStacking, int32 Amount) const;  // parameters 0x1FD
    UFUNCTION() bool CheckSlotValidity(FItemData Item, int32 Location) const;  // parameters 0x1F5
    UFUNCTION(BlueprintCallable) void ClearLastItemInfo(int32 Location);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool ConsumeFillableResource(int32 Location, FIcarusResourcesEnum Type, int32 Units);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) bool ConsumeItem(int32 Location, int32 Amount, bool ClearItemSave);  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesInventorySupportEquippable(int32 SlotIndex) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable) void Empty();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 Find(FItemData ItemToFind, int32 Amount) const;  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) TArray<FFindAllStacksResult> FindAllUniqueStacks(FItemsStaticRowHandle ItemStaticRow);  // parameters 0x28
    UFUNCTION(BlueprintCallable) int32 FindContainerToFill(FIcarusResourcesEnum Type);  // parameters 0x14
    UFUNCTION(BlueprintCallable) TArray<FFindItemSlotInfo> FindContainers(FIcarusResourcesEnum ResourceType);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindEmptyLocation(FItemData Item) const;  // parameters 0x1F4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindFirstItem(FGameplayTagQuery Query) const;  // parameters 0x4C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindItemByQuery(FTagQueriesRowHandle ItemQuery, int32 Amount) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindItemByType(FItemsStaticRowHandle ItemToFind, int32 Amount) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindItemCountByQuery(FTagQueriesRowHandle ItemQuery) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindItemCountByType(FItemsStaticRowHandle ItemToFind, bool bIncludeBags) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindItemCountWithMatchingData(const FItemData& ItemData, bool bIncludeBags) const;  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindItemWithMatchingData(FItemData ItemToFind, int32 Amount) const;  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) TArray<FFindItemSlotInfo> FindItemsByQuery(FTagQueriesRowHandle ItemQuery, int32 RequiredAmount);  // parameters 0x30
    UFUNCTION(BlueprintCallable) TArray<FFindItemSlotInfo> FindItemsByType(FItemsStaticRowHandle ItemStaticRow, int32 RequiredAmount);  // parameters 0x30
    UFUNCTION(BlueprintCallable) TArray<FFindItemSlotInfo> FindItemsWithGamplayTagQuery(FGameplayTagQuery Query);  // parameters 0x58
    UFUNCTION(BlueprintCallable) TArray<FFindItemSlotInfo> FindItemsWithTag(FTagQueriesRowHandle Query);  // parameters 0x28
    UFUNCTION() int32 FindStackableLocation(FItemData Item) const;  // parameters 0x1F4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindStatic(FItemsStaticRowHandle ItemToFind, int32 Amount) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 FindStaticQuery(FTagQueriesRowHandle ItemQuery, int32 Amount) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) bool FindValidItemPlacementLocation(FItemData Item, int32& ValidLocation, bool AllowStacking) const;  // parameters 0x1F6
    UFUNCTION(BlueprintCallable) void ForceAddItems(const TArray<FItemData>& Items, TArray<FItemData>& RemainingItems);  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<FItemData> GetAllItems();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEquippableModifiers(TArray<UEquippableModifier*>& EquippedModifiers) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<FFindItemSlotInfoInvType> GetFillableItems(const TArray<FIcarusResourcesEnum>& FillableTypes, bool bResourceStorage, int32 SkipSlot);  // parameters 0x28
    UFUNCTION(BlueprintCallable) int32 GetFillableResourceCount(FIcarusResourcesEnum Type);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInventoryData(FInventoryInfo& OutData) const;  // parameters 0xB1
    UFUNCTION(BlueprintCallable, BlueprintPure) FInventoryIDEnum GetInventoryID() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInventorySpoilTickAccumulator() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInventorySpoilTickRate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FItemData GetItem(int32 Location) const;  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetItemCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) FItemData GetItemRef(int32 Location, bool& bIsValid);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetItemWeightWithContents(int32 SlotIndex) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) TArray<FFindItemSlotInfo> GetItems(FGameplayTagQuery Query);  // parameters 0x58
    UFUNCTION(BlueprintCallable) int32 HasFillableResource(FIcarusResourcesEnum Type, int32 AmountRequired);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasItems() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasValidItemInSlot(int32 Location) const;  // parameters 0x5
    UFUNCTION() void InitialiseDefaultStats();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsClientSideOnlyInventory() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsRemoveOnly() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool ManuallyForcePlaceItem(FItemData Item, int32 Location, bool AllowStacking);  // parameters 0x1F6
    UFUNCTION(BlueprintCallable) bool ManuallyPlaceItem(FItemData Item, int32 Location, bool AllowStacking);  // parameters 0x1F6
    UFUNCTION(BlueprintCallable) void MarkSlotAsDirty(int32 Location);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MarkSlotIndexDirty(int32 SlotIndex, bool bSkipUpdates);  // parameters 0x5
    UFUNCTION() void OnContainerManagerUpdated();
    UFUNCTION() void OnOwnedInventoryAllSlotsChanged();
    UFUNCTION() void OnOwnedInventorySlotAdded(const FInventorySlot& Slot, int32 Index);  // parameters 0x244
    UFUNCTION() void OnOwnedInventorySlotChanged(const FInventorySlot& Slot, int32 Index);  // parameters 0x244
    UFUNCTION() void OnOwnedInventorySlotRemoved(const FInventorySlot& Slot, int32 Index);  // parameters 0x244
    UFUNCTION() void OnRep_ReplicatedModifierStackMultipliers();
    UFUNCTION() void OnRep_Slots();
    UFUNCTION() void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void OverrideQuery(int32 Index, FTagQueriesRowHandle& Query);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) TArray<FItemData> RemoveAllItems();  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool RemoveAlteration(int32 Location, FAlterationsRowHandle AlterationsRow);  // parameters 0x1D
    UFUNCTION() void RemoveEquippableModifier(UEquippableModifier* Modifier);  // parameters 0x8
    UFUNCTION(BlueprintCallable) FItemData RemoveItem(int32 Location, int32 Amount, bool ClearItemSave);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void RemoveSlots(int32 SlotsToRemove);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Server_DoThePour(AIcarusPlayerCharacter* Instigator, FFindItemSlotInfoInvType From, FFindItemSlotInfoInvType To);  // parameters 0x38
    UFUNCTION(BlueprintCallable) bool SetItem(int32 Location, FItemData NewItem);  // parameters 0x1F9
    UFUNCTION(BlueprintCallable) bool SetItemDynamicProperty(int32 Location, EDynamicItemProperties Property, int32 Value);  // parameters 0xD
    UFUNCTION(BlueprintCallable) static bool ShowPourIntoContextMenu(AIcarusPlayerCharacter* Instigator, const FItemData& ItemData);  // parameters 0x1F9
    UFUNCTION(BlueprintCallable) void SlottableSetup(const TArray<FSlotWrapper>& SlotableSetup);  // parameters 0x10
    UFUNCTION() void Sort(TEnumAsByte<EInventorySortType> SortType);  // parameters 0x1
    UFUNCTION() void SortByAlphanumeric();
    UFUNCTION() void SortByStackCount();
    UFUNCTION() void SortByTag();
    UFUNCTION() void SortByWeight();
    UFUNCTION() TArray<FItemData> SortRestackInventory();  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool TransferInventory(UInventory* Other);  // parameters 0x9
    UFUNCTION() void TryRegisterHUDUpdates();
};
