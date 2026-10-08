// /Game/UI/HUD/UMG_Survival.UMG_Survival_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x9CA, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Survival_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOutHealthBar;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WarningHPPulse;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProgressBar_C* AnimatedHealthBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* bg;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SurvivalProgress_C* Food;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* HealthBarSizeBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HealthBoxBorder;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* HealthFoodLineCanvas;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HealthIcon;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* HealthSpacerAnchor;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HealthText;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HPBox;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SurvivalProgress_C* Oxygen;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Hearing_C* UMG_Hearing;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TempAndHome_C* UMG_TempAndHome;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SurvivalProgress_C* Water;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalHealthBarStyle;  // 0x02E8, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LowImage;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle WarninglHealthBarStyle;  // 0x0490, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HealthFull;  // 0x0630, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StaminaFull;  // 0x0631, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LowStamina;  // 0x0632, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle WarningStaminaBarStyle;  // 0x0638, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalStaminaBarStyle;  // 0x07D8, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> StaminaLinePositions;  // 0x0978, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> HealthLinePositions;  // 0x0988, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LineStart_VerticalOffset;  // 0x0998, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LineEnd_VerticalOffset;  // 0x099C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor White;  // 0x09A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Black;  // 0x09B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* HealthColourCurve;  // 0x09C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x09C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TriggerSegmentUpdate;  // 0x09C9, size 0x1

    UFUNCTION(BlueprintCallable) void AttemptInitialisation();
    UFUNCTION(BlueprintCallable) void ConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Survival(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAir();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetAirText();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFood();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetFoodText();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHealth();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetHealthPercent();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetHealthValue();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetWater();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetWaterText();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void HealthNumbersUpdated(bool Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void HealthUpdated(UActorState* ActorState, float NewHealth);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void HideHealthBar();
    UFUNCTION(BlueprintCallable) void LowHealthWarning();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) void OnPaint(FPaintContext& Context) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update_Health_Bar();  // named "Update Health Bar"
    UFUNCTION(BlueprintCallable) void UpdateSegments();
};
