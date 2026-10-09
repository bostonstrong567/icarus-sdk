// /Script/Icarus.ScaledAISpawnWaveData
// size 0x60, declared in Icarus/Source/Icarus/AI/ScaledAISpawnWaveData.h

USTRUCT()
struct FScaledAISpawnWaveData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FScaledSpawnWaveUnit> SpawnedAIConfig;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesRowHandle SpawnCountScaling;  // 0x0010, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesRowHandle SpawnFrequencyScaling;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesRowHandle SpawnedAILevelScaling;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSpawnedUnits;  // 0x0058, size 0x4
};
