// /Script/Icarus.AISpawner
// Derives from: AActor > UObject
// size 0x4E8, declared in Icarus/Source/Icarus/AI/AISpawner.h

UCLASS(MinimalAPI, Config=Engine)
class AAISpawner : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FTileSpawnData> WorldSpawnData;  // 0x0220, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* Template;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumberOfCachedSpawnPoints;  // 0x0238, size 0x4
    UPROPERTY(BlueprintAssignable) FGenerationCompleteSignature GenerationComplete;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SelectedTile;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FAISpawnConfigRowHandle SpawnConfig;  // 0x0254, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAutonomousSpawnsRowHandle> GlobalAutonomousSpawners;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<TSubclassOf<UIcarusAISpawnFilter>> SpawnRules;  // 0x0280, size 0x10
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) UIcarusStatContainer* StatContainer;  // 0x0290, size 0x8
protected:
    UPROPERTY(BlueprintReadOnly) FWorldData WorldData;  // 0x0298, size 0x160
    UPROPERTY() TMap<FAISetupRowHandle, float> LastAISetupSpawnTime;  // 0x03F8, size 0x50
    TArray<TTuple<FAISetupRowHandle,int>,TSizedDefaultAllocator<32> > LatentAIDeathTimes;  // 0x0448, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UAISpawnBehaviour*> ActiveAutonomousSpawners;  // 0x0458, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> ActorsPendingCleanup;  // 0x0468, size 0x10
    UPROPERTY() TMap<FBiomesRowHandle, bool> BlockedBiomes;  // 0x0478, size 0x50
private:
    UPROPERTY() AIcarusEQSTestingPawn* TestingPawn;  // 0x04C8, size 0x8
    int32 TileIndex;  // 0x04D0, not reflected
    bool bIsPerformingSingleTileGeneration;  // 0x04D4, not reflected
    TArray<FAutonomousSpawnsRowHandle,TSizedDefaultAllocator<32> > AutonomousSpawnsPendingLoad;  // 0x04D8, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddActorPendingCleanup(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void BlockBiomeDynamicSpawns(const FBiomesRowHandle& Biome, bool bBlock);  // parameters 0x19
    UFUNCTION() void ClearLatentNPCDeaths();
    UFUNCTION(BlueprintCallable) void GenerateCachedSpawnPoints();
    UFUNCTION(BlueprintCallable) void GenerateSingleTileSpawnPoints();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetDebugSpawnBlockers() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) float GetLastAISetupDeathTime(FAISetupRowHandle AISetup);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) float GetLastAISetupSpawnTime(FAISetupRowHandle AISetup);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumLatentDeathsForAISetup(FAISetupRowHandle AISetup);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) void GetSpawnedActors(TArray<AActor*>& OutActors) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTotalNumNPCsUndergoingLatentDeath() const;  // parameters 0x4
    UFUNCTION() void InitialiseBehavioursForSpawnConfig(const FAISpawnConfigData& SpawnConfig);  // parameters 0xB0
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsBiomeDynamicSpawnBlocked(const FBiomesRowHandle& Biome) const;  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsBiomeDynamicSpawnLocationBlocked(const FVector& Location) const;  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsNPCSpawned(AIcarusNPCGOAPCharacter* NPC) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool IsSpawnPointValid(const FVector& InLocation, const FAISetupEnum& InAISetup);  // parameters 0x21
    UFUNCTION() void OnEQSQueryCompleted(const TArray<FVector>& EQSResults);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnNPCKilled(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnProspectDataSet();
    UFUNCTION() bool PerformNextTileEQS();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void PrintDebugInformation() const;
    UFUNCTION(BlueprintCallable) void RemoveActorPendingCleanup(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDebugSpawnBlockers(bool bEnabled);  // parameters 0x1
    UFUNCTION() void SetupAutonomousSpawner(const FAutonomousSpawnsRowHandle& AutonomousSpawnHandle);  // parameters 0x18
    UFUNCTION() void SetupAutonomousSpawnersPendingLoad();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetupNPC(AIcarusNPCGOAPCharacter* SpawnedNPC);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void SpawnPointGenerationComplete();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UnlinkSpawnedNPC(AActor* NPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void VisualiseTilePosition();
    UFUNCTION() void WorldStatsSet();

    // Virtual functions that start here:
    //   OnNPCKilled_Implementation, OnProspectDataSet_Implementation, SetupNPC_Implementation
};
