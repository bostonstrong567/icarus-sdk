// /Script/Icarus.TalentReward
// size 0x60, declared in Icarus/Source/Icarus/Talents/Model/Data/TalentRewards.h

USTRUCT()
struct FTalentReward
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> GrantedStats;  // 0x0000, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCharacterFlagsRowHandle> GrantedFlags;  // 0x0050, size 0x10
};
