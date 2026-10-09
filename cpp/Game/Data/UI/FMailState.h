// /Game/Data/UI/FMailState.FMailState
// size 0x2C8

USTRUCT()
struct FMailState
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle ButtonStyles;  // 0x0000, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<E_ButtonState>, FSlateColor> TextColour;  // 0x0278, size 0x50
};
