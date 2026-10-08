// /Game/BP/AI/BP_AISpawner.BP_AISpawner_C
// Derives from: AAISpawner > AActor > UObject
// size 0x7FC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_AISpawner_C : public AAISpawner
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x04F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AmountToSpawn;  // 0x04F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedActors;  // 0x0500, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnRadius;  // 0x0510, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlayerDistance;  // 0x0514, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnLocation;  // 0x0518, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpawningActivated;  // 0x0524, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, ActorArrayStruct> TetheredAIMap;  // 0x0528, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* NextTetherTarget;  // 0x0578, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ActorArrayStruct CurrentTethers;  // 0x0580, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TetherCleanupTimer;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> StoredGameplayTextures;  // 0x05A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UGameplayTexture>> HeatmapTextures;  // 0x05B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPCharacter* SpawnedNPC;  // 0x05C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultSpawnDensity;  // 0x05C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsRunningSpawnEQS;  // 0x05CC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusNPCGOAPCharacter*> SpawnedChildren;  // 0x05D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_WeatherController_C* WeatherControllerRef;  // 0x05E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBiomesRowHandle, int32> BiomePerceptionModifiers;  // 0x05E8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISpawnConfigData Spawn_Config;  // 0x0638, size 0xB0, named "Spawn Config"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBPLogVerbosity LoggingVerbosity;  // 0x06E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaximumAILevel;  // 0x06EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinimumAILevel;  // 0x06F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GeneratedLevel;  // 0x06F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FVector, float> RecentSpawnBlockerLocations;  // 0x06F8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldBlockSpawningNearRecentDeath;  // 0x0748, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SpawnBlockerUpdateTimer;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnBlockerRadius;  // 0x0758, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnBlockerDuration;  // 0x075C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugSpawnBlockers;  // 0x0760, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSpawnBlocker> ActiveSpawnBlockers;  // 0x0768, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ProtectedActorKey;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSpawningActor;  // 0x0780, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle CurrentAISpawnType;  // 0x0784, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpawnMultipleAI;  // 0x079C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusNPCGOAPCharacter*> SpawnedFollowers;  // 0x07A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle CurrentAIEpicCreature;  // 0x07B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPCharacter* LastSpawnedFollower;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSubclassOf<UObject>> AsyncLoadedClasses;  // 0x07D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldSpawnGroup;  // 0x07E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle IceMammothWorldStat;  // 0x07E4, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintPure) void Check_Manual_Spawn(FAISetupEnum AISetup, bool& CanSpawn);  // parameters 0x11, named "Check Manual Spawn"
    UFUNCTION(BlueprintCallable) void CheckAIDistance(ABP_IcarusNPCGOAPCharacter_C* AI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckLocation(FVector Location, bool& Found) const;  // parameters 0xD
    UFUNCTION(BlueprintCallable) void CleanupDestroyedActors();
    UFUNCTION(BlueprintCallable) void Debug_Biome_Perception_Modifiers();  // named "Debug Biome Perception Modifiers"
    UFUNCTION(BlueprintCallable) void DebugDistances();
    UFUNCTION(BlueprintCallable) void EQSFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_AISpawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindSpawnLocation(FVector& Locaiton, bool& Return);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetDebugSpawnBlockers() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetModifiedSpawnWeightForAI(FAISetupRowHandle InAIType, FVector AtLocation, int32 OriginalWeight, int32& ModifiedWeight);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void GetNearbyNPCs(FVector InOrigin, TArray<ABP_IcarusNPCGOAPCharacter_C*>& OutputNPCs) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GetNewTetherTarget(AActor*& OutControllerTether);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNumAliveNPCs(bool IncludeLatentDeaths, int32& Num) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) int32 GetNumberOfAINearTarget(AActor* Target);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSoftClassArray(const TSoftClassPtr<AActor>& MainClass, TArray<FAISetupRowHandle>& AdditionalAI, TArray<TSoftClassPtr<AActor>>& Classes);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void GetSpawnDensityForLocation(FVector WorldLocation, int32& Biome_Spawn_Density);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) void GetSpawnedActors(TArray<AActor*>& OutActors) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTetherDebugName(AActor* Tether, FName& Name) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTotalSpawnWeightForBiome(FVector Locarion, int32& TotalWeight);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsNPCSpawned(AIcarusNPCGOAPCharacter* NPC) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MC_PreLoadClass(const TArray<TSoftClassPtr<UObject>>& AssetClasses);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ModifySpawnWeights(FVector AtLocation, int32 WeightedListUID, TMap<FAISpawnListItemData, int32> BaseSpawnWeights);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void NearWater(FVector Location, int32 Distance, bool& NearWater);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnBiomePerceptionUpdated(int32 NewValue, FBiomesRowHandle Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnCustomProspectStatsUpdated();
    UFUNCTION(BlueprintCallable) void OnEQSComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B799469007(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_E27239C84FEE2ECDA1A4DC9F386AA4C5(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_E27239C84FEE2ECDA1A4DC9F4FE50C50(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_E484710A49B479B889B10EB5F9BB56D9(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnNPCDeath(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnSeedUpdated(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PickIrradiatedNPC(FAISetupRowHandle& AISetup, FEpicCreaturesRowHandle& EpicCreature);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PickNewAIToSpawn(FVector AtLocation, bool ManualSpawn, FAISetupRowHandle& Output, FEpicCreaturesRowHandle& EpicCreature, int32& Level, bool& ValidSpawn);  // parameters 0x45
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void PrintDebugInformation() const;
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReorganiseCleanupQueue();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDebugSpawnBlockers(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetupNPC(AIcarusNPCGOAPCharacter* SpawnedNPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SpawnActor(AActor* CustomTetherTarget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SpawnFollower(const FAISetupRowHandle& AISetup, int32 Number);  // parameters 0x1C
    UFUNCTION(BlueprintImplementableEvent) void SpawnPointGenerationComplete();
    UFUNCTION(BlueprintCallable) void TetherActor(const AActor*& Actor, const AActor*& TetherTarget);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TryDestroyAI();
    UFUNCTION(BlueprintCallable) void TrySpawn();
    UFUNCTION(BlueprintCallable) void TrySpawnAdditionalCreatureAroundAttractor();
    UFUNCTION(BlueprintCallable) void TrySpawnJuvenileAroundLocation(FVector WorldLocation, FAISetupRowHandle ParentSetup, AIcarusNPCGOAPCharacter*& JuvenileCharacter);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UnlinkSpawnedNPC(AActor* NPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UntetherActor(const AActor*& Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateBiomePerceptionModifiers();
    UFUNCTION(BlueprintCallable) void UpdateSpawnBlockers();
    UFUNCTION(BlueprintCallable) void ValidateAndSpawn();
    UFUNCTION(BlueprintCallable) void WantsSpawnJuvenile(FVector WorldLocation, FAISetupRowHandle ParentSetup, bool& WantsSpawn, FVector& Position, FAISetupRowHandle& JuvenileType, int32& Level);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void WeatherEventCompleted(const FBiomesRowHandle& Biome, const FWeatherEventsRowHandle& Event);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void WeatherEventStarted(const FBiomesRowHandle& Biome, const FWeatherEventsRowHandle& Event);  // parameters 0x30
};
