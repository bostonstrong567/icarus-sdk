// /Game/UI/Components/UMG_InventoryItem.UMG_InventoryItem_C
// Derives from: UInventoryItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0xA64, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryItem_C : public UInventoryItemWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Aleration;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AssociatedItem;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AssociatedItemContainer;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Attachment;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AttachmentIndicator;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* backdetails;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* backdetails_1;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* BackpackDetails;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BaseBorder;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BrokenIconContainer;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BrokenIconImage;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ClassificationImage;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CountContainer;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* DurabilityBar;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HighlightSlot;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HoveredHandles;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverImage;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InteractableFrame;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InteractableFrameLarge;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIconDynamic;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ItemSlot;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LastItem;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LastItemIcon;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* LightSlot;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LockedState;  // 0x0530, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MasterOverlay;  // 0x0538, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RankImage;  // 0x0540, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotImage;  // 0x0548, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SpoilContainerDebug;  // 0x0550, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* SpoilPercentage;  // 0x0558, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SpoilTime;  // 0x0560, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Stack;  // 0x0568, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* StackedModifierImage;  // 0x0570, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* TopLevelInvalidationBox;  // 0x0578, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FillableProgressBar_C* UMG_FillableProgressBar;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Hotkey_Number;  // 0x0590, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_SlotState> State;  // 0x0594, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HiddenForDrag;  // 0x0595, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RightClick;  // 0x0596, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FQuickShift QuickShift;  // 0x0598, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Locked;  // 0x05A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BeingMoved;  // 0x05A9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MovingCount;  // 0x05AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowLastItem;  // 0x05B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* SpoiltColourCurve;  // 0x05B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LockOverride;  // 0x05C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* SFX_SocketItem;  // 0x05C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ItemPopup_C* tooltip;  // 0x05D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ContextMenuUseItemId;  // 0x05D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData CachedItem;  // 0x05E0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SFX_SocketItemFail;  // 0x07D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SFX_DestroyItemDefault;  // 0x07D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SFX_HoverItem;  // 0x07E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SFX_HoverEmpty;  // 0x07E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SFX_HoverDragItemValid;  // 0x07F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SFX_HoverDragItemInvalid;  // 0x07F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SFX_DragItem;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SFX_QuickMoveItem;  // 0x0808, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUserWidget* HighlightWidget;  // 0x0810, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackpackFrame;  // 0x0818, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush RegularFrame;  // 0x08A0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CachedItemMaximumHealth;  // 0x0928, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush LightFrame;  // 0x0930, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BlockHighlight;  // 0x09B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Item_Identifier;  // 0x09BC, size 0x8, named "Item Identifier"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Item_Payload;  // 0x09C4, size 0x4, named "Item Payload"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowContextMenuWhileLocked;  // 0x09C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Normal;  // 0x09D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Hovered;  // 0x09D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Pressed;  // 0x09E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Valid;  // 0x09E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Invalid;  // 0x09F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Exotic;  // 0x09F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Exotic_Hovered;  // 0x0A00, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Quest;  // 0x0A08, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Quest_Hovered;  // 0x0A10, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisableContextMenu;  // 0x0A18, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor StackColour_Normal;  // 0x0A1C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor StackColour_Bag;  // 0x0A2C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Visual_LightSlot;  // 0x0A3C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Visual_BulkySlot;  // 0x0A3D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Legendary;  // 0x0A40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Legendary_Hovered;  // 0x0A48, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowSwapOnly;  // 0x0A50, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ItemHovered;  // 0x0A51, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* CachedInventory;  // 0x0A58, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CachedLocation;  // 0x0A60, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanDestroyItem(FItemData Item, bool& CanDestroy);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) void ClearDragValues();
    UFUNCTION(BlueprintCallable) void Close();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DestroyItemCancelled();
    UFUNCTION(BlueprintCallable) void DestroyItemConfirmed();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION(BlueprintCallable) void DragOff();
    UFUNCTION() void ExecuteUbergraph_UMG_InventoryItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Focus();
    UFUNCTION(BlueprintCallable, BlueprintPure) void Get_Meta_Inventory_ID(UInventory* Inventory, EMetaInventoryID& Meta_ID);  // parameters 0x9, named "Get Meta Inventory ID"
    UFUNCTION(BlueprintCallable) void GetCraftingBenchRequired(const FItemData& ItemData, bool& RequiresCraftingBench, TArray<FRecipeSetsRowHandle>& CraftingBenchType);  // parameters 0x208
    UFUNCTION(BlueprintCallable) void GetCursorInfo(UInventory*& Inventory, int32& Location, bool& Success, int32& Count);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDestroyItemSound(FItemData& ItemData, UFMODEvent*& Sound);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void GetEquippableModifierComponent(UEquippableModifier*& EquippableModifier) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetItemAndCategoryFromCurrentSlot(FFieldGuideCategoriesRowHandle& Category, FItemsStaticRowHandle& Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetUseWidgets(FItemData Item, FUsesEnum Use, TArray<UWidget*>& Array);  // parameters 0x210
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasStackContextMenuItems(FItemData Item, const FItemableData& ItemableData, bool& HasStackActions, bool& SplitStackEnabled);  // parameters 0x2EA
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasUseContextMenuItems(FItemData& Item, bool& HasUseItems);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) void HotbarClicked(int32 Slots);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* BoundInventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsBackpackSlot();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsExoticItem();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLivingWeapon();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsQuestItem();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LightSlotStyle(bool IsEquipped);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnContextMenuDestroyItemClicked(FName Id, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnContextMenuDropAllClicked(FName Id, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnContextMenuDropClicked(FName Id, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnContextMenuFieldGuideClicked(FName Id, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnContextMenuItemClicked(FName Id, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnContextMenuPourClicked(FName Id, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnContextMenuSplitStackClicked(FName Id, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnCursorCleared();
    UFUNCTION(BlueprintCallable) void OnCursorUpdated(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void OnSpaceRepairOptionClicked(FName Option, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void QuickShift__DelegateSignature(int32 CurrentLocation, UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RepairConfirmed();
    UFUNCTION(BlueprintCallable) void Set_Being_Moved(int32 MovingCount);  // parameters 0x4, named "Set Being Moved"
    UFUNCTION(BlueprintCallable) void SetCursorInfo(UInventory* CurrentInventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetDropShipMode();
    UFUNCTION(BlueprintCallable) void SetForceLocked(bool IsLocked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetItemStyle(bool IsExotic, bool IsQuest, bool IsLegendary);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldShowHighlight(UInventory* Inventory, bool& Show);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SpaceRepairClicked(FName Identifier, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Trigger_Hover();  // named "Trigger Hover"
    UFUNCTION(BlueprintCallable) void TryShowContextMenu();
    UFUNCTION(BlueprintCallable) void TryUpdate();
    UFUNCTION(BlueprintCallable) void UnFocus();
    UFUNCTION(BlueprintCallable) void Update(FItemData Item_Reference, FItemsStaticRowHandle Last_Item);  // parameters 0x208
    UFUNCTION(BlueprintCallable) void UpdateEquippableModifier();
    UFUNCTION(BlueprintCallable) void UpdateHotbarBulkySlot();
    UFUNCTION(BlueprintCallable) void UpdateHotbarLightSlot();
    UFUNCTION(BlueprintCallable) void UpdateSpoilColour(float SpoilPercent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateState(TEnumAsByte<E_SlotState> NewState);  // parameters 0x1
};
