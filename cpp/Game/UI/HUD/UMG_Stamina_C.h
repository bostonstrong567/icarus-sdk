// /Game/UI/HUD/UMG_Stamina.UMG_Stamina_C
// Derives from: UStaminaBarBase > UUserWidget > UWidget > UVisual > UObject
// size 0x660, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Stamina_C : public UStaminaBarBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0278, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* PopinStamina;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* StaminaDepleted;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOutStamina;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProgressBar_C* AnimatedStaminaBar;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Border;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_237;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* StaminaBarOverlay;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* StaminaBox;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* StaminaBoxBorder;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* StaminaDepletedBorder;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StaminaDepletedText;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* StaminaFoodLineCanvas;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* StaminaIcon;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* StaminaSizeBox;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* StaminaSpacerAnchor;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> StaminaLinePositions;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StaminaFull;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LowStamina;  // 0x0309, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalStaminaBarStyle;  // 0x0310, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle WarningStaminaBarStyle;  // 0x04B0, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NoStamina;  // 0x0650, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* StaminaColourCurve;  // 0x0658, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_Stamina(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetStamina();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LowStaminaWarning();
    UFUNCTION(BlueprintCallable) void NoStaminaWarning();
    UFUNCTION(BlueprintImplementableEvent) void ResetStaminaUI(float CurrentStamina, float MaxStamina, float StaminaPct, EStaminaBracket CurrentBracket);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void UpdateStaminaUI(float CurrentStamina, float MaxStamina, float StaminaPct, EStaminaBracket CurrentBracket, EStaminaBracket LastBracket);  // parameters 0xE
};
