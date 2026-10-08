// /Game/UI/Windows/BioLab/UMG_BioLab_UpgradeSlotMain.UMG_BioLab_UpgradeSlotMain_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_UpgradeSlotMain_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CurrentModifierIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LockIcon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* SlotButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotTypeIcon;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanSelect;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUpgradeSlotClicked UpgradeSlotClicked;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GenerateTooltips;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSlotHovered OnSlotHovered;  // 0x02A8, size 0x10

    UFUNCTION() void BndEvt__UMG_BioLab_UpgradeSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_UpgradeSlotMain(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void OnSlotHovered__DelegateSignature();
    UFUNCTION(BlueprintCallable) void SetSlotState(FLivingItemSlotState SlotState);  // parameters 0x78
    UFUNCTION(BlueprintCallable) void UpgradeSlotClicked__DelegateSignature();
};
