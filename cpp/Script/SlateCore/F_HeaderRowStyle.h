// /Script/SlateCore.HeaderRowStyle
// size 0xB70, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FHeaderRowStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere) FTableColumnHeaderStyle ColumnStyle;  // 0x0008, size 0x4D0
    UPROPERTY(EditAnywhere) FTableColumnHeaderStyle LastColumnStyle;  // 0x04D8, size 0x4D0
    UPROPERTY(EditAnywhere) FSplitterStyle ColumnSplitterStyle;  // 0x09A8, size 0x118
    UPROPERTY(EditAnywhere) FSlateBrush BackgroundBrush;  // 0x0AC0, size 0x88
    UPROPERTY(EditAnywhere) FSlateColor ForegroundColor;  // 0x0B48, size 0x28
};
