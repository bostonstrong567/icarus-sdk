// /Game/Data/UI/FDifficultyColour.FDifficultyColour
// size 0x40

USTRUCT()
struct FDifficultyColour
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Difficulty;  // 0x0028, size 0x18
};
