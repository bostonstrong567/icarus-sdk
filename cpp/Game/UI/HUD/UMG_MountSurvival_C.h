// /Game/UI/HUD/UMG_MountSurvival.UMG_MountSurvival_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x694, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MountSurvival_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOutHealthBar;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WarningHPPulse;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProgressBar_C* AnimatedHealthBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* bg;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* HealthBarSizeBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HealthBoxBorder;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* HealthFoodLineCanvas;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HealthIcon;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* HealthSpacerAnchor;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HealthText;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HPBox;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* NamedSlot_AdditionalInfo;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* NamedSlot_ExperienceGained;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_MountName;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ModifierStateContainer_C* UMG_ModifierStateContainer;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalHealthBarStyle;  // 0x02F0, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LowImage;  // 0x0490, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle WarninglHealthBarStyle;  // 0x0498, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HealthFull;  // 0x0638, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> HealthLinePositions;  // 0x0640, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LineStart_VerticalOffset;  // 0x0650, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LineEnd_VerticalOffset;  // 0x0654, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor White;  // 0x0658, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Black;  // 0x0668, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* HealthColourCurve;  // 0x0678, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TriggerSegmentUpdate;  // 0x0680, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusMountCharacter* MountReference;  // 0x0688, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MountHealthScale;  // 0x0690, size 0x4

    UFUNCTION(BlueprintCallable) void AttemptInitialisation();
    UFUNCTION(BlueprintCallable) void CleanupPreviousMount();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MountSurvival(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHealth();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetHealthPercent();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetHealthValue();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void HealthNumbersUpdated(bool Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void HealthUpdated(UActorState* ActorState, float NewHealth);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void HideHealthBar();
    UFUNCTION(BlueprintCallable) void LowHealthWarning();
    UFUNCTION(BlueprintCallable) void OnExperienceEvent(FExperienceEventsRowHandle ExperienceEvent, int32 ExperienceGained);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnMountModifiersUpdated(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) void OnPaint(FPaintContext& Context) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void PopulateModifierList();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update_Health_Bar();  // named "Update Health Bar"
    UFUNCTION(BlueprintCallable) void UpdateSegments();
};
