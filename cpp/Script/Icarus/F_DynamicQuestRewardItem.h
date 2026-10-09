// /Script/Icarus.DynamicQuestRewardItem
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DynamicQuestRewardItemsLibrary.generated.h

USTRUCT()
struct FDynamicQuestRewardItem : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRewardItemEntry> Rewards;  // 0x0018, size 0x10
};
