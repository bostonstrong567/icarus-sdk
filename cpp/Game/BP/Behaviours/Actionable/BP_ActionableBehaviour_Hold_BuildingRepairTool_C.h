// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Hold_BuildingRepairTool.BP_ActionableBehaviour_Hold_BuildingRepairTool_C
// Derives from: UBP_ActionableBehaviour_Hold_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3C2, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Hold_BuildingRepairTool_C : public UBP_ActionableBehaviour_Hold_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* OwningActor;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* BehaviourOwner;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TraceDistance;  // 0x0380, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Building_Base_C* LastBuildingHit;  // 0x0388, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> StoredMontages;  // 0x0390, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString HitAnimNotifyName;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName HeadAttachSocket;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* HitSound;  // 0x03B8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> LastSurfaceHit;  // 0x03C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowOutline;  // 0x03C1, size 0x1

    UFUNCTION(BlueprintCallable) void ActionTimeout();
    UFUNCTION(BlueprintCallable) void ApplyRepair();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanHold();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CancelSwing();
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_OnInstantRepaired();
    UFUNCTION(BlueprintCallable) void CompleteHold(bool Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DoSwing(EActionableEventType ActionType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool DoTrace(FHitResult& OutHit);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void EndHold(bool Success);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Hold_BuildingRepairTool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetHitFromViewTraces(FHitResult& OutHit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) EViewTraceResultPriority GetHitResultPriority(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION(BlueprintCallable) int32 GetStatAdjustedDurability(int32 DurabilityLoss);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B789BB7CFF(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnMontageComplete(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void OnTraitAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlayHitSound();
    UFUNCTION(BlueprintCallable) void PlaySwing(AIcarusPlayerCharacter* TargetPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ProcessDurability();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_EndHold(bool Success, AActor* ActorEndedHoldOn);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_SetLastSurfaceHit(TEnumAsByte<EPhysicalSurface> Surface);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_StartHold(AActor* ActorStatedHoldOn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSurfaceFromViewTrace(UPhysicalMaterial* HitPhysMat);  // parameters 0x8
};
