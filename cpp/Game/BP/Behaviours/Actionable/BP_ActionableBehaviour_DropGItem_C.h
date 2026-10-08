// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_DropGItem.BP_ActionableBehaviour_DropGItem_C
// Derives from: UBP_ActionableBehaviour_Hold_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x370, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_DropGItem_C : public UBP_ActionableBehaviour_Hold_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8

    UFUNCTION(BlueprintCallable) void CancelDrop();
    UFUNCTION(BlueprintCallable) void DropItem(EActionableEventType ActionType);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_DropGItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
};
