// /Script/Icarus.BreakableRockData
// size 0xB8, declared in Icarus/Source/Icarus/DataStructs/BreakableRockData.h

USTRUCT()
struct FBreakableRockData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle ItemReward;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle PyriticCrustItemType;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDurableRowHandle Durable;  // 0x0048, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum RewardStat;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer Tags;  // 0x0070, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> BreakSound;  // 0x0090, size 0x28
};
