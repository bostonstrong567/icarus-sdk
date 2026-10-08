// /Game/BP/AI/GOAP/BehaviourTrees/BTD_CanDestroyBlockingActor.BTD_CanDestroyBlockingActor_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CanDestroyBlockingActor_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector ActorToDestroy;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldCheckActorToDestroy;  // 0x00C8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
