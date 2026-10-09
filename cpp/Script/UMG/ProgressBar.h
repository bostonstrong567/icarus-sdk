// /Script/UMG.ProgressBar
// Derives from: UWidget > UVisual > UObject
// size 0x318, declared in Engine/Source/Runtime/UMG/Public/Components/ProgressBar.h

UCLASS()
class UProgressBar : public UWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProgressBarStyle WidgetStyle;  // 0x0108, size 0x1A0
    UPROPERTY(Deprecated) USlateWidgetStyleAsset* Style;  // 0x02A8, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* BackgroundImage;  // 0x02B0, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* FillImage;  // 0x02B8, size 0x8
    UPROPERTY(Deprecated) USlateBrushAsset* MarqueeImage;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Percent;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EProgressBarFillType> BarFillType;  // 0x02CC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsMarquee;  // 0x02CD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D BorderPadding;  // 0x02D0, size 0x8
    UPROPERTY() FGetFloat PercentDelegate;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor FillColorAndOpacity;  // 0x02E8, size 0x10
    UPROPERTY() FGetLinearColor FillColorAndOpacityDelegate;  // 0x02F8, size 0x10
protected:
    TSharedPtr<SProgressBar,0> MyProgressBar;  // 0x0308, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetFillColorAndOpacity(FLinearColor InColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetIsMarquee(bool InbIsMarquee);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPercent(float InPercent);  // parameters 0x4
};
