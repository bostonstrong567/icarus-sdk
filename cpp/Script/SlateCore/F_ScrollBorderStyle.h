// /Script/SlateCore.ScrollBorderStyle
// size 0x118, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FScrollBorderStyle : public FSlateWidgetStyle
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush TopShadowBrush;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BottomShadowBrush;  // 0x0090, size 0x88
};
