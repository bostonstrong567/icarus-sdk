// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Generic_Melee.BP_ActionableBehaviour_Generic_Melee_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3C0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Generic_Melee_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UCapsuleComponent* HitCollider;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ActionCooldownActive;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsHitReacting;  // 0x0329, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugDraw;  // 0x032A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSweepingCollision;  // 0x032B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastColliderLocation;  // 0x032C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FToolDamage ToolDamage;  // 0x0338, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldSweepCollision;  // 0x0378, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETraceTypeQuery> CollisionTraceChannel;  // 0x0379, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldReverseAnimOnHit;  // 0x037A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScreenshakeScale;  // 0x037C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugForceOwnership;  // 0x0380, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream_0;  // 0x0384, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HitTraceDistance;  // 0x038C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> StoredMontages;  // 0x0390, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CustomHitNotifyName;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SweepIgnoreActors;  // 0x03B0, size 0x10

    UFUNCTION(BlueprintCallable) void ActionTimeout();
    UFUNCTION(BlueprintCallable) void CheckRepairIfBreak(AIcarusItem* ItemInstance, int32 DurabilityLossFromHit, bool& AutoRepaired);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void ConditionalConsumeFuel(FHitResult HitResult);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void DoSwing(EActionableEventType ActionType);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Generic_Melee(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) USkeletalMeshComponent* GetAnimatingMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetHitFromViewTraces(FHitResult& OutHit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) EViewTraceResultPriority GetHitResultPriority(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION(BlueprintCallable) EViewTraceResultPriority GetHitResultPriorityLow(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION(BlueprintCallable) int32 GetStatAdjustedDurability(int32 DurabilityLoss);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HitCollision();
    UFUNCTION(BlueprintCallable) void InvokeHit(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintImplementableEvent) void OnActionHit(AActor* InvokingActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, UTraitBehaviour* InstigatingBehaviour);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) void OnActionHitEvent(AActor* Invoking_Actor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, bool& WasHitSuccessful);  // parameters 0x99
    UFUNCTION(BlueprintImplementableEvent) void OnActionInsufficientStamina(EActionableTrigger ActionTrigger);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B73345A5DB(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMontageComplete(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void OnTraitAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlayHitSound(bool HitSuccessful, FVector HitLocation, TEnumAsByte<EPhysicalSurface> SurfaceHit, FHitResult& SweepResult);  // parameters 0x9C
    UFUNCTION(BlueprintCallable) void PlayMeleeSwing(AIcarusPlayerCharacter* TargetPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayScreenshake(float Scale, bool Hit);  // parameters 0x5
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SelectRandomWeightedMontage_0(TArray<FName>& Sections, UAnimMontage* Montage, FName& ChosenSection);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetSweepingEnabled(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB
    UFUNCTION(BlueprintCallable) void StopRepeating();
    UFUNCTION(BlueprintCallable) void SweepCollision();
};
