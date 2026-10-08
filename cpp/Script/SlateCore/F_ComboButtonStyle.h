// /Script/SlateCore.ComboButtonStyle
// size 0x3B8, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FComboButtonStyle : public FSlateWidgetStyle
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle ButtonStyle;  // 0x0008, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush DownArrowImage;  // 0x0280, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ShadowOffset;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ShadowColorAndOpacity;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush MenuBorderBrush;  // 0x0320, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin MenuBorderPadding;  // 0x03A8, size 0x10
};
