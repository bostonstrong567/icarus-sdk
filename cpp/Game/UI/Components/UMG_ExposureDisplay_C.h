// /Game/UI/Components/UMG_ExposureDisplay.UMG_ExposureDisplay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x458, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ExposureDisplay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* LowPulse;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Divider;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Divider_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ExposurePercentageBar;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ExposureVerticalBox;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ShelterDisplay_C* UMG_ShelterDisplay;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgress;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LowImage;  // 0x02A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalStyle;  // 0x02A8, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UsePlayerShelter;  // 0x0448, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* ColourCurve;  // 0x0450, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_ExposureDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResetExposure();
    UFUNCTION(BlueprintCallable) void SetProgress(float Percent);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
