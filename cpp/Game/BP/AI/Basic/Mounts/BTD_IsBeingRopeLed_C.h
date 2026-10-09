// /Game/BP/AI/Basic/Mounts/BTD_IsBeingRopeLed.BTD_IsBeingRopeLed_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_IsBeingRopeLed_C : public UBTDecorator_BlueprintBase
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
