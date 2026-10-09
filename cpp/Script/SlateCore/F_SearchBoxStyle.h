// /Script/SlateCore.SearchBoxStyle
// size 0xA90, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FSearchBoxStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere) FEditableTextBoxStyle TextBoxStyle;  // 0x0008, size 0x7F8
    UPROPERTY(EditAnywhere) FSlateFontInfo ActiveFontInfo;  // 0x0800, size 0x58
    UPROPERTY(EditAnywhere) FSlateBrush UpArrowImage;  // 0x0858, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush DownArrowImage;  // 0x08E0, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush GlassImage;  // 0x0968, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush ClearImage;  // 0x09F0, size 0x88
    UPROPERTY(EditAnywhere) FMargin ImagePadding;  // 0x0A78, size 0x10
    UPROPERTY(EditAnywhere) bool bLeftAlignButtons;  // 0x0A88, size 0x1
};
