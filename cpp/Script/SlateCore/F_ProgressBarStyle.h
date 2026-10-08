// /Script/SlateCore.ProgressBarStyle
// size 0x1A0, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FProgressBarStyle : public FSlateWidgetStyle
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundImage;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush FillImage;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush MarqueeImage;  // 0x0118, size 0x88
};
