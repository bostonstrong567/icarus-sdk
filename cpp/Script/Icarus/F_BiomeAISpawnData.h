// /Script/Icarus.BiomeAISpawnData
// size 0x78, declared in Icarus/Source/Icarus/AI/AISpawnConfigData.h

USTRUCT()
struct FBiomeAISpawnData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISpawnListItemData> AISpawnList;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FWorldStatsEnum, FAISpawnListItemData> WorldStatInjection;  // 0x0010, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BiomeSpawnDensity;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAutonomousSpawnsRowHandle> RelevantAutonomousSpawners;  // 0x0068, size 0x10
};
