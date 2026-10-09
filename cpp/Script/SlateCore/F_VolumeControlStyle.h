// /Script/SlateCore.VolumeControlStyle
// size 0x5F0, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FVolumeControlStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere) FSliderStyle SliderStyle;  // 0x0008, size 0x340
    UPROPERTY(EditAnywhere) FSlateBrush HighVolumeImage;  // 0x0348, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush MidVolumeImage;  // 0x03D0, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush LowVolumeImage;  // 0x0458, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush NoVolumeImage;  // 0x04E0, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush MutedImage;  // 0x0568, size 0x88
};
