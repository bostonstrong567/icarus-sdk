// /Game/UI/HUD/FResourcePrompt.FResourcePrompt
// size 0x20

USTRUCT()
struct FResourcePrompt
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Type;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Icon;  // 0x0018, size 0x8
};
