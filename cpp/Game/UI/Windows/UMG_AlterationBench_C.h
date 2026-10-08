// /Game/UI/Windows/UMG_AlterationBench.UMG_AlterationBench_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x350, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AlterationBench_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OnSlottingAttachmentItem;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* AlterationProgress;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* AlterButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlterImage;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* AlterInventories;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* AlterItem;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* BenchVertBox;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_AlterationAttachment;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_AlterationEquipmentIcon;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_AlterationIcon;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InfoBorder;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InventoryVertBox;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ItemAttachmentInventory;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RemoveImage;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichText;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* ToAttach;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AlterationDescriptionLarge_C* UMG_AlterationDescriptionLarge;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeviceInventory_C* UMG_DeviceInventory;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame_104;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowStoreAll;  // 0x0340, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTakeAll;  // 0x0341, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Retry;  // 0x0342, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool In_Use;  // 0x0343, size 0x1, named "In Use"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TriggerUpdateState;  // 0x0344, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Current_State;  // 0x0345, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool State_To_Set;  // 0x0346, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* AlterationInventory;  // 0x0348, size 0x8

    UFUNCTION() void BndEvt__UMG_AlterationBench_UMG_BasicButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanAlterItem(bool& Alterable);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_AlterationBench(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAttachedAttachment(FItemData& Attachment);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetItemAttachmentQuery(FTagQueriesRowHandle& Query);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnInventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetupObjectInventory(UInventory* ContainerInventory);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateActionText();
    UFUNCTION(BlueprintCallable) void UpdateAlterButton();
    UFUNCTION(BlueprintCallable) void UpdateState();
};
