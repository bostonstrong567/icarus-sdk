// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Hold.BP_ActionableBehaviour_Hold_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x368, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Hold_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float HoldTimeStamp;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHoldCompleted HoldCompleted;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HoldLength;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoEnd;  // 0x033C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ModifierUID;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle HoldModifier;  // 0x0344, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* HoldingOnActor;  // 0x0360, size 0x8

    UFUNCTION(BlueprintCallable) void AddPlayerModifier();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanHold();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CompleteHold(bool Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void EndHold(bool Success);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Hold(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) USkeletalMeshComponent* GetAnimatingMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetHeldData();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHeldTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetHoldLength(float& HeldTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHoldProgress();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPlayer(AIcarusPlayerCharacter*& OwningPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRemainingTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HoldCompleted__DelegateSignature(bool Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsHoldFinished();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsHolding();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LocalOrServer(bool& Local, bool& Server);  // parameters 0x2
    UFUNCTION(BlueprintImplementableEvent) void OnActionAborted(EActionableEventType EventType);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void PerformActionFromMenu(AActor* InvokingActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemovePlayerModifier();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_EndHold(bool Success, AActor* ActorEndedHoldOn);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_StartHold(AActor* ActorStatedHoldOn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void StartHold();
};
