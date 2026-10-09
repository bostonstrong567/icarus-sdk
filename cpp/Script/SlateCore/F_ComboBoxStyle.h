// /Script/SlateCore.ComboBoxStyle
// size 0x3F0, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FComboBoxStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FComboButtonStyle ComboButtonStyle;  // 0x0008, size 0x3B8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateSound PressedSlateSound;  // 0x03C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateSound SelectionChangeSlateSound;  // 0x03D8, size 0x18
};
