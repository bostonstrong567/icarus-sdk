// /Game/BP/AI/GOAP/BP_AIFunctionLibrary.BP_AIFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void ApplyRandomDebuffModifier(AActor* TargetActor, AIcarusCharacter* InstigatingCharacter, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void CanTargetActorBeAttacked(AActor* TargetActor, AActor* Attacker, UObject* __WorldContext, bool& CanAttack);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void CheckLineOfSightToTarget(AController* Controller, AActor* Target, float DesiredDotLimit, bool UseControlRotation, bool Use2DDotChecks, UObject* __WorldContext, bool& ControllerHasLineOfSightToTarget, bool& IsTargetWithinControllerView, bool& IsControllerWithinTargetView) const;  // parameters 0x23
    UFUNCTION(BlueprintCallable) static void CollectProjectilesAttachedToActor(AActor* Target, UObject* __WorldContext, TArray<FItemData>& OutProjectiles);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void Create_Knockback_Damage_Event(APawn* PawnDamageCauser, FVector DamageOrigin, float KnockbackForce, UObject* __WorldContext, TArray<AActor*>& AffectedTargets);  // parameters 0x30, named "Create Knockback Damage Event"
    UFUNCTION(BlueprintCallable) static void GenerateCorpseRewards(AIcarusPlayerCharacter* PlayerInstigator, UInventoryComponent* Inventory, FItemRewardsRowHandle RewardsRow, UObject* __WorldContext);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GenerateLevel(FRandomStream& Random_Stream, int32 Min, int32 Median, int32 Max, UObject* __WorldContext, int32& Level);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void GenerateLevelFromLocation(UObject* Context, const FVector& Location, FRandomStream& Random_Stream, UObject* __WorldContext, int32& Level);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static void GetBlockingDurableActor(AActor* InFrontOf, float ForwardTraceDistance, UObject* __WorldContext, AActor*& BlockingActor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetClosestTargetableActor(AActor* SelfTargetable, ERelationshipType RelationshipType, bool bUseMaxDistance, float MaxDistance, UObject* __WorldContext, AActor*& Actor);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetNPCStatWithDefaultValue(AActor* SpawnableAI, FStatsEnum Stat, int32 DefaultValue, UObject* __WorldContext, int32& Value) const;  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static void GetNearestAlivePlayer(FVector Origin, float MaxDistance, float MinDistance, UObject* __WorldContext, AIcarusPlayerCharacter*& Player, TArray<AActor*>& NearbyAlivePlayers);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void GetNearestValidHuntingTarget(float MaxDistance, float MinDistance, AController* Controller, UObject* __WorldContext, AActor*& Target);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetProspectSpawnConfig(UObject* __WorldContext, FAISpawnConfigData& SpawnConfig, bool& Success);  // parameters 0xB9
    UFUNCTION(BlueprintCallable) static void GetRandomActionMontageSection(TMap<FName, float> PossibleSections, UObject* __WorldContext, FName& OutSection);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static void GetRandomAliveNearbyPlayer(FVector Origin, float NearbyDistance, UObject* __WorldContext, AIcarusPlayerCharacter*& Player);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetTamesDataForNPC(AActor* NPC, UObject* __WorldContext, FTamesRowHandle& TamesRowHandle) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void GetTargetActor(AIcarusNPCGOAPCharacter* NPC, UObject* __WorldContext, AActor*& Target);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void GetWorldBossSpawner(AActor* SpawnedBoss, UObject* __WorldContext, AWorldBossSpawner*& FoundSpawner);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void GetZoneTextureSample(UObject* Context, const FVector& Location, UObject* __WorldContext, FAISpawnZonesRowHandle& Zone);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasAIRetreated(UObject* Target, UObject* __WorldContext);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IsCreatureTrapped(AActor* Creature, UObject* __WorldContext, bool& IsTrapped) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IsExoticInfusedCreature(AActor* Creature, UObject* __WorldContext, bool& IsExoticInfused) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void IsPointWithinTrappedCreatureRadius(APawn* TrappedPawn, FVector Point, UObject* __WorldContext, bool& WithinAccessibleRadius);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IsTargetable(AActor* Actor, UObject* __WorldContext, bool& IsTargetable);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void MakeNPCAngry(AIcarusNPCGOAPCharacter* NPC, AActor* TargetActor, FName TargetActorKeyName, UObject* __WorldContext);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MountCombatStateToString(EMountCombatBehaviourState InCombatState, UObject* __WorldContext, FText& OutText) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MountMovementStateToString(EMountMovementBehaviourState InMovementState, UObject* __WorldContext, FText& OutText) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void PopulatePrebuiltContainersWithLoot(APrebuiltStructure* Target, FItemRewardsRowHandle Loot, UObject* __WorldContext);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static void SeparateMontageAttackSections(TArray<FName>& Sections, UObject* __WorldContext, TArray<FName>& StationaryAttacks, TArray<FName>& RunningAttacks);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static void SeparateMontageAttackSectionsMap(TMap<FName, float> SectionsMap, UObject* __WorldContext, TMap<FName, float>& StationaryAttacks, TMap<FName, float>& RunningAttacks);  // parameters 0xF8
    UFUNCTION(BlueprintCallable) static void SetAllComponentsIgnoreCollision(AActor* ComponentActor, AActor* ActorToIgnore, bool ShouldIgnore, UObject* __WorldContext);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNPC_Persistence(AIcarusNPCCharacter* NPC, bool IsPersistent, TSubclassOf<UIcarusStateRecorderComponent> Recorder_Class, UObject* __WorldContext);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void Should_React_to_Perceived_Noise(AIcarusNPCCharacter* SourceActor, AIcarusNPCCharacter* PerceivingActor, UObject* __WorldContext, bool& ShouldReact) const;  // parameters 0x19, named "Should React to Perceived Noise"
    UFUNCTION(BlueprintCallable) static void SpawnAIAtPrebuiltStructure(APrebuiltStructure* Target, TArray<FAISetupRowHandle>& AISetupsToSpawn, bool AnchorNPCs, int32 MaxAIToSpawn, FVector2D AISpawnLevel, bool MakeNPCsStationary, UObject* __WorldContext, TArray<AActor*>& OutSpawnedNPCs);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static void SweepDamage(AIcarusCharacter* InstigatingCharacter, FName ValidMontageSection, const TMap<AActor*, float>& PreviouslyHitActors, FVector LastAttackLocation, float SweepCollisionRadius, const TArray<AActor*>& ActorsToIgnore, UObject* __WorldContext, bool& WasBlockingAttack, const TMap<AActor*, float>& NewHitActors, FVector& AttackLocation);  // parameters 0xEC
    UFUNCTION(BlueprintCallable) static bool TryInteractWithTameInteractable(AActor* Interactable, AActor* InstigatingActor, UObject* __WorldContext);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void UpdateLastHostileStimuliLocation(AAIController* Controller, AActor* TargetActor, FVector OptionalOverrideLocation, float OnlyIfCloserThanExisting, UObject* __WorldContext);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void UpdateRadioactiveAnchorTarget(AActor* NPC, const FGameplayTagQuery& OptionalQuery, UObject* __WorldContext);  // parameters 0x58
};
