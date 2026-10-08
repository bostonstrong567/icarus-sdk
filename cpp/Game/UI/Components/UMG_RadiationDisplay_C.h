// /Game/UI/Components/UMG_RadiationDisplay.UMG_RadiationDisplay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x46C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadiationDisplay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* LowPulse;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* _1;  // 0x0270, size 0x8, named "1"
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* _2;  // 0x0278, size 0x8, named "2"
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* _3;  // 0x0280, size 0x8, named "3"
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Divider;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Divider_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MainDisplay;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* RadiationBar;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgress;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LowImage;  // 0x02B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle NormalStyle;  // 0x02B8, size 0x1A0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UsePlayerShelter;  // 0x0458, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* ColourCurve;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Calculated;  // 0x0468, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_RadiationDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResetExposure();
    UFUNCTION(BlueprintCallable) void SetProgress(float Percent);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
