// /Script/SlateCore.InlineEditableTextBlockStyle
// size 0xA70, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEditableTextBoxStyle EditableTextBoxStyle;  // 0x0008, size 0x7F8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTextBlockStyle TextStyle;  // 0x0800, size 0x270
};
