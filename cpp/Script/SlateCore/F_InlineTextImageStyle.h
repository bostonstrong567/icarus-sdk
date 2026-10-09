// /Script/SlateCore.InlineTextImageStyle
// size 0x98, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere) FSlateBrush Image;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere) int16 Baseline;  // 0x0090, size 0x2
};
