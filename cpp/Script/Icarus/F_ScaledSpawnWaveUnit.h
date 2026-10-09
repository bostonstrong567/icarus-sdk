// /Script/Icarus.ScaledSpawnWaveUnit
// size 0x60, declared in Icarus/Source/Icarus/AI/ScaledAISpawnWaveData.h

USTRUCT()
struct FScaledSpawnWaveUnit
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreature;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpawnWeight;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesRowHandle SpawnWeightScalingRule;  // 0x0034, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BaseSpawnCount;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSpawnCount;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MinMaxSpawnLevel;  // 0x0054, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnDelay;  // 0x005C, size 0x4
};
