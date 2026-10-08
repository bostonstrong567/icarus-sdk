// /Script/Icarus.IcarusMountCharacter
// Derives from: AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xC10, declared in Icarus/Source/Icarus/AI/Mounts/IcarusMountCharacter.h

UCLASS(Abstract, Config=Game)
class AIcarusMountCharacter : public AIcarusNPCGOAPCharacter
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* TeleportEQS;  // 0x0A78, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSurvivalTriggersRowHandle SurvivalTriggersRowHandle;  // 0x0A80, size 0x18
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) int32 CachedWeightValue;  // 0x0A98, size 0x4
    UPROPERTY(BlueprintAssignable) FMountWeightUpdated OnMountWeightUpdated;  // 0x0AA0, size 0x10
    UPROPERTY(Instanced, BlueprintReadOnly) UIcarusMapIconComponent* MapIconComponent;  // 0x0AF0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FString MountName;  // 0x0AF8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FPlayerCharacterID OwnerCharacterID;  // 0x0B08, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FString OwnerName;  // 0x0B20, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMountsRowHandle MountData;  // 0x0B30, size 0x18
    UPROPERTY(BlueprintAssignable) FMountedSignature OnMounted;  // 0x0B48, size 0x10
    UPROPERTY(BlueprintAssignable) FDismountedSignature OnDismounted;  // 0x0B58, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bWasPlayerFirstPerson;  // 0x0B68, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) EMountCombatBehaviourState CombatBehaviourState;  // 0x0B69, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) EMountMovementBehaviourState MovementBehaviourState;  // 0x0B6A, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) EMountConsumptionBehaviourState ConsumptionBehaviourState;  // 0x0B6B, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) EMountGrazingBehaviourState GrazingBehaviourState;  // 0x0B6C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TemporaryFollowTarget;  // 0x0B70, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIgnoreDebugLoggingOnEndPlay;  // 0x0B78, size 0x1
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool bIsWildTame;  // 0x0B79, size 0x1
    UPROPERTY() TArray<UAnimMontage*> LoadedAnimations;  // 0x0B80, size 0x10
    UPROPERTY() TMap<int32, UAnimMontage*> ActiveTemporaryStats;  // 0x0BA0, size 0x50
    UPROPERTY() FTimerHandle ResetNumTimesFellOutOfWorldTimerHandle;  // 0x0BF0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FModifierStatesRowHandle CurrentHungerModifier;  // 0x0AB0, private
    FModifierStatesRowHandle CurrentThirstModifier;  // 0x0AC8, private
    bool bTriggerWeightUpdate;  // 0x0AE0, private
    int32 OverburdenedModifier;  // 0x0AE4, private
    int32 CachedWeightCapacity;  // 0x0AE8, private
    bool bConvertedStatsRequireUpdate;  // 0x0B90, private
    FTimerHandle SetOwnerIDTimerHandle;  // 0x0B98, private
    FVector LastWalkingLocation;  // 0x0BF8, protected
    int32 NumTimesFellOutOfWorld;  // 0x0C04, protected

    UFUNCTION() void AddRequiredTemperatureStats();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void AddTemporaryStatsForMontage(TMap<FBaseStatsEnum, int32> TemporaryStats, UAnimMontage* Montage);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void Dismounted(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool DoesMountSupportCombatState(EMountCombatBehaviourState State);  // parameters 0x2
    UFUNCTION(BlueprintCallable) bool DoesMountSupportConsumptionState(EMountConsumptionBehaviourState State);  // parameters 0x2
    UFUNCTION(BlueprintCallable) bool DoesMountSupportGrazingState(EMountGrazingBehaviourState State);  // parameters 0x2
    UFUNCTION(BlueprintCallable) bool DoesMountSupportMovementState(EMountMovementBehaviourState State);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetHandsTargetLocation(FVector SeatLocation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) UAnimMontage* GetMontageForGameplayTag(const FGameplayTag& Tag, FName& Section) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetPassengerPlayers(TArray<AIcarusPlayerCharacter*>& Passengers);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool GetPassengerSeatActors(TArray<ASeatBase*>& Seat);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetRidingAndPassengerPlayers(TArray<AIcarusPlayerCharacter*>& AllPlayers);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetRidingPlayer(AIcarusPlayerCharacter*& RidingPlayer);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool GetSeatActor(ASeatBase*& Seat);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<EMountCombatBehaviourState> GetSupportedCombatStates() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<EMountGrazingBehaviourState> GetSupportedGrazingStates() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) USurvivalCharacterState* GetSurvivalCharacterState() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsBeingRidden();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool IsMountOwner(AIcarusPlayerState* InPlayerState);  // parameters 0x9
    UFUNCTION() void MarkConvertedStatsRequireUpdate();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void Mounted(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION() void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION() void OnConnectedPlayerRemoved(const FPlayerCharacterID& ConnectedPlayerID);  // parameters 0x18
    UFUNCTION() void OnFoodLevelUpdated(int32 FoodLevel);  // parameters 0x4
    UFUNCTION() void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION() void OnMountStatContainerUpdated();
    UFUNCTION() void OnRep_CachedWeightValue();
    UFUNCTION() void OnRep_OwnerCharacterID();
    UFUNCTION() void OnTemperatureUpdated(int32 NewTemperature);  // parameters 0x4
    UFUNCTION() void OnWaterLevelUpdated(int32 WaterLevel);  // parameters 0x4
    UFUNCTION() void OnWeightUpdated();
    UFUNCTION(BlueprintNativeEvent) void OwnerCharacterUpdated();
    UFUNCTION() void PerformPlayerOwnerStatConversion();
    UFUNCTION() void ResetNumTimesFellOutOfWorld();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDesiredCombatState(EMountCombatBehaviourState DesiredState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDesiredConsumptionState(EMountConsumptionBehaviourState DesiredState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDesiredGrazingState(EMountGrazingBehaviourState DesiredState);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDesiredMovementState(EMountMovementBehaviourState DesiredState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool SetMountExperience(int32 Experience);  // parameters 0x5
    UFUNCTION(BlueprintCallable) bool SetMountName(FString Name);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool SetMountOwner(AIcarusPlayerState* InPlayerState, bool bForceOwnership);  // parameters 0xA
    UFUNCTION() void SetOwningPlayerID(FPlayerCharacterID PlayerID);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void TeleportToSafeLocation(const FVector& NewWorldLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryAlternateAttack();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryAttack();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryJump();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TryTeleportToSafeLocation();

    // Virtual functions that start here:
    //   Dismounted_Implementation, GetMontageForGameplayTag_Implementation, GetSeatActor_Implementation
    //   Mounted_Implementation, TeleportToSafeLocation_Implementation
};
