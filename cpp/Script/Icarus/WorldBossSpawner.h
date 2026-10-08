// /Script/Icarus.WorldBossSpawner
// Derives from: AIcarusActor > AActor > UObject
// size 0x358, declared in Icarus/Source/Icarus/Systems/WorldBoss/WorldBossSpawner.h

UCLASS(Config=Engine)
class AWorldBossSpawner : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FWorldBossesRowHandle WorldBoss;  // 0x02C0, size 0x18
    UPROPERTY(BlueprintAssignable) FSpawnerBecomeRelevantSignature SpawnerBecomeRelevant;  // 0x02D8, size 0x10
    UPROPERTY(BlueprintAssignable) FSpawnerBecomeIrrelevantSignature SpawnerBecomeIrrelevant;  // 0x02E8, size 0x10
    UPROPERTY(BlueprintAssignable) FSpawnedBossKilledSignature SpawnedBossKilled;  // 0x02F8, size 0x10
    UPROPERTY(BlueprintAssignable) FSpawnedBossWantsCleanupSignature SpawnedBossWantsCleanup;  // 0x0308, size 0x10
    UPROPERTY(BlueprintAssignable) FSpawnerWorldTransformUpdatedSignature SpawnerWorldTransformUpdated;  // 0x0318, size 0x10
    UPROPERTY(BlueprintReadOnly) bool bIsRelevant;  // 0x0328, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bHasBossBeenKilled;  // 0x0329, size 0x1
    UPROPERTY(BlueprintReadOnly) int32 BossID;  // 0x032C, size 0x4
    UPROPERTY(Instanced, BlueprintReadOnly) UIcarusMapIconComponent* MapIconComponent;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UWorldBossBehaviour* Behaviour;  // 0x0338, size 0x8
    UPROPERTY(BlueprintReadOnly) bool bKillBossAfterSpawn;  // 0x0340, size 0x1
    UPROPERTY(BlueprintReadWrite) bool bAutoCleanUp;  // 0x0341, size 0x1
    UPROPERTY(BlueprintReadOnly) AActor* SpawnedBossActor;  // 0x0348, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool bIsPendingCleanup;  // 0x0350, private

    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetSpawnedBossActor() const;  // parameters 0x8
    UFUNCTION() void InitialiseSpawner(const FWorldBossesRowHandle& InWorldBoss, int32 ID, bool bIsBossDead);  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSpawnerPendingCleanup() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MarkBossAsDead();
    UFUNCTION(BlueprintNativeEvent) void OnBossKilled(UActorState* BossActorState);  // parameters 0x8
    UFUNCTION() void OnRep_WorldBoss();
    UFUNCTION(BlueprintNativeEvent) void OnWorldBossDataUpdated();
    UFUNCTION() void SetAIRelevant(bool bNewRelevancy);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) AActor* SpawnBoss();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateSpawnerTransform(FTransform NewTransform);  // parameters 0x30

    // Virtual functions that start here:
    //   OnBossKilled_Implementation, OnWorldBossDataUpdated_Implementation, SpawnBoss_Implementation
};
