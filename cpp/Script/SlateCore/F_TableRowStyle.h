// /Script/SlateCore.TableRowStyle
// size 0x7C8, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FTableRowStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush SelectorFocusedBrush;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush ActiveHoveredBrush;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush ActiveBrush;  // 0x0118, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush InactiveHoveredBrush;  // 0x01A0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush InactiveBrush;  // 0x0228, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush EvenRowBackgroundHoveredBrush;  // 0x02B0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush EvenRowBackgroundBrush;  // 0x0338, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush OddRowBackgroundHoveredBrush;  // 0x03C0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush OddRowBackgroundBrush;  // 0x0448, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColor;  // 0x04D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor SelectedTextColor;  // 0x04F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush DropIndicator_Above;  // 0x0520, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush DropIndicator_Onto;  // 0x05A8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush DropIndicator_Below;  // 0x0630, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush ActiveHighlightedBrush;  // 0x06B8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush InactiveHighlightedBrush;  // 0x0740, size 0x88
};
