// /Game/UI/HUD/UMG_EncumbranceBar.UMG_EncumbranceBar_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x87C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_EncumbranceBar_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BackpackFadeOut;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BackpackFullPulse;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OverencumberedPulse2;  // 0x0278, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeToOverencumbered;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WeightFadeOut;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OverencumberedPulse;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* EncumbranceBar;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* EncumbranceBox;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EncumbranceFrame;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_1;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_0;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* SlotCountBar;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotsIcon;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SlotsText;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WarningText;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WarningText_Slots;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WeightText;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WeightWarning;  // 0x0300, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OverEncumbered;  // 0x0301, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CachedCurrentWeight;  // 0x0302, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayerWeight;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle OverencumberedStyle;  // 0x0308, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalStyle_NearFull;  // 0x04A8, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalStyle;  // 0x0648, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WarningVisible;  // 0x07E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayerWeightLastReduced;  // 0x07EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Red;  // 0x07F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Orange;  // 0x0818, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Green;  // 0x0840, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentEncumbrance;  // 0x0868, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x086C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NeedsUpdate;  // 0x086D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotMax;  // 0x0870, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotCurrent;  // 0x0874, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotPrevious;  // 0x0878, size 0x4

    UFUNCTION(BlueprintCallable) void DoUpdate();
    UFUNCTION() void ExecuteUbergraph_UMG_EncumbranceBar(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetEncumbrance();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetEncumeranceAmount();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSlotPercent(float& SlotPercent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnStatsUpdated();
    UFUNCTION(BlueprintCallable) void OverEncumbrance();
    UFUNCTION(BlueprintCallable) void PeriodicSlotUpdate();
    UFUNCTION(BlueprintCallable) void PlayerWeightUpdated_Event_0(int32 CurrentWeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ShowEncumbrance();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateEncumberanceColors();
    UFUNCTION(BlueprintCallable) void UpdateSlots(bool UpdateStep);  // parameters 0x1
};
