// /Game/BP/AI/Basic/Caves/BP_IcarusCaveAISpawner.BP_IcarusCaveAISpawner_C
// Derives from: AIcarusCaveAISpawner > AIcarusActor > AActor > UObject
// size 0x40C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusCaveAISpawner_C : public AIcarusCaveAISpawner, public IBP_CaveAISpawnInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UObject* BP_CaveSpawnerHelperComponent;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRequestSpawnerBake RequestSpawnerBake;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnActorsToBake;  // 0x0348, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlayerDistanceBeforeSpawn;  // 0x0358, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlayerDistanceBeforeDespawn;  // 0x035C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusGameStateSurvival* GameState;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> RuntimeSpawnedActors;  // 0x0370, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GameSeed;  // 0x0380, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugUseRandomSeed;  // 0x0384, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RespawnTimer;  // 0x0388, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RespawnTimerRandomDeviation;  // 0x038C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpawnOnCaveEntry;  // 0x0390, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedCaveActor;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCavePrefabAsset* LinkedCavePrefab;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AdditionalPlayerSpawnCountPlusPercent;  // 0x03A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DehumidifierPreventsSpawning;  // 0x03AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCaveActorSpawnTimeStamp> LoadCache;  // 0x03B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCaveActorSpawnTimeStamp Temp;  // 0x03C0, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedActorsPendingCleanup;  // 0x03E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CleanupActorTimer;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SecondaryAISpawns;  // 0x03F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OrphanedAILifespan;  // 0x0408, size 0x4

    UFUNCTION(BlueprintCallable) void Action_Database_Restore();  // named "Action Database Restore"
    UFUNCTION(BlueprintCallable) void ArePlayersInCaveAndNearby(bool& Nearby);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void BakeDownAndDestroySelectedSpawnActors();
    UFUNCTION(BlueprintCallable) void CanRespawn(bool& CanRespawn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckDehumidifierAuraAtLocation(FVector Location, bool& HasDehumidifierAura);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void CleanupCaveCreatures();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusCaveAISpawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterSpawnTransforms(TArray<FTransform>& TransformArrayReference);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAllBakedWorldSpaceSpawnLocations(TArray<FVector>& SpawnLocations);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAllBakedWorldSpaceSpawnTransforms(TArray<FTransform>& SpawnTransforms);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetRandomNumberToSpawn(const FCaveSpawnConfig& CaveSpawnConfig, int32& Output);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void InitialiseSpawnedActor(AActor* SpawnedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAdditionalActorSpawned(AActor* SpawnedActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnRestoredFromDatabase();
    UFUNCTION(BlueprintCallable) void OnSeedInitialised(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSpawnedActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnWorldStatsSet();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RequestSpawnerBake__DelegateSignature();
    UFUNCTION(BlueprintCallable) void SpawnCaveCreatures(bool ForceSpawn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickCleanupActors();
    UFUNCTION(BlueprintCallable) void UnbakeAndSpawnStoredActors();
};
