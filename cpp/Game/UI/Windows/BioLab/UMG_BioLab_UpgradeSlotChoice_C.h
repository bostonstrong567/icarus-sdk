// /Game/UI/Windows/BioLab/UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_UpgradeSlotChoice_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HoverIndicator;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* SlotButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UpgradeIcon;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUpgradeChoiceClicked UpgradeChoiceClicked;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemUpgradesRowHandle Upgrade;  // 0x0290, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FChoiceHovered ChoiceHovered;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FChoiceUnhovered ChoiceUnhovered;  // 0x02B8, size 0x10

    UFUNCTION() void BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_BioLab_UpgradeSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ChoiceHovered__DelegateSignature(FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ChoiceUnhovered__DelegateSignature(FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_UpgradeSlotChoice(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetUpgrade(FLivingItemUpgradesRowHandle Upgrade, bool IsCurrentChoice);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void UpgradeChoiceClicked__DelegateSignature(FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x18
};
