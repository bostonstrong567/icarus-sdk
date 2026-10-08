// /Game/BP/AI/Bosses/BP_FactionBoss_Base.BP_FactionBoss_Base_C
// Derives from: AIcarusPawn > APawn > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Abstract, Config=Game)
class ABP_FactionBoss_Base_C : public AIcarusPawn
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* MainMesh;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_Flammable_FactionBoss_C* BP_Flammable_FactionBoss;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UExperienceComponent* Experience;  // 0x0458, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_HitableBehaviour_Tree_C* BehaviourTree;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* TargetActor;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TargetActorBlackboardKey;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanAttackTargets;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBoss;  // 0x0479, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LastDamageCauser;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AController* LastDamageInstigator;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnTransformUpdated OnTransformUpdated;  // 0x0490, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CanHitDamageTarget(AActor* TargetActor, FHitResult InHit);  // parameters 0x91
    UFUNCTION() void ExecuteUbergraph_BP_FactionBoss_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) USkeletalMeshComponent* GetAnimatedMeshComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InitialiseStatsAndTags();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_SetActorLocation(FVector NewLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void NotifyBossDeath();
    UFUNCTION(BlueprintCallable) void OnBossDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnMontageComplete(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnMontageStarted(UAnimMontage* Montage);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnTransformUpdated__DelegateSignature(FTransform NewTransform);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PreventAttacksForActiveMontage(bool AttacksEnabled);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ScaleAndApplyStats(TMap<FStatsEnum, int32> StatList);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void ScaleStatForPlayerCount(FStatsEnum Stat, int32 UnscaledValue, int32 PlayerCount, int32& ScaledValue);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetDamageEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateReplicatedBlackboardValues();
};
