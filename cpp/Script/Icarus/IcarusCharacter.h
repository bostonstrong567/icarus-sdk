// /Script/Icarus.IcarusCharacter
// Derives from: ACharacter > APawn > AActor > UObject
// size 0x750, declared in Icarus/Source/Icarus/Characters/IcarusCharacter.h

UCLASS(Config=Game)
class AIcarusCharacter : public ACharacter, public IModifiableInterface, public IAITargetable, public IMutableGameplayTagInterface, public IAISightTargetInterface, public ISpawnableAI, public IIcarusActorUIDInterface, public IGameplayTagAssetInterface
{
public:
    UPROPERTY(Replicated) int32 IcarusUID;  // 0x0564, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UIcarusStateRecorderComponent> RecorderClass;  // 0x0568, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSaveModifiersToDatabase;  // 0x0570, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bWasReloaded;  // 0x0571, size 0x1
    UPROPERTY(EditAnywhere, Instanced) UIcarusStateRecorderComponent* Recorder;  // 0x0578, size 0x8
    UPROPERTY(BlueprintAssignable) FSprintUpdatedSignature OnSprintingUpdated;  // 0x0580, size 0x10
    UPROPERTY(BlueprintAssignable) FHitEffectsSpawnedSignature OnHitEffectsSpawned;  // 0x0590, size 0x10
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) UIcarusStatContainer* StatContainer;  // 0x05A0, size 0x8
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) UCharacterState* ActorState;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIRelationshipsRowHandle AIRelationshipTableRowNew;  // 0x05B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinFallTime;  // 0x05C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* FallDamageCurve;  // 0x05D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayerNoiseInterpSpeed;  // 0x05D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayerNoiseInterpDelay;  // 0x05DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReferenceLoudnessRange;  // 0x05E0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) float PlayerNoise;  // 0x05E4, size 0x4
    UPROPERTY(BlueprintAssignable) FCharacterModifierStateUpdatedSignature OnModifierStateUpdated;  // 0x05E8, size 0x10
    UPROPERTY(BlueprintAssignable) FCharacterMontageNotifySignature OnMontageNotify;  // 0x05F8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FGameplayTagContainer GameplayTags;  // 0x0618, size 0x20
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) uint8 bIsSprinting : 1;  // 0x0638, mask 0x01
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) uint8 bIsAiming : 1;  // 0x0638, mask 0x02
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) uint8 bIsReloading : 1;  // 0x0638, mask 0x04
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) ULadderComponent* LadderReference;  // 0x0640, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TickMovementStaminaUpdateHz;  // 0x0648, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStaminaActionCostsRowHandle SprintAction;  // 0x064C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStaminaActionCostsRowHandle SprintJumpAction;  // 0x0664, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStaminaActionCostsRowHandle JumpAction;  // 0x067C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStaminaActionCostsRowHandle CrouchAction;  // 0x0694, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStaminaActionCostsRowHandle WalkAction;  // 0x06AC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BlockDetectionDistance;  // 0x06C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BlockDetectionInterval;  // 0x06C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BlockDetectionSampleCount;  // 0x06CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PreciseReachRadiusMultiplier;  // 0x06D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PreciseReachHeightMultiplier;  // 0x06D4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) AIcarusCharacter* ParentCharacter;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ParentCharacterUID;  // 0x0740, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    bool bHasSetUpAI;  // 0x0560, protected
    int32 CurrentModifierUID;  // 0x0608, protected
    bool ShouldTakeFallDamage;  // 0x060C, protected
    float TimeSinceStartedFalling;  // 0x0610, private
    float LastPlayerNoiseTime;  // 0x0614, private
    TMap<enum EStats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EStats,int,0> > ActiveAuras;  // 0x06D8, protected
    FTimerHandle MovementTimerHandle;  // 0x0728, private
    float FractionalStaminaCost;  // 0x0730, private

    UFUNCTION(BlueprintCallable) void Aim(bool bClientSimulation);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AIcarusPlayerCharacter*> BP_GetAllDamagingPlayerCharacters() const;  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) FAIRelationshipsRowHandle CheckForStatBasedAIRelationshipChange(const FAIRelationshipsRowHandle& PreviousRelationship);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ClaimUniqueIcarusUIDFromLibrary(int32 SuggestedUID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ClearRecorder();
    UFUNCTION(BlueprintCallable) float GetAdjustedMovementActionStaminaCost(FStatsEnum Stat, float CostPerSecond);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetIcarusUID() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) UInventoryComponent* GetInventoryComponent();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasRecorder() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAiming() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsRecording() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsReloading() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSprinting() const;  // parameters 0x1
    UFUNCTION() void ItemAddedDelegate(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION() void ItemRemovedDelegate(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_JumpToMontageSection(UAnimMontage* Montage, FName Section);  // parameters 0x10
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_PlayReplicatedMontage(UAnimMontage* Montage, FName StartingSection, float PlayRate, bool bSkipServer);  // parameters 0x15
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_SpawnHitEffects(FTransform SpawnTransform, TEnumAsByte<EPhysicalSurface> HitSurface, AActor* HitActor);  // parameters 0x40
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_StopReplicatedMontage(UAnimMontage* Montage);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnCharacterDamaged(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintNativeEvent) void OnFallDamageApplied(float DamageApplied, float FallSpeed, float FallStrength);  // parameters 0xC
    UFUNCTION(BlueprintNativeEvent) void OnIcarusMontageNotify(FName NotifyName, USkeletalMeshComponent* Component, UAnimSequenceBase* Anim);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnParentCharacterUpdated();
    UFUNCTION() void OnRep_IsAiming();
    UFUNCTION() void OnRep_IsReloading();
    UFUNCTION() void OnRep_IsSprinting();
    UFUNCTION() void OnRep_ParentCharacter();
    UFUNCTION() void OnStatContainerUpdated_Internal();
    UFUNCTION(BlueprintNativeEvent) void OnTakeCollisionDamage(float Damage, AController* DamageInstigator, AActor* DamageCauser, FHitResult Hit);  // parameters 0xA0
    UFUNCTION(BlueprintNativeEvent) void RaiseTheCurtain();
    UFUNCTION(BlueprintCallable) void RecorderBeginRecording() const;
    UFUNCTION(BlueprintCallable) void RecorderEndRecording() const;
    UFUNCTION(BlueprintCallable) void ReportCharacterNoiseEvent(FVector NoiseLocation, float Loudness, AActor* InstigatingActor, float MaxRange, FName Tag);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetIcarusUID(int32 ForcedUID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetParentCharacter(AIcarusCharacter* NewParentCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool SetRecorder(TSubclassOf<UIcarusStateRecorderComponent> NewRecorderClass);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool ShouldApplyMovementCost();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SpawnHitEffects(FTransform SpawnTransform, TEnumAsByte<EPhysicalSurface> HitSurface, AActor* HitActor);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void Sprint(bool bClientSimulation);  // parameters 0x1
    UFUNCTION() void StaminaMovementTickFunction();
    UFUNCTION(BlueprintCallable) void StartReloading();
    UFUNCTION(BlueprintCallable) void StopAim(bool bClientSimulation);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StopReloading();
    UFUNCTION(BlueprintCallable) void StopSprint(bool bClientSimulation);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool TickMovementStaminaCost(float DeltaTime);  // parameters 0x5
    UFUNCTION() void TryApplyFallDamage(TEnumAsByte<EMovementMode> PreviousMoveMode);  // parameters 0x1

    // Virtual functions that start here:
    //   Aim, AimingUpdated, BackShieldBlockingCalculation, CanAim, CanSprint, EquipItem
    //   GetInventoryComponent_Implementation, GetMaxSpeed, IcarusBeginPlay_Implementation
    //   InitialiseInventoryBindings, IsSprinting, ItemAddedDelegate, ItemRemovedDelegate
    //   Multicast_JumpToMontageSection_Implementation, Multicast_PlayReplicatedMontage_Implementation
    //   Multicast_SpawnHitEffects_Implementation, Multicast_StopReplicatedMontage_Implementation
    //   OnCharacterDamaged_Implementation, OnIcarusMontageNotify_Implementation, OnRep_IsSprinting
    //   RaiseTheCurtain_Implementation, ReloadingUpdated, ResistedDamage, ShieldBlockingCalculation
    //   ShouldApplyMovementCost_Implementation, Sprint, SprintingUpdated, StartReloading, StopAim
    //   StopReloading, StopSprint, TickMovementStaminaCost_Implementation
};
