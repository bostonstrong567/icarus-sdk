// /Game/UI/Windows/BioLab/UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x6C4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_CustomisationPanel_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ContentFadeIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* ContentCanvas;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Dropshadow;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* NoWeaponSelectedPopup;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_StatBox_C* StatBox;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_WireCanvas_C* UMG_BioLab_LivingItemSlotCanvas;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeaponImage;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_BioLab_UpgradeSlotSelector_C*> UpgradeSlots;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData CurrentItem;  // 0x02B0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData PendingItem;  // 0x04A0, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_LivingItemPreview_C* ItemPreviewer;  // 0x0690, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_WirePin_C*> Pins;  // 0x0698, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NewItemSelected;  // 0x06A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial;  // 0x06B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* FadeInCurve;  // 0x06B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BlendStartTime;  // 0x06C0, size 0x4

    UFUNCTION(BlueprintCallable) void CommitSlotChange(int32 SlotIndex, FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x1C
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_CustomisationPanel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialisePreview();
    UFUNCTION(BlueprintCallable) void OnChoiceHovered(int32 SlotIndex, FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnChoiceUnhovered(int32 SlotIndex, FLivingItemUpgradesRowHandle Upgrade);  // parameters 0x1C
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnInitialized();
    UFUNCTION(BlueprintCallable) void OnShowChoices(int32 SlotIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSlotFocused(int32 SlotIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSlotUnfocused(int32 SlotIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SelectItem(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
