// /Script/Icarus.TalentHoverConfig
// size 0x560, declared in Icarus/Source/Icarus/Talents/Model/Data/TalentView.h

USTRUCT()
struct FTalentHoverConfig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor NormalTextColor;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor HoveredTextColor;  // 0x0028, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor PressedTextColor;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DisabledTextColor;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor NormalIconColor;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor HoveredIconColor;  // 0x00C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor PressedIconColor;  // 0x00F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor DisabledIconColor;  // 0x0118, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle ButtonStyle;  // 0x0140, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor LineColor;  // 0x03B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush NormalCountBrush;  // 0x03C8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush HoveredCountBrush;  // 0x0450, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush PressedCountBrush;  // 0x04D8, size 0x88
};
