// /Script/Icarus.HordeCreatureSetup
// size 0xA0, declared in Icarus/Source/Icarus/Systems/Horde/HordeWave.h

USTRUCT()
struct FHordeCreatureSetup
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle Creature;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle Epic;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> AdditionalStats;  // 0x0030, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LevelOverride;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D NumberToSpawnAtATime;  // 0x0084, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalToSpawn;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExtraSpawnCountPerAdditionalNearbyPlayer;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialSpawnDelay;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D TimeBetweenSpawns;  // 0x0098, size 0x8
};
