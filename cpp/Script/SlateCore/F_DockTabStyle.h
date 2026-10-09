// /Script/SlateCore.DockTabStyle
// size 0x700, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FDockTabStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere) FButtonStyle CloseButtonStyle;  // 0x0008, size 0x278
    UPROPERTY(EditAnywhere) FSlateBrush NormalBrush;  // 0x0280, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush ActiveBrush;  // 0x0308, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush ColorOverlayTabBrush;  // 0x0390, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush ColorOverlayIconBrush;  // 0x0418, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush ForegroundBrush;  // 0x04A0, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush HoveredBrush;  // 0x0528, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush ContentAreaBrush;  // 0x05B0, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush TabWellBrush;  // 0x0638, size 0x88
    UPROPERTY(EditAnywhere) FMargin TabPadding;  // 0x06C0, size 0x10
    UPROPERTY(EditAnywhere) float OverlapWidth;  // 0x06D0, size 0x4
    UPROPERTY(EditAnywhere) FSlateColor FlashColor;  // 0x06D8, size 0x28
};
