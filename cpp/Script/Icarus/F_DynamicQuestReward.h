// /Script/Icarus.DynamicQuestReward
// size 0x60, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DynamicQuestRewardsLibrary.generated.h

USTRUCT()
struct FDynamicQuestReward : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestRewardItemEntry> PotentialRewards;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Weighting;  // 0x0058, size 0x4
};
