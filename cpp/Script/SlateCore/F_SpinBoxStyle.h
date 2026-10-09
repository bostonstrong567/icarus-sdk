// /Script/SlateCore.SpinBoxStyle
// size 0x2E8, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FSpinBoxStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundBrush;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HoveredBackgroundBrush;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush ActiveFillBrush;  // 0x0118, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush InactiveFillBrush;  // 0x01A0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush ArrowsImage;  // 0x0228, size 0x88
    UPROPERTY() FSlateColor ForegroundColor;  // 0x02B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin TextPadding;  // 0x02D8, size 0x10
};
