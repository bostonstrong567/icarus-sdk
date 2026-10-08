// /Script/Icarus.WorldBossData
// size 0x108, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/WorldBossManager.generated.h

USTRUCT()
struct FWorldBossData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreature;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AWorldBossSpawner> SpawnerClass;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery SpawnerTagQuery;  // 0x0070, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UWorldBossBehaviour> BehaviourClass;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bReloadDeadBoss;  // 0x00E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapIconsRowHandle BossMapMarker;  // 0x00E4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanRespawnInPersistentProspects;  // 0x00FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStartsOnRespawnCooldown;  // 0x00FD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RespawnTimeInSeconds;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RespawnTimeRandomDeviation;  // 0x0104, size 0x4
};
