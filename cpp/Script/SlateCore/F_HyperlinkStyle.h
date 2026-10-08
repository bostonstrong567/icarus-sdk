// /Script/SlateCore.HyperlinkStyle
// size 0x500, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FHyperlinkStyle : public FSlateWidgetStyle
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle UnderlineStyle;  // 0x0008, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTextBlockStyle TextStyle;  // 0x0280, size 0x270
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin Padding;  // 0x04F0, size 0x10
};
