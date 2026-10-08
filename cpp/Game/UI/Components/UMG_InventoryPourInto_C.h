// /Game/UI/Components/UMG_InventoryPourInto.UMG_InventoryPourInto_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2CC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryPourInto_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* CloseButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* DoFill;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* FillFromItem;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* FillToGrid;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* FillToItem;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_AlterationAttachment;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichTextBlock_Transfer;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame_141;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* FromInventory;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SelectedPourIndex;  // 0x02C8, size 0x4

    UFUNCTION() void BndEvt__UMG_InventoryPourInto_CloseButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_InventoryPourInto_DoFill_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void DoTheFill();
    UFUNCTION() void ExecuteUbergraph_UMG_InventoryPourInto(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetSelectedSlotInfo(FFindItemSlotInfoInvType& SlotInfo);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Initialize(UInventory* PourFromInventory, int32 PourFromInvSlot);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void LockUpInvItem(UUMG_InventoryItem_C* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Pour_Index_Changed(int32 NewSelected);  // parameters 0x4, named "Pour Index Changed"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Update_Text(FItemData From, FItemData To);  // parameters 0x3E0, named "Update Text"
};
