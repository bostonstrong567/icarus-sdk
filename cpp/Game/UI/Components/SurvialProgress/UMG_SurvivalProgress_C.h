// /Game/UI/Components/SurvialProgress/UMG_SurvivalProgress.UMG_SurvivalProgress_C
// Derives from: USurvivalProgressBar > UUserWidget > UWidget > UVisual > UObject
// size 0x7A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SurvivalProgress_C : public USurvivalProgressBar
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* LowPulse;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BackgroundBorder;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Level;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SurvivalIcon;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgress;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalStyle;  // 0x02A8, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle OrangeStyle;  // 0x0448, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle WarningStyle;  // 0x05E8, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Green;  // 0x0788, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Orange;  // 0x0789, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Red;  // 0x078A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GoodThreshold;  // 0x078C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BadThreshold;  // 0x0790, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* SurvivalColourCurve;  // 0x0798, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* SurvivalIconColourCurve;  // 0x07A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_SurvivalProgress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void InitStatIcon();
    UFUNCTION(BlueprintCallable) void SetType(ESecondaryItemTypes SurvivalType);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void UpdateDisplay();
};
