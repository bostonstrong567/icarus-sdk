// /Script/Icarus.QuestRewardItemEntry
// size 0x1C, declared in Icarus/Source/Icarus/Systems/Quests/DynamicQuestReward.h

USTRUCT()
struct FQuestRewardItemEntry
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDynamicQuestRewardItemsRowHandle Item;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bScales;  // 0x0018, size 0x1
};
