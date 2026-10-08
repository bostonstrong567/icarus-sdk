// /Game/UI/HUD/FResourcePromptInfo.FResourcePromptInfo
// size 0x1F8

USTRUCT()
struct FResourcePromptInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x0000, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCount;  // 0x01F0, size 0x4
};
