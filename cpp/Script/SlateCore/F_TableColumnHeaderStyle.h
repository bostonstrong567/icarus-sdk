// /Script/SlateCore.TableColumnHeaderStyle
// size 0x4D0, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere) FSlateBrush SortPrimaryAscendingImage;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush SortPrimaryDescendingImage;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush SortSecondaryAscendingImage;  // 0x0118, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush SortSecondaryDescendingImage;  // 0x01A0, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush NormalBrush;  // 0x0228, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush HoveredBrush;  // 0x02B0, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush MenuDropdownImage;  // 0x0338, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush MenuDropdownNormalBorderBrush;  // 0x03C0, size 0x88
    UPROPERTY(EditAnywhere) FSlateBrush MenuDropdownHoveredBorderBrush;  // 0x0448, size 0x88
};
