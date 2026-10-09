// /Script/SlateCore.EditableTextStyle
// size 0x220, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FEditableTextStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateFontInfo Font;  // 0x0008, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor ColorAndOpacity;  // 0x0060, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundImageSelected;  // 0x0088, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundImageComposing;  // 0x0110, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush CaretImage;  // 0x0198, size 0x88
};
