// /Script/Synthesis.SynthKnobStyle
// size 0x238, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Public/UI/SynthKnobStyle.h

USTRUCT()
struct FSynthKnobStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush LargeKnob;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush LargeKnobOverlay;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush MediumKnob;  // 0x0118, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush MediumKnobOverlay;  // 0x01A0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinValueAngle;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxValueAngle;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynthKnobSize KnobSize;  // 0x0230, size 0x1
};
