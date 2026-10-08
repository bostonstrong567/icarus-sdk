// /Game/BP/AI/Basic/World/BP_LavaFlyerNest.BP_LavaFlyerNest_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x379, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LavaFlyerNest_C : public AIcarusActor, public IAITargetable
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_EggFlies_FX;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* SM_LavaHunter_EggCluster_DM;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* BaseMound;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* LavaEggAudio;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_LavaHunter_Egg;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* EggScale;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0300, size 0x8
    UPROPERTY() float GrowthTimeline_LightAlpha_C2E7A14A47ABC783FBD671A31A092316;  // 0x0308, size 0x4
    UPROPERTY() float GrowthTimeline_GrowthAlpha_C2E7A14A47ABC783FBD671A31A092316;  // 0x030C, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> GrowthTimeline__Direction_C2E7A14A47ABC783FBD671A31A092316;  // 0x0310, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* GrowthTimeline;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AIToSpawn;  // 0x0320, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBeforeHatch;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AILevel;  // 0x033C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumToSpawn;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle HatchTimer;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool HasBroken;  // 0x0350, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingHealth;  // 0x0354, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CheckPlayersNearbyTimer;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BaseEggScale;  // 0x0360, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnTime;  // 0x036C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicEggMaterial;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSpawning;  // 0x0378, size 0x1

    UFUNCTION(BlueprintCallable) void BeginHatching();
    UFUNCTION(BlueprintCallable) void CheckPlayersNearby();
    UFUNCTION() void ExecuteUbergraph_BP_LavaFlyerNest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<FCriticalHitLocation> GetCriticalHitBones() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTargetLocation() const;  // parameters 0xC
    UFUNCTION() void GrowthTimeline__FinishedFunc();
    UFUNCTION() void GrowthTimeline__UpdateFunc();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsActorAlive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsCriticalHitDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_BreakEgg();
    UFUNCTION(BlueprintCallable) void OnActorDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) void OnEggDestroyed(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable) void SpawnEggAI();
    UFUNCTION(BlueprintCallable) void StartHatch();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void StartSpawningFX();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
