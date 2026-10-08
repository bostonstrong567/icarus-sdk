// /Script/SlateCore.ScrollBarStyle
// size 0x4D0, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FScrollBarStyle : public FSlateWidgetStyle
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HorizontalBackgroundImage;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush VerticalBackgroundImage;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush VerticalTopSlotImage;  // 0x0118, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HorizontalTopSlotImage;  // 0x01A0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush VerticalBottomSlotImage;  // 0x0228, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HorizontalBottomSlotImage;  // 0x02B0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush NormalThumbImage;  // 0x0338, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HoveredThumbImage;  // 0x03C0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush DraggedThumbImage;  // 0x0448, size 0x88
};
