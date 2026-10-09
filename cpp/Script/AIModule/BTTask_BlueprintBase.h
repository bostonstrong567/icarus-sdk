// /Script/AIModule.BTTask_BlueprintBase
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0xA8, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h

UCLASS(Abstract)
class UBTTask_BlueprintBase : public UBTTaskNode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) AAIController* AIOwner;  // 0x0070, size 0x8
    UPROPERTY(Transient) AActor* ActorOwner;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere) FIntervalCountdown TickInterval;  // 0x0080, size 0x8
    TEnumAsByte<enum EBTNodeResult::Type> CurrentCallResult;  // 0x0088, not reflected
    TArray<FProperty *,TSizedDefaultAllocator<32> > PropertyData;  // 0x0090, not reflected
    uint32 : 1 bIsAborting;  // 0x00A0, not reflected
    uint32 : 1 bStoreFinishResult;  // 0x00A0, not reflected
    uint32 : 2 ReceiveAbortImplementations;  // 0x00A0, not reflected
    uint32 : 2 ReceiveExecuteImplementations;  // 0x00A0, not reflected
    uint32 : 2 ReceiveTickImplementations;  // 0x00A0, not reflected
    UPROPERTY(EditAnywhere) uint8 bShowPropertyDetails : 1;  // 0x00A0, mask 0x01
public:
    UFUNCTION(BlueprintCallable) void FinishAbort();
    UFUNCTION(BlueprintCallable) void FinishExecute(bool bSuccess);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTaskAborting() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTaskExecuting() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbort(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetFinishOnMessage(FName MessageName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetFinishOnMessageWithId(FName MessageName, int32 RequestID);  // parameters 0xC
};
