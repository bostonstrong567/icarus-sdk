// /Script/Synthesis.Synth2DSliderStyle
// size 0x2B8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Public/UI/Synth2DSliderStyle.h

USTRUCT()
struct FSynth2DSliderStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush NormalThumbImage;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush DisabledThumbImage;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush NormalBarImage;  // 0x0118, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush DisabledBarImage;  // 0x01A0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundImage;  // 0x0228, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BarThickness;  // 0x02B0, size 0x4
};
