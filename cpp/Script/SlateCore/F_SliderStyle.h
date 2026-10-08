// /Script/SlateCore.SliderStyle
// size 0x340, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FSliderStyle : public FSlateWidgetStyle
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush NormalBarImage;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HoveredBarImage;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush DisabledBarImage;  // 0x0118, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush NormalThumbImage;  // 0x01A0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HoveredThumbImage;  // 0x0228, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush DisabledThumbImage;  // 0x02B0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BarThickness;  // 0x0338, size 0x4
};
