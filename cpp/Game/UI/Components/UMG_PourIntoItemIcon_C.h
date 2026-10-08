// /Game/UI/Components/UMG_PourIntoItemIcon.UMG_PourIntoItemIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x4E4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PourIntoItemIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverBack;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Corner_Animation;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BaseBorder;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Corner;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InteractableFrame;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIconDynamic;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ItemSlot;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MasterOverlay;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FillableProgressBar_C* UMG_FillableProgressBar;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Normal;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Hovered;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemReference;  // 0x02C8, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SelectedForPour;  // 0x04B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPourSelected PourSelected;  // 0x04C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum InventoryID;  // 0x04D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InventorySlot;  // 0x04E0, size 0x4

    UFUNCTION() void BndEvt__UMG_PourIntoItemIcon_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_PourIntoItemIcon_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_PourIntoItemIcon_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PourIntoItemIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetItem(FItemData& ItemReference);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void IsFull(bool& Full);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PourSelected__DelegateSignature(int32 SelectedIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateSelectedPour();
};
