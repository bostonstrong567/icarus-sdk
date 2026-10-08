// /Game/BP/AI/BP_ManualAISpawnPoint.BP_ManualAISpawnPoint_C
// Derives from: AActor > UObject
// size 0x311, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ManualAISpawnPoint_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTerrainAnchorComponent* TerrainAnchor;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* TextRender;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreature;  // 0x0248, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AIToSpawn;  // 0x0260, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinSpawnLevel;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSpawnLevel;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldRespawn;  // 0x0280, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RespawnDelay;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RespawnDelayDeviation;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x028C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SpawnTimer;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SpawnedAI;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasAIBeenKilled;  // 0x02A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldTetherToSpawner;  // 0x02A9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TetherDistance;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FAiKilled AiKilled;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FilterSpawnWithEQS;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* SpawnEQSTemplate;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEnvQueryRunMode> SpawnEQSMode;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FreezeAIOnTerrainInvalidation;  // 0x02D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCurrentlyFrozen;  // 0x02D2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> PreviousMovementMode;  // 0x02D3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FAIKilled_SpawnerArgument AIKilled_SpawnerArgument;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSpawned Spawned;  // 0x02E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ApplyRegenOnReturn;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TeleportOnReturnIfBlocked;  // 0x02F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasBroadcastDeathEvent;  // 0x02FA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CleanupAIOnTerrainInvalidation;  // 0x02FB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseMaxSpawnDistanceInsteadOfAnchor;  // 0x02FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlayerSpawnDistance;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CleanupAIOnEndPlay;  // 0x0304, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AQuestMarker* LinkedQuestMarker;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SkipSpawnPointProjection;  // 0x0310, size 0x1

    UFUNCTION(BlueprintCallable) void AIKilled_SpawnerArgument__DelegateSignature(AActor* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AiKilled__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CalculateSpawnLevel(int32& Level);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CanSpawnAI(bool& CanSpawn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CleanupAI(FString Reason);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DoSpawn(const FVector& Point);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_ManualAISpawnPoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnEQSComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnSeedUpdated(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSpawnedAIDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnSpawnedAIEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void RaiseCurtain();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSpawnedAIFrozen(bool IsFrozen);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupAI(AActor* AI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SpawnAI(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Spawned__DelegateSignature(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StartSpawnTimer();
    UFUNCTION(BlueprintCallable) void TrySpawn();
    UFUNCTION(BlueprintCallable) void UpdateSpawnTimer();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
