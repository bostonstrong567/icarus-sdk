// /Script/SlateCore.WindowStyle
// size 0x1060, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateTypes.h

USTRUCT()
struct FWindowStyle : public FSlateWidgetStyle
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle MinimizeButtonStyle;  // 0x0008, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle MaximizeButtonStyle;  // 0x0280, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle RestoreButtonStyle;  // 0x04F8, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle CloseButtonStyle;  // 0x0770, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTextBlockStyle TitleTextStyle;  // 0x09E8, size 0x270
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush ActiveTitleBrush;  // 0x0C58, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush InactiveTitleBrush;  // 0x0CE0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush FlashTitleBrush;  // 0x0D68, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor BackgroundColor;  // 0x0DF0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush OutlineBrush;  // 0x0E18, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor OutlineColor;  // 0x0EA0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BorderBrush;  // 0x0EC8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush BackgroundBrush;  // 0x0F50, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush ChildBackgroundBrush;  // 0x0FD8, size 0x88
};
