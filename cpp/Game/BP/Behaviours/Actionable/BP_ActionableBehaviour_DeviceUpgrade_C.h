// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_DeviceUpgrade.BP_ActionableBehaviour_DeviceUpgrade_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_DeviceUpgrade_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum InventoryId;  // 0x0318, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_DeviceUpgrade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
};
