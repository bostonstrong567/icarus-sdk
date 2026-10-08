// /Script/SlateCore.CheckBoxStyle
// size 0x580, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FCheckBoxStyle : public FSlateWidgetStyle
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESlateCheckBoxType> CheckBoxType;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush UncheckedImage;  // 0x0010, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush UncheckedHoveredImage;  // 0x0098, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush UncheckedPressedImage;  // 0x0120, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush CheckedImage;  // 0x01A8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush CheckedHoveredImage;  // 0x0230, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush CheckedPressedImage;  // 0x02B8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush UndeterminedImage;  // 0x0340, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush UndeterminedHoveredImage;  // 0x03C8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush UndeterminedPressedImage;  // 0x0450, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin Padding;  // 0x04D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ForegroundColor;  // 0x04E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor BorderBackgroundColor;  // 0x0510, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateSound CheckedSlateSound;  // 0x0538, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateSound UncheckedSlateSound;  // 0x0550, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateSound HoveredSlateSound;  // 0x0568, size 0x18
};
