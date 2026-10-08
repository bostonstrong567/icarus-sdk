// /Game/BP/AI/GOAP/BehaviourTrees/BTD_IsRetreated.BTD_IsRetreated_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_IsRetreated_C : public UBTDecorator_BlueprintBase
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
