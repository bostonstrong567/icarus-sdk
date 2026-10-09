// /Script/AIModule.BTDecorator_BlueprintBase
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA0, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_BlueprintBase.h

UCLASS(Abstract)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) AAIController* AIOwner;  // 0x0068, size 0x8
    UPROPERTY(Transient) AActor* ActorOwner;  // 0x0070, size 0x8
    UPROPERTY() TArray<FName> ObservedKeyNames;  // 0x0078, size 0x10
    TArray<FProperty *,TSizedDefaultAllocator<32> > PropertyData;  // 0x0088, not reflected
    uint32 : 2 PerformConditionCheckImplementations;  // 0x0098, not reflected
    uint32 : 2 ReceiveExecutionFinishImplementations;  // 0x0098, not reflected
    uint32 : 2 ReceiveExecutionStartImplementations;  // 0x0098, not reflected
    uint32 : 2 ReceiveObserverActivatedImplementations;  // 0x0098, not reflected
    uint32 : 2 ReceiveObserverDeactivatedImplementations;  // 0x0098, not reflected
    uint32 : 2 ReceiveTickImplementations;  // 0x0098, not reflected
    UPROPERTY(EditAnywhere) uint8 bShowPropertyDetails : 1;  // 0x0098, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bCheckConditionOnlyBlackBoardChanges : 1;  // 0x0098, mask 0x02
    UPROPERTY() uint8 bIsObservingBB : 1;  // 0x0098, mask 0x04
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDecoratorExecutionActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDecoratorObserverActive() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionFinish(AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionStart(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveObserverActivated(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveObserverDeactivated(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
