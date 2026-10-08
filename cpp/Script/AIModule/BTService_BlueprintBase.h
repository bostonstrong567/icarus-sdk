// /Script/AIModule.BTService_BlueprintBase
// Derives from: UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x98, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Services/BTService_BlueprintBase.h

UCLASS(Abstract)
class UBTService_BlueprintBase : public UBTService
{
public:
    UPROPERTY(Transient) AAIController* AIOwner;  // 0x0070, size 0x8
    UPROPERTY(Transient) AActor* ActorOwner;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere) uint8 bShowPropertyDetails : 1;  // 0x0090, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bShowEventDetails : 1;  // 0x0090, mask 0x02

    // Not reflected: the engine's scripting cannot see these.
    TArray<FProperty *,TSizedDefaultAllocator<32> > PropertyData;  // 0x0080, protected
    uint32 : 2 ReceiveTickImplementations;  // 0x0090, protected
    uint32 : 2 ReceiveActivationImplementations;  // 0x0090, protected
    uint32 : 2 ReceiveDeactivationImplementations;  // 0x0090, protected
    uint32 : 2 ReceiveSearchStartImplementations;  // 0x0090, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsServiceActive() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivation(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivation(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveSearchStart(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
