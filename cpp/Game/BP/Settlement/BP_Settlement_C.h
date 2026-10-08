// /Game/BP/Settlement/BP_Settlement.BP_Settlement_C
// Derives from: ASettlement > AIcarusActor > AActor > UObject
// size 0xAA8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Settlement_C : public ASettlement, public ISpawnBlockerInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x07C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_Settlement_C* BP_UIProjectionComponent_Settlement;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNavModifierComponent* NavModifier;  // 0x07E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInstancedStaticMeshComponent* InstancedStaticMesh_Walls;  // 0x07E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Collision_Interact;  // 0x0808, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget_Status;  // 0x0810, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0818, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0820, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WallNeedsUpdate;  // 0x0828, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PreviousSettlementRange;  // 0x082C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PreviewWallTypeEnum;  // 0x0830, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCTask DecisionRequestTask;  // 0x0834, size 0x54
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> GateActors;  // 0x0888, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> ActiveRaidSpawns;  // 0x0898, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FSettlementRaidsRowHandle ActiveRaid;  // 0x08A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle RaidTickTimer;  // 0x08C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScaledAISpawnWaveData ActiveRaidWave;  // 0x08C8, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* RaidEQS;  // 0x0928, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RaidSpawnRadius;  // 0x0930, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentWaveSpawnCountTarget;  // 0x0934, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScaledSpawnWaveUnit NextRaidSpawn;  // 0x0938, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FAISetupRowHandle, int32> CompletedRaidSpawns;  // 0x0998, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FAISetupRowHandle, float> LastRaidSpawnTime;  // 0x09E8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentWaveIndex;  // 0x0A38, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float RaidStartTime;  // 0x0A3C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float RaidEndTime;  // 0x0A40, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float RaidProgress;  // 0x0A44, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ActiveRaidStrength;  // 0x0A48, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumTotalRaidAISpawned;  // 0x0A4C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumTotalRaidAIKilled;  // 0x0A50, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasCompletedRaidSpawning;  // 0x0A54, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FGuid, UWidgetComponent*> ActiveTaskWidgets;  // 0x0A58, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ActiveEventChanged();
    UFUNCTION(BlueprintCallable) void BindToEvents();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanSpawnRaidUnit() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ClearFLODWithinBoundary();
    UFUNCTION(BlueprintCallable) void ConfigureSpawnedRaidUnit(AActor* SpawnedActor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Settlement(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetBoundaryAffectingActors(TArray<AActor*>& OutActors) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FTransform GetNPCSpawnTransform(const FSettlementNPC& NPC) const;  // parameters 0x140
    UFUNCTION(BlueprintCallable) void GetNumRaidSpawnsOfType(FAISetupRowHandle AISetup, int32& NumActive, float& YoungestAge);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetRaidProgress(float& CompletionPercent, float& TimeRemainingPercent) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetSettlementWallMeshes(UStaticMesh*& WallMesh, USkeletalMesh*& GateMesh, UAnimSequence*& GateAnimation) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnAttractorEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnBlockerEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTotalRaidAISpawnedThisWave(int32& TotalUnitsSpawned) const;  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void NPCAdded(FGuid NpcId);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnBuildingRegistered(ASettlementBuilding* Building);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnBuildingUnregistered(ASettlementBuilding* Building);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnInventoryItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnRep_ActiveRaid();
    UFUNCTION(BlueprintCallable) void OnSpawnedRaidAIDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnSpawnedRaidAIEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnTaskCompleted(const FSettlementNPCTask& Task);  // parameters 0x54
    UFUNCTION(BlueprintImplementableEvent) void OnTerrainAnchorStateChanged();
    UFUNCTION(BlueprintCallable) void PickNextRaidAIToSpawn(const FScaledAISpawnWaveData& SpawnConfig, FScaledSpawnWaveUnit& SeletedSpawn, bool& HasCompletedWave, bool& ValidSpawn);  // parameters 0xC2
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ResetWall();
    UFUNCTION(BlueprintCallable) void ResolveRaid(bool WasSuccessful);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SendChatMessage(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ServerOnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void SettlementLeveledUp(int32 NewLevel);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnRaidAI(FVector WorldLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void TickActiveRaid();
    UFUNCTION(BlueprintCallable) void TickRaidSpawns();
    UFUNCTION(BlueprintCallable) void TryResolveRaid(const FSettlementEventsRowHandle& EventRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void TrySpawnRaidAI();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void TryUpdateTaskProgress(const FSettlementNPCTask& Task, float ProspectTimeDelta);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void UpdateInWorldTaskWidgets();
    UFUNCTION(BlueprintCallable) void UpdateRaidProgress();
    UFUNCTION(BlueprintCallable) void UpdateWall();
};
