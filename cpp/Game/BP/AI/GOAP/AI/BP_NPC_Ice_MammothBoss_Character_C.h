// /Game/BP/AI/GOAP/AI/BP_NPC_Ice_MammothBoss_Character.BP_NPC_Ice_MammothBoss_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xE64, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Ice_MammothBoss_Character_C : public ABP_IcarusNPCGOAPCharacter_C, public IThreatAudioInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* BodyBlocker;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* LegBlocker;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SnowParticles;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SpawnBirdLocation;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* IceArmourDM2;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* IceArmourDM4;  // 0x0D00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* IceArmourDM1;  // 0x0D08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* IceArmourDM5;  // 0x0D10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* IceArmourDM3;  // 0x0D18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CritArea_Tusk3;  // 0x0D20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CritArea_Tusk4;  // 0x0D28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* IceArmourSpawnLocation;  // 0x0D30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour2;  // 0x0D38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour1;  // 0x0D40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour5;  // 0x0D48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour4;  // 0x0D50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* IceArmour3;  // 0x0D58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CritArea_Tusk2;  // 0x0D60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CritArea_Tusk1;  // 0x0D68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* StompLoc;  // 0x0D70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0D78, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0D80, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMeshComponent*> IceArmour;  // 0x0D88, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentDamageResistance;  // 0x0D98, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentHP;  // 0x0D9C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UDestructibleComponent*> IceArmourDM;  // 0x0DA0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x0DB0, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UDestructibleComponent* Item;  // 0x0DB8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UDestructibleComponent* ChunkToDestroy;  // 0x0DC0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedBirds;  // 0x0DC8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasBrokenIce;  // 0x0DD8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> ScaledStatsToAdd;  // 0x0DE0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUID;  // 0x0E30, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool ShouldMusicStart;  // 0x0E34, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ShouldMusicStartKey;  // 0x0E38, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* AudioThreatDistanceModifier;  // 0x0E40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasGeneratedRewards;  // 0x0E48, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Mammoth_IcePillar_C*> IcePillars;  // 0x0E50, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PillarsToDestroy;  // 0x0E60, size 0x4

    UFUNCTION(BlueprintCallable) void AddIcePillar(const ABP_Mammoth_IcePillar_C*& Pillar, int32 MaxPillars);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void AddInitialScaledStats();
    UFUNCTION(BlueprintCallable) void BreakDM();
    UFUNCTION(BlueprintCallable) void CacheWaterfallLocations();
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Ice_MammothBoss_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) EMusicConditionCombatState GetCombatMusicConditionOverride(AIcarusPlayerCharacter* TargetPlayer, float Threat);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FName GetNextAttackMontageSection(AActor* AttackTarget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetThreatToPlayer(AIcarusPlayerCharacter* TargetPlayer);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void InitIceAdded();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnActionMontageNotify(FName NotifyName);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnArmorUpdated(UActorState* ActorState, float NewArmor);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnBlendOut_AAB122104315833E31B06D858D645CD6(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_AAB122104315833E31B06D858D645CD6(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_AAB122104315833E31B06D858D645CD6(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_AAB122104315833E31B06D858D645CD6(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_AAB122104315833E31B06D858D645CD6(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_ShouldMusicStart();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RegenerateArmor();
    UFUNCTION(BlueprintCallable) void RegenerateDM();
    UFUNCTION(BlueprintCallable) void RemovePillar(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateCreatureGrowthStats();
};
