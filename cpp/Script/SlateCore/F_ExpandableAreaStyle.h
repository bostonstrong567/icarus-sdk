// /Script/SlateCore.ExpandableAreaStyle
// size 0x120, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere) FSlateBrush CollapsedImage;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush ExpandedImage;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere) float RolloutAnimationSeconds;  // 0x0118, size 0x4
};
