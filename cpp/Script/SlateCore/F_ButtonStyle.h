// /Script/SlateCore.ButtonStyle
// size 0x278, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FButtonStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush Normal;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush Hovered;  // 0x0090, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush Pressed;  // 0x0118, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush Disabled;  // 0x01A0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin NormalPadding;  // 0x0228, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin PressedPadding;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateSound PressedSlateSound;  // 0x0248, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateSound HoveredSlateSound;  // 0x0260, size 0x18
};
