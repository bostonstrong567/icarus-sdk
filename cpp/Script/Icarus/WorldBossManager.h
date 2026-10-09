// /Script/Icarus.WorldBossManager
// Derives from: AIcarusActor > AActor > UObject
// size 0x368, declared in Icarus/Source/Icarus/Systems/WorldBoss/WorldBossManager.h

UCLASS(Config=Engine)
class AWorldBossManager : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FWorldBossKilledSignature WorldBossKilled;  // 0x02D0, size 0x10
    UPROPERTY() TArray<AWorldBossSpawner*> WorldBossSpawners;  // 0x02E0, size 0x10
protected:
    UPROPERTY() TArray<FSpawnedWorldBossData> SpawnedBossConfig;  // 0x02C0, size 0x10
private:
    bool bHasReloaded;  // 0x02F0, not reflected
    int32 CurrentBossID;  // 0x02F4, not reflected
    FTimerHandle RespawnTimer;  // 0x02F8, not reflected
    FProspectListRowHandle CurrentProspectRow;  // 0x0300, not reflected
    TMap<FWorldBossesRowHandle,FVector2D,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorldBossesRowHandle,FVector2D,0> > CurrentWorldBossConfig;  // 0x0318, not reflected
public:
    UFUNCTION(BlueprintCallable) void CleanupExistingWorldBosses();
    UFUNCTION(BlueprintCallable) void DestroyExistingWorldBoss(AWorldBossSpawner* WorldBoss, bool bOnlyDestroyDeadBosses, bool bIgnoreAliveRelevantBosses);  // parameters 0xA
    UFUNCTION() bool DoesBossConfigRequireReset() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesCurrentProspectSupportRespawning() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesProspectConfigRequireRespawn(const FProspectListRowHandle& Prospect) const;  // parameters 0x19
    UFUNCTION() void GenerateNewBossesToSpawn(const FProspectListRowHandle& OptionalProspect);  // parameters 0x18
    UFUNCTION() bool GetRandomSpawnTransform(const FWorldBossData& BossData, FTransform& SpawnTransform);  // parameters 0x141
    UFUNCTION(BlueprintCallable) TArray<FSpawnedWorldBossData> GetSpawnedBossData();  // parameters 0x10
    UFUNCTION() bool GetSpawnedBossDataForSpawner(AWorldBossSpawner* Spawner, FSpawnedWorldBossData& OutData);  // parameters 0x71
    UFUNCTION(BlueprintCallable) TArray<AWorldBossSpawner*> GetWorldBossOfType(const FWorldBossesRowHandle& WorldBoss);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasLootBeenGenerated(AWorldBossSpawner* Spawner);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void MarkLootGenerated(AWorldBossSpawner* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnSpawnedBossKilled(AWorldBossSpawner* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnSpawnerTransformUpdated(AWorldBossSpawner* Spawner);  // parameters 0x8
    UFUNCTION() void OnWorldBossSpawnerWantsCleanup(AWorldBossSpawner* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PutBossSpawnerOnRespawnCooldown(AWorldBossSpawner* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ResetWorldBossesToOriginalProspectState();
    UFUNCTION() bool RespawnWorldBoss(int32 BossID);  // parameters 0x5
    UFUNCTION() void SetSpawnedBossData(TArray<FSpawnedWorldBossData> InData);  // parameters 0x10
    UFUNCTION() void SetSpawnedBossDataForSpawner(AWorldBossSpawner* Spawner, const FSpawnedWorldBossData& NewData);  // parameters 0x70
    UFUNCTION() void SetupBossManager();
    UFUNCTION() void SetupRespawnTimer();
    UFUNCTION(BlueprintNativeEvent) int32 SetupWorldBoss(const FWorldBossData& BossData, const FWorldBossesRowHandle& Handle);  // parameters 0x124
    UFUNCTION(BlueprintCallable) void SetupWorldBossManagerWithData(const FProspectListRowHandle& Prospect);  // parameters 0x18
    UFUNCTION() void SpawnAllBosses();
    UFUNCTION() void SpawnRelevantObjectsForBoss(const FSpawnedWorldBossData& BossConfig);  // parameters 0x60
    UFUNCTION(BlueprintCallable) bool SpawnWorldBossOfType(const FWorldBossesRowHandle& WorldBoss);  // parameters 0x19
    UFUNCTION() void TryRespawnWorldBosses();

    // Virtual functions that start here:
    //   OnSpawnedBossKilled_Implementation, OnSpawnerTransformUpdated_Implementation
    //   SetupWorldBoss_Implementation
};
