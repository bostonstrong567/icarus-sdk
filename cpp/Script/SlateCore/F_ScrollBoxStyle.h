// /Script/SlateCore.ScrollBoxStyle
// size 0x228, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FScrollBoxStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush TopShadowBrush;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BottomShadowBrush;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush LeftShadowBrush;  // 0x0118, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush RightShadowBrush;  // 0x01A0, size 0x88
};
