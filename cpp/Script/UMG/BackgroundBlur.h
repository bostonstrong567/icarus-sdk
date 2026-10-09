// /Script/UMG.BackgroundBlur
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x1D8, declared in Engine/Source/Runtime/UMG/Public/Components/BackgroundBlur.h

UCLASS()
class UBackgroundBlur : public UContentWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Padding;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0130, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalAlignment> VerticalAlignment;  // 0x0131, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bApplyAlphaToBlur;  // 0x0132, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BlurStrength;  // 0x0134, size 0x4
    UPROPERTY() bool bOverrideAutoRadiusCalculation;  // 0x0138, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 BlurRadius;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateBrush LowQualityFallbackBrush;  // 0x0140, size 0x88
protected:
    TSharedPtr<SBackgroundBlur,0> MyBackgroundBlur;  // 0x01C8, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBlurRadius(int32 InBlurRadius);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetBlurStrength(float InStrength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLowQualityFallbackBrush(const FSlateBrush& InBrush);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1

    // Virtual functions that start here:
    //   SetBlurStrength
};
