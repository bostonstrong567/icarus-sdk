// /Script/UMG.ScrollBar
// Derives from: UWidget > UVisual > UObject
// size 0x610, declared in Engine/Source/Runtime/UMG/Public/Components/ScrollBar.h

UCLASS()
class UScrollBar : public UWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScrollBarStyle WidgetStyle;  // 0x0108, size 0x4D0
    UPROPERTY(Deprecated) USlateWidgetStyleAsset* Style;  // 0x05D8, size 0x8
    UPROPERTY(EditAnywhere) bool bAlwaysShowScrollbar;  // 0x05E0, size 0x1
    UPROPERTY(EditAnywhere) bool bAlwaysShowScrollbarTrack;  // 0x05E1, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EOrientation> Orientation;  // 0x05E2, size 0x1
    UPROPERTY(EditAnywhere) FVector2D Thickness;  // 0x05E4, size 0x8
    UPROPERTY(EditAnywhere) FMargin Padding;  // 0x05EC, size 0x10
protected:
    TSharedPtr<SScrollBar,0> MyScrollBar;  // 0x0600, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetState(float InOffsetFraction, float InThumbSizeFraction);  // parameters 0x8
};
