// /Game/BP/Systems/BP_IcarusGameMode.BP_IcarusGameMode_C
// Derives from: AIcarusGameModeSurvival > AIcarusGameModeBase > AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x922, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Game)
class ABP_IcarusGameMode_C : public AIcarusGameModeSurvival
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0718, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBallisticPoolManager* BallisticPoolManager;  // 0x0720, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DropSpawn;  // 0x0730, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPostLoginDispatcher PostLoginDispatcher;  // 0x0738, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FColor> ColorChoices;  // 0x0748, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ColorIndex;  // 0x0758, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CurtainRaised;  // 0x075C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AController*> JoinedPlayers;  // 0x0760, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AController*> ToRemove;  // 0x0770, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDatabaseBuildingGrid> PendingBuildingsFromDatabase;  // 0x0780, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LogName;  // 0x0790, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FReqCheckProspectExpired Request;  // 0x07A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Spawned_Resources;  // 0x07B0, size 0x1, named "Spawned Resources"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ExoticVoxelsSpawned;  // 0x07B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Time_Initialised;  // 0x07B2, size 0x1, named "Time Initialised"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AveragePlayerStartLocation;  // 0x07B4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DebugTestProspectTimeMinutes;  // 0x07C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExoticVoxelSpawnChance;  // 0x07C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusActor> OverflowBagClassSoftRef;  // 0x07C8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AIcarusActor> LoadedOverflowBagClass;  // 0x07F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusActor> GraveOverflowBagClassSoftRef;  // 0x07F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AIcarusActor> LoadedGraveOverflowBagClass;  // 0x0820, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DeepMiningSpawned;  // 0x0828, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOrchestrationEventsEnum DatabaseReloadCompleteEvent;  // 0x0830, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, FTransientDropshipInfo> PendingDynamicDrops;  // 0x0840, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransientDropshipInfo> PendingPlayersTerrainLoad;  // 0x0890, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream ExtoicMetaSpawnStream;  // 0x08A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FoundFlag;  // 0x08A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterFlagsRowHandle StatToSpawnMetaDeposits;  // 0x08AC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APersistentBlockerSpawner* BlockerSpawner;  // 0x08C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FPlayerCharacterID, FTransientLandingPadInfo> PendingPlayerIDLandingPad;  // 0x08D0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DeepWoodVeinsSpawned;  // 0x0920, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LimestoneVeinsSpawned;  // 0x0921, size 0x1

    UFUNCTION(BlueprintCallable) void AddOrUpdatePlayerToPendingDropship(int32 GroupIndex, AIcarusPlayerControllerSurvival* Player);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AreAllGridsDoneAsyncProcessing(bool& NoQueuedGrids);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void AttemptDynamicDropZoneGeneration();
    UFUNCTION(BlueprintCallable) void BuildingsWaitingForReload();
    UFUNCTION(BlueprintCallable) void CheatExhaustAnExoticDeposit();
    UFUNCTION(BlueprintCallable) void CheatExhaustAnExoticPlant();
    UFUNCTION(BlueprintCallable) void CheatFullyMineExoticVoxel();
    UFUNCTION(BlueprintCallable) void CheatMaxAnEnzymeCompletion();
    UFUNCTION(BlueprintCallable) void CrackFISMVoxel(AActor* Attacker, AActor* Weapon, FHitResult HitInfo, int32 NumHits);  // parameters 0x9C
    UFUNCTION(BlueprintCallable) void CrackFISMVoxelDirect(AActor* Attacker, AActor* Weapon, FHitResult HitInfo, int32 NumHits, ABP_VoxelResource_Base_C* Voxel);  // parameters 0xA8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CreateAndFillOverflowBag(const FTransform& Transform, const TArray<FItemData>& ItemData, bool bIsGravestone, bool bForceSpawnAtLocation, TSubclassOf<AIcarusActor> ActorOverride);  // parameters 0x50
    UFUNCTION(BlueprintImplementableEvent) void DatabaseReloadComplete();
    UFUNCTION(BlueprintCallable) void DoSafeOverflowBagTransformCheck(FVector Start, FVector End, FVector HalfSize, FRotator Orientation, bool ShowDebug, FTransform& Transform, bool& Valid);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool DoTryReplenishExhaustedExotics();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DoesDeepOreExistAtTransform(TArray<ABP_Deep_Mining_Ore_Deposit_Base_C*>& ExistingDeepOreDeposits, FTransform QueryTransform, bool& DoesExist) const;  // parameters 0x41
    UFUNCTION() void ExecuteUbergraph_BP_IcarusGameMode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool FindProspectTalentFromPlayers(const FTalentsRowHandle& Talent);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void FindSafeOverflowBagTransform(FTransform DesiredTransform, FVector OverflowBagSize, int32 NumHaloChecks, float StartCheckHeightOffset, float EndCheckHeightOffset, float HaloCheckDistance, bool ShowDebug, FTransform& Transform, bool& Success);  // parameters 0x81
    UFUNCTION(BlueprintCallable) void GameModeLog(FString Log, AController* Controller);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FOreDepositRowHandle GetDeepOreType(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void GetOverflowBagClass(bool IsGravestone, TSubclassOf<AIcarusActor> Override, TSubclassOf<AIcarusActor>& OverflowBagClass);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void K2_OnLogout(AController* ExitingController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void MeteorDirectionChanged(FVector MeteorDirection);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ModifySessionEndTime(int32 SecondsToAdd);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnConnectedPlayerMetaRecheck(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnDynamicDropLocationFound(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnDynamicDropTerrainLoaded(const AIcarusPlayerControllerSurvival*& Player, int32 GroupIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnFailure_C8A3F8334060A167ADB9E199DE837B0C(FString ErrorReason);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFoundLandingPad(AActor* LandingPad, AIcarusPlayerControllerSurvival* Player);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLandingPadTerrainAnchor();
    UFUNCTION(BlueprintCallable) void OnLoaded_D18E07784085355D2849CEAE7FAC0EE7(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnPlayerLeftByDropship(AIcarusPlayerControllerSurvival* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnProspectInfoFetched();
    UFUNCTION(BlueprintCallable) void OnSuccess_C8A3F8334060A167ADB9E199DE837B0C();
    UFUNCTION(BlueprintCallable) void PickProspectMetaSpawns(FIcarusProspect Prospect, bool RemoveMined, FRandomStream RandomStream, TMap<ABP_IcarusMetaSpawn_C*, int32>& MetaSpawns);  // parameters 0x330
    UFUNCTION(BlueprintCallable) void PostLoginDispatcher__DelegateSignature(APlayerController* NewPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PostReloadResolveFeatures();
    UFUNCTION(BlueprintImplementableEvent) void RaiseTheCurtain();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Replenish_Exotic_Voxels();  // named "Replenish Exotic Voxels"
    UFUNCTION(BlueprintCallable) void Replenish_World_Exotics(bool& Replenished);  // parameters 0x1, named "Replenish World Exotics"
    UFUNCTION(BlueprintCallable) void ReplenishExoticPlants();
    UFUNCTION(BlueprintCallable) void ResetGeyserCompletions();
    UFUNCTION(BlueprintCallable) void Resolve_Deep_Mining_Wood_Veins();  // named "Resolve Deep Mining Wood Veins"
    UFUNCTION(BlueprintCallable) void Resolve_Exotic_Plants();  // named "Resolve Exotic Plants"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ResolveBlockers();
    UFUNCTION(BlueprintCallable) void ResolveDeepMining();
    UFUNCTION(BlueprintCallable) void ResolveDeepMiningLimestoneVeins();
    UFUNCTION(BlueprintCallable) void ResolveExoticSpawnVoxels();
    UFUNCTION(BlueprintCallable) void ResolveMetaDeposits(bool RemoveMined, bool& Replenished);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ResolvePlayerDependantFeatures();
    UFUNCTION(BlueprintCallable) void RestoreFLODGlobalInstances();
    UFUNCTION(BlueprintCallable) void RestoreFLODRecordInstances(UFLODRecord* Record);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool SetupTestProspectInfo();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SpawnOverflowForReturnedItems(const TArray<FItemData>& Items, AActor* AroundActor);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* SpawnSplineActorFromSavedState(const FTransform& Transform, int32 SplineTypeEnum);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool StartFindingRocketSpawnForPlayer(int32 SelectedGroupIndex, AIcarusPlayerControllerSurvival* Player);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Try_Find_Nearby_Player_Landing_Pad(AIcarusPlayerControllerSurvival* Player, float MaxDistance, FVector CompareLocation, bool& FoundLandingPad, FVector& OutLocation);  // parameters 0x28, named "Try Find Nearby Player Landing Pad"
    UFUNCTION(BlueprintCallable) void TryFindPlayerLandingPad(AIcarusPlayerControllerSurvival* Player, bool& FoundLandingPad);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void Update_Prospect_Stats();  // named "Update Prospect Stats"
};
