// /Script/SlateCore.TextBlockStyle
// size 0x270, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FTextBlockStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateFontInfo Font;  // 0x0008, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ColorAndOpacity;  // 0x0060, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ShadowOffset;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ShadowColorAndOpacity;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) FSlateColor SelectedBackgroundColor;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor HighlightColor;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HighlightShape;  // 0x00D8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush StrikeBrush;  // 0x0160, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush UnderlineBrush;  // 0x01E8, size 0x88
};
