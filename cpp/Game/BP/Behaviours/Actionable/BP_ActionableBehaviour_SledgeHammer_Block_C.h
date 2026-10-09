// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_SledgeHammer_Block.BP_ActionableBehaviour_SledgeHammer_Block_C
// Derives from: UBP_ActionableBehaviour_Melee_Block_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3CC, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_SledgeHammer_Block_C : public UBP_ActionableBehaviour_Melee_Block_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB
};
