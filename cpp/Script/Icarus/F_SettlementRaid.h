// /Script/Icarus.SettlementRaid
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/Settlement.generated.h

USTRUCT()
struct FSettlementRaid : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RaidStrength;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RaidStrengthPerLevel;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSettlementRaidWave> RaidSpawnWaves;  // 0x0020, size 0x10
};
