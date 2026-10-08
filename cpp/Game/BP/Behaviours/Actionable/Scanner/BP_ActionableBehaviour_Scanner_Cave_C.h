// /Game/BP/Behaviours/Actionable/Scanner/BP_ActionableBehaviour_Scanner_Cave.BP_ActionableBehaviour_Scanner_Cave_C
// Derives from: UBP_ActionableBehaviour_Scanner_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3B8, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Scanner_Cave_C : public UBP_ActionableBehaviour_Scanner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03B0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_Cave(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
};
