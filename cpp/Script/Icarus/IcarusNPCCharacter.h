// /Script/Icarus.IcarusNPCCharacter
// Derives from: AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x920, declared in Icarus/Source/Icarus/NPC/Characters/IcarusNPCCharacter.h

UCLASS(Config=Game)
class AIcarusNPCCharacter : public AIcarusCharacter
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UCharacterState> ActorStateClass;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UTerrainAnchorComponent* NPCTerrainAnchor;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool implementsVisionSense;  // 0x0758, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ImplementsSoundSense;  // 0x0759, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ImplementsDamageSense;  // 0x075A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PerceptionLogging;  // 0x075B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName EyeSocket;  // 0x075C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RootBoneName;  // 0x0764, size 0x8
    UPROPERTY(BlueprintReadOnly) TMap<EMovementState, FMovementStateData> MoveSpeedMapping;  // 0x0770, size 0x50
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) EMovementState MovementStateSet;  // 0x07C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBehaviorTree* NpcBehaviourTree;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bForceMaxLODWhenNotRendered;  // 0x07D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOverrideAnimTickOption;  // 0x07D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EVisibilityBasedAnimTickOption AnimTickOptionOverride;  // 0x07D2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDrownNPCIfStuckInWater;  // 0x07D3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DrownDelayInSeconds;  // 0x07D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFreezeNPCIfTerrainAnchorInvalid;  // 0x07D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableSurvivalTickOnFreeze;  // 0x07D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsNPCFrozen;  // 0x07DA, size 0x1
    UPROPERTY(BlueprintAssignable) FFrozenStateUpdatedSignature FrozenStateUpdated;  // 0x07E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCleanupNPCIfFallingOutOfBounds;  // 0x07F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OutOfBoundsCleanupDelayInSeconds;  // 0x07F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OutOfBoundsMinimumFallDistance;  // 0x07F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OutOfBoundsMaximumZHeight;  // 0x07FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseMeshBoundsAsSelfGoalRadius;  // 0x0800, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseMeshBoundsAsTargetGoalRadius;  // 0x0801, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseMeshBoundsAsGoalHeight;  // 0x0802, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MeshBoundsScaleMultiplier;  // 0x0804, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugGoalRadius;  // 0x0808, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBeginDeathRagdoll;  // 0x0809, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FPoseSnapshot DeathRagdollPose;  // 0x0810, size 0x38
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FTransform DeathRagdollTransform;  // 0x0850, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector DeathVelocity;  // 0x0880, size 0xC
    UPROPERTY(BlueprintAssignable) FRagdollSettledSignature RagdollSettled;  // 0x0890, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FAISetupRowHandle AISetupRow;  // 0x08A0, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) AActor* FollowTargetActor;  // 0x08B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FollowTargetActorKey;  // 0x08C0, size 0x8
    UPROPERTY(Transient, Instanced) UCreatureAudioThreatComponent* AudioThreatComponent;  // 0x08F0, size 0x8
    UPROPERTY(Replicated) uint8 DistanceToFollowTarget;  // 0x0915, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle BlackboardUpdateTimer;  // 0x08C8, private
    bool bIsDrowning;  // 0x08D0, protected
    FTimerHandle DelayedDrownTimer;  // 0x08D8, protected
    int32 DrowningModifierUID;  // 0x08E0, protected
    FTimerHandle AnimTickSettingsUpdateTimer;  // 0x08E8, protected
    FVector OutOfBoundsStartingLocation;  // 0x08F8, protected
    FTimerHandle OutOfBoundsCleanupHandle;  // 0x0908, protected
    EMovementMode PreFrozenMovementMode;  // 0x0910, protected
    bool bWasSurvivalTickActiveBeforeFreeze;  // 0x0914, protected

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool FreezeNPC();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) AActor* GetCurrentAnimationTarget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetFreezeNPCIfTerrainAnchorInvalid() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool GetOverrideMoveSpeedMappingMultiplier(float& OutMultiplier) const;  // parameters 0x5
    UFUNCTION(BlueprintNativeEvent) void GetSightPerceptionOrigin(FVector& OutLocation, FRotator& OutRotation) const;  // parameters 0x18
    UFUNCTION() void HandleFallingOutOfWorld();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void InitialiseBehaviourTree();
    UFUNCTION() void InitialiseTerrainAnchorComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) int32 NPCResistDamage(const FIcarusDamagePacket& DamagePacket);  // parameters 0xDC
    UFUNCTION(BlueprintNativeEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION() void OnRep_MovementStateSet();
    UFUNCTION(BlueprintNativeEvent) void OnTerrainAnchorStateChanged();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool ReplaceSelfWithDeadItem(AIcarusActor*& ReplacementActor, const TArray<FIcarusStatReplicated>& CustomStats);  // parameters 0x19
    UFUNCTION() void ScheduleNextAnimTickOptionUpdate(float DistSqrToPlayer);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFreezeNPCIfTerrainAnchorInvalid(bool bNewFreezeNPCIfTerrainAnchorInvalid);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsDrowning(bool NewIsDrowning);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetRagdollEnabled(bool bShouldRagdoll);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool ShouldCreateTerrainAnchorComponent() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool UnfreezeNPC();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateCharacterMoveSpeed(float walk_speed);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void UpdateRagdoll();
    UFUNCTION() void UpdateReplicatedBlackboardProperties();
    UFUNCTION(BlueprintNativeEvent) void UpdateVisibilityBasedAnimTickOption();

    // Virtual functions that start here:
    //   FreezeNPC_Implementation, GetCurrentAnimationTarget_Implementation
    //   GetSightPerceptionOrigin_Implementation, HandleFallingOutOfWorld, NPCResistDamage_Implementation
    //   OnActorDeath_Implementation, OnTerrainAnchorStateChanged_Implementation
    //   ReplaceSelfWithDeadItem_Implementation, SetRagdollEnabled_Implementation
    //   ShouldCreateTerrainAnchorComponent_Implementation, UnfreezeNPC_Implementation
    //   UpdateRagdoll_Implementation, UpdateVisibilityBasedAnimTickOption_Implementation
};
