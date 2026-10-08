// /Script/Icarus.ItemRewards
// size 0x28, declared in Icarus/Source/Icarus/DataStructs/ItemReward.h

USTRUCT()
struct FItemRewards : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemRewardEntry> Rewards;  // 0x0018, size 0x10
};
