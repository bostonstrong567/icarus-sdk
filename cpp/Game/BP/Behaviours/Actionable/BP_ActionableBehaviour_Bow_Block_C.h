// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Bow_Block.BP_ActionableBehaviour_Bow_Block_C
// Derives from: UBP_ActionableBehaviour_Shield_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Bow_Block_C : public UBP_ActionableBehaviour_Shield_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Bow_Block(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB
    UFUNCTION(BlueprintCallable) void StopBlocking();
};
