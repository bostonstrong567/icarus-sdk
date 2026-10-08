// /Game/UI/Windows/BioLab/UMG_BioLab_UpgradeSlot.UMG_BioLab_UpgradeSlot_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_UpgradeSlot_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CurrentModifierIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* SlotButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotTypeIcon;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanSelect;  // 0x0280, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUpgradeSlotClicked UpgradeSlotClicked;  // 0x0288, size 0x10

    UFUNCTION() void BndEvt__UMG_BioLab_UpgradeSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_UpgradeSlot(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpgradeSlotClicked__DelegateSignature();
};
