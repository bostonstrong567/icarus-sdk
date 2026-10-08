// /Game/UI/Components/UMG_ModifierState.UMG_ModifierState_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x5A2, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ModifierState_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AddBuff;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Pulse;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Background;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Main;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Icon;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Percentage;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PercentageApplied;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Progress;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_Main;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Stack;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* StackContainer;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Timer;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimerContainer;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* UMG_CloseButton_2;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UModifierStateComponent*> StateList;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStateData ModifierRow;  // 0x02E8, size 0x268
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0550, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StackCount;  // 0x0554, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UpdateTrigger;  // 0x0558, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Hovered;  // 0x0559, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* BackgroundImage;  // 0x0560, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowName;  // 0x0568, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModifierTime;  // 0x0570, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AlwaysHideTimer;  // 0x0574, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ModifierPopup_C* CachedToolTip;  // 0x0578, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSimpleAnimations;  // 0x0580, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StackOffsetCounter;  // 0x0584, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* RadiationColorCurve;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> Percent_Trigger;  // 0x0590, size 0x10, named "Percent Trigger"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowRemoveButton;  // 0x05A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayingAnimation;  // 0x05A1, size 0x1

    UFUNCTION(BlueprintCallable) void AddModifier(UModifierStateComponent* Modifier, bool SkipAnimation);  // parameters 0x9
    UFUNCTION() void BndEvt__UMG_ModifierState_UMG_CloseButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CacheRadiationTrigger();
    UFUNCTION() void ExecuteUbergraph_UMG_ModifierState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Get_Radiation_Phase_Percent(float Percent, float& Progress);  // parameters 0x8, named "Get Radiation Phase Percent"
    UFUNCTION(BlueprintCallable) void GetRenderOffset(float& DesiredOffset) const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void ModifierTimerUpdated();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void RefreshAllDetails();
    UFUNCTION(BlueprintCallable) void RefreshStackCountDisplay();
    UFUNCTION(BlueprintCallable) void RemoveModifier(UModifierStateComponent* Modifier);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveModifierEvent();
    UFUNCTION(BlueprintCallable) void SetCloseButtonVisibility();
    UFUNCTION(BlueprintCallable) void SetProgressBarStyle();
    UFUNCTION(BlueprintCallable) void SetRadiationBackground();
    UFUNCTION(BlueprintCallable) void SetTimerVisibility(ESlateVisibility InVisibility);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateTimerText();
};
