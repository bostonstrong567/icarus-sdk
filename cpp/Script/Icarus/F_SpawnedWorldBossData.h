// /Script/Icarus.SpawnedWorldBossData
// size 0x60, declared in Icarus/Source/Icarus/Systems/WorldBoss/WorldBossManager.h

USTRUCT()
struct FSpawnedWorldBossData
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FWorldBossesRowHandle WorldBoss;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FTransform InitialSpawnTransform;  // 0x0020, size 0x30
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bHasBeenKilled;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 BossID;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float ScheduledRespawnTime;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bHasGeneratedBossLoot;  // 0x005C, size 0x1
};
