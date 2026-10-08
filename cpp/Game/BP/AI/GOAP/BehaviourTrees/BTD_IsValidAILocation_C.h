// /Game/BP/AI/GOAP/BehaviourTrees/BTD_IsValidAILocation.BTD_IsValidAILocation_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_IsValidAILocation_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBlackboardKeySelector VectorBlackboardKey;  // 0x00A0, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
