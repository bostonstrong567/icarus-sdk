// /Game/UI/HUD/UMG_Hotbar.UMG_Hotbar_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Hotbar_C : public UUserWidget, public IInventorySlotChangeListener
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeoutText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* HandsInventory;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_2;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_3;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_4;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_5;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_6;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_7;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_8;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_9;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_10;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_11;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_12;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_13;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemHint;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_1;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_2;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_3;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_4;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_5;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_6;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_7;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_8;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_9;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_10;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_1;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_2;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_3;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_4;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_5;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_6;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_7;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_8;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_9;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_10;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeyBind_TextOnly_C* UMG_KeyBind_TextOnly_11;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* VisionNew;  // 0x03B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_InventoryItem_C*> Slots;  // 0x03C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SelectedIndex;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TextAnimationPlaying;  // 0x03E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Intialised;  // 0x03E1, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* VisionInventory;  // 0x03E8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_Hotbar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_72A899084060253ECF1986A024942BB2();
    UFUNCTION(BlueprintCallable) void FocusSlot(int32 SlotIndex, FItemData& FocusedItem);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void FocusedItemUpdated(AIcarusItem* FocusedItem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetFocusedItem(FItemData& FocusedItem);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void GetFocusedSlot(int32& FocusedSlot);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleChangedSlots(UInventory* Inventory, const TSet<int32>& ChangedSlotIndices);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* BoundInventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ItemsModified();
    UFUNCTION(BlueprintCallable) void NavigateHotbar(bool Right, FItemData& FocusedItem, int32& NewSlot);  // parameters 0x1FC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnInitialized();
    UFUNCTION(BlueprintCallable) void QuickShiftHandler(int32 Location, UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TryInitialiseEvents();
    UFUNCTION(BlueprintCallable) void UnFocusSlot();
    UFUNCTION(BlueprintCallable) void UpdateFocus();
    UFUNCTION(BlueprintCallable) void UpdateFocusedText();
};
