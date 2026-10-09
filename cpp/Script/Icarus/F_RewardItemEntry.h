// /Script/Icarus.RewardItemEntry
// size 0x24, declared in Icarus/Source/Icarus/Systems/Quests/DynamicQuestRewardItem.h

USTRUCT()
struct FRewardItemEntry
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Item;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinimumStack;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaximumStack;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Weighting;  // 0x0020, size 0x4
};
