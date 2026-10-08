// /Script/Icarus.SettlementRaidWave
// size 0x68, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementRaidWave
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScaledAISpawnWaveData WaveData;  // 0x0000, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinRaidStrengthBeforeSpawn;  // 0x0060, size 0x4
};
