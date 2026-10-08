// /Game/UI/Windows/BioLab/UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x331, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_UpgradeSlotSelector_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Close;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Open;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ChoicesHBox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DividerArrow;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainBounds;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotMain_C* MainSlot;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowingChoices;  // 0x0298, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemUpgradesRowHandle PendingChangeUpgrade;  // 0x029C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotIndex;  // 0x02B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCommitSlotChange CommitSlotChange;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnShowChoices OnShowChoices;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnChoiceHovered OnChoiceHovered;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnChoiceUnhovered OnChoiceUnhovered;  // 0x02E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowSwappingUpgrades;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CloseChoicesAnimTimer;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_BioLab_PurchaseUpgradeDetails_C* PurchaseDetails;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSlotFocused OnSlotFocused;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnSlotUnfocused OnSlotUnfocused;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SlotUnlocked;  // 0x0330, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanChooseUpgrades(const FLivingItemSlotState& LivingItemSlotState);  // parameters 0x79
    UFUNCTION(BlueprintCallable) void CancelChangeUpgrade();
    UFUNCTION(BlueprintCallable) void ChoiceHovered(FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ChoiceUnhovered(FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CommitSlotChange__DelegateSignature(int32 SlotIndex, FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ConfirmChangeUpgrade();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_UpgradeSlotSelector(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinishHideChoices();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBaseMargin(FVector2D& BaseSize);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBaseSize(FVector2D& BaseSize);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HideChoices();
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void OnChoiceHovered__DelegateSignature(int32 SlotIndex, FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnChoiceUnhovered__DelegateSignature(int32 SlotIndex, FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x1C
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnInitialized();
    UFUNCTION(BlueprintCallable) void OnMainSlotClicked();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void OnShowChoices__DelegateSignature(int32 SlotIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSlotFocused__DelegateSignature(int32 SlotIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSlotHovered();
    UFUNCTION(BlueprintCallable) void OnSlotUnfocused__DelegateSignature(int32 SlotIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSlotState(FLivingItemSlotState SlotState);  // parameters 0x78
    UFUNCTION(BlueprintCallable) void ShowCannotAffordPrompt();
    UFUNCTION(BlueprintCallable) void ShowChoices();
    UFUNCTION(BlueprintCallable) void UpgradeChoiceClicked(FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x18
};
