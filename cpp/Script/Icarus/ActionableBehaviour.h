// /Script/Icarus.ActionableBehaviour
// Derives from: UTraitBehaviour > UActorComponent > UObject
// size 0x2D0, declared in Icarus/Source/Icarus/Traits/Behaviours/ActionableBehaviour.h

UCLASS(Transient, MinimalAPI, Config=Engine)
class UActionableBehaviour : public UTraitBehaviour
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Replicated) TArray<EActionableEventType> ActionEventTypes;  // 0x00C0, size 0x10
    UPROPERTY(Replicated) FActionsRowHandle ActionRowHandle;  // 0x00D0, size 0x18
    UPROPERTY() TMap<EActionableEventType, FStaminaActionCostsRowHandle> StaminaCosts;  // 0x00E8, size 0x50
    UPROPERTY(Replicated, ReplicatedUsing) TArray<FActionStaminaCostEventPairing> ReplicatedStaminaCosts;  // 0x0138, size 0x10
    UPROPERTY(BlueprintAssignable) FCooldownElapsedDelegate OnCooldownElapsed;  // 0x0148, size 0x10
    UPROPERTY(BlueprintReadWrite) FModifierStatesRowHandle ModifierRowHandle;  // 0x0158, size 0x18
private:
    TMap<enum EActionableEventType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EActionableEventType,int,0> > StaminaActionUIDs;  // 0x0170, not reflected
    UPROPERTY(Instanced) UCharacterState* OwnerActorState;  // 0x01C0, size 0x8
    UPROPERTY() AActor* OwnerActor;  // 0x01C8, size 0x8
    bool bIsActionComplete;  // 0x01D0, not reflected
    TSet<enum EActionableEventType,DefaultKeyFuncs<enum EActionableEventType,0>,FDefaultSetAllocator> AbortedActions;  // 0x01D8, not reflected
    TMap<enum EActionableEventType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EActionableEventType,FName,0> > StartStaminaNotifyNames;  // 0x0228, not reflected
    TMap<enum EActionableEventType,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum EActionableEventType,FTimerHandle,0> > CooldownTimers;  // 0x0278, not reflected
    UPROPERTY() UIcarusAnimInstance* AnimatingMeshAnimInstance;  // 0x02C8, size 0x8
public:
    UFUNCTION(BlueprintCallable) void AbortAction(EActionableEventType EventType, bool bApplyEndActionStaminaCost);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ActionComplete(EActionableEventType ActionType);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool BP_ShouldApplyEndStaminaCost(EActionableEventType EventType);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void BeginActionCooldown(EActionableEventType ActionableEvent);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CancelStaminaActionForEventType(EActionableEventType EventType);  // parameters 0x1
    UFUNCTION() void CheckCurrentActionAborted(UActorState* ActorStateIn, int32 UID);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetActionData(FActionData& OutData) const;  // parameters 0x101
    UFUNCTION(BlueprintCallable, BlueprintPure) UActionableComponent* GetActionableComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) USkeletalMeshComponent* GetAnimatingMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCooldownDuration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCooldownSpeedMultiplier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) TArray<FRowHandle> GetGenericData();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FStaminaCost GetStaminaCostForEventType(EActionableEventType EventType) const;  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasCooldownElapsed(EActionableEventType ActionType) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActionAborted(EActionableEventType EventType) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActionComplete() const;  // parameters 0x1
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_NotifyCurrentActionAborted(EActionableEventType EventType);  // parameters 0x1
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void NetMulti_OnActionInsufficientStamina(EActionableTrigger ActionTrigger);  // parameters 0x1
    UFUNCTION() void OnAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintNativeEvent) void OnActionAborted(EActionableEventType EventType);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void OnActionHit(AActor* InvokingActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& SweepResult, UTraitBehaviour* InstigatingBehaviour);  // parameters 0xA0
    UFUNCTION(BlueprintNativeEvent) void OnActionInsufficientDurability(EActionableTrigger ActionTrigger);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void OnActionInsufficientStamina(EActionableTrigger ActionTrigger);  // parameters 0x1
    UFUNCTION() void OnActionNotify(FName NotifyName);  // parameters 0x8
    UFUNCTION() void OnRep_ReplicatedStaminaCosts();
    UFUNCTION() void OnUsedFromMenu(AActor* InvokingActor);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void PerformActionFromMenu(AActor* InvokingActor);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB

    // Virtual functions that start here:
    //   GetAnimatingMesh_Implementation, Multicast_NotifyCurrentActionAborted_Implementation
    //   NetMulti_OnActionInsufficientStamina_Implementation, OnActionAborted_Implementation
    //   OnActionHit_Implementation, OnActionInsufficientDurability_Implementation
    //   OnActionInsufficientStamina_Implementation, PerformAction_Implementation
};
