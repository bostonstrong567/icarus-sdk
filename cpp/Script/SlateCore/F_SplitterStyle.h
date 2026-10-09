// /Script/SlateCore.SplitterStyle
// size 0x118, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FSplitterStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HandleNormalBrush;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HandleHighlightBrush;  // 0x0090, size 0x88
};
