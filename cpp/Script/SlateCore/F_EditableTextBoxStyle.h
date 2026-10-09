// /Script/SlateCore.EditableTextBoxStyle
// size 0x7F8, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundImageNormal;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundImageHovered;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundImageFocused;  // 0x0118, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundImageReadOnly;  // 0x01A0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin Padding;  // 0x0228, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateFontInfo Font;  // 0x0238, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ForegroundColor;  // 0x0290, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor BackgroundColor;  // 0x02B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ReadOnlyForegroundColor;  // 0x02E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin HScrollBarPadding;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin VScrollBarPadding;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScrollBarStyle ScrollBarStyle;  // 0x0328, size 0x4D0
};
