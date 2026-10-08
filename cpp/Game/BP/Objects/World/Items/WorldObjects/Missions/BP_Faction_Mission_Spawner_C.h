// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_Spawner.BP_Faction_Mission_Spawner_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Spawner_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_Spawner;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Spawner;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SpawnerFX;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HitableBehaviour_CreatureSpawner_C* BP_HitableBehaviour_CreatureSpawner;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* DestructibleMesh;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDurableComponent* Durable;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DestructionParticle;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SpawnLocation;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* DestructionAudio;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bDestroyed;  // 0x0380, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bActive;  // 0x0381, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle Epic;  // 0x0384, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle Creature;  // 0x039C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenSpawns;  // 0x03B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCreatureSpawned CreatureSpawned;  // 0x03B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCreatures;  // 0x03C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumPlayerDistance;  // 0x03CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> Creatures;  // 0x03D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSpawnOneThenStop;  // 0x03E0, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bStartedSpawning;  // 0x03E1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalMaximumSpawnCount;  // 0x03E4, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 RecordedNumSpawned;  // 0x03E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TetherDistance;  // 0x03EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ApplyRegenOnReturn;  // 0x03F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TeleportOnReturnIfBlocked;  // 0x03F1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CleanupAIOnTerrainAnchorInvalidation;  // 0x03F2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum Scaling_DenHealth;  // 0x03F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum Scaling_CreatureLevel;  // 0x0408, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BonusScaledCreatureLevel;  // 0x0418, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum Scaling_ConcurrentCreatureCount;  // 0x0420, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum Scaling_TotalSpawnCount;  // 0x0430, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum Scaling_TimeBetweenSpawns;  // 0x0440, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bGeneratedRewards;  // 0x0450, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle LootRewards;  // 0x0454, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedAI;  // 0x0470, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoDelayedCleanupOnDestroy;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LevelHardCap;  // 0x0484, size 0x4

    UFUNCTION(BlueprintCallable) void AttemptSpawn();
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanSpawn(bool& bCanSpawn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CreatureSpawned__DelegateSignature(AActor* SpawnedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DestroyUpdate();
    UFUNCTION(BlueprintCallable) void DoStartDelayedClean();
    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_Spawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GenerateExtraSpawnerLoot(TArray<FItemData>& Items);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GenerateItem(FItemTemplateRowHandle Item, int32 Amount, FItemData& OutputItem);  // parameters 0x210
    UFUNCTION(BlueprintCallable) void GenerateLootItems(AIcarusPlayerCharacter* InstigatingPlayer, TArray<FItemData>& Loot);  // parameters 0x18
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsPlayerNearby(bool& PlayerNearby);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnActorKilled(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCreatureDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCreatureKilled(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCreatureSpawned(AActor* Creature);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) void OnRep_bDestroyed();
    UFUNCTION(BlueprintCallable) void OnTerrainAnchorUpdated();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ReviveSpawner();
    UFUNCTION(BlueprintCallable) void SetAsWorldSpawner();
    UFUNCTION(BlueprintCallable) void SetSpawnerActive(bool bActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Spawn_Creature();  // named "Spawn Creature"
    UFUNCTION(BlueprintCallable) void StartDelayedCleanup(float MinCleanupDelay);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TryCleanup();
    UFUNCTION(BlueprintCallable) void UpdateHighlight(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
