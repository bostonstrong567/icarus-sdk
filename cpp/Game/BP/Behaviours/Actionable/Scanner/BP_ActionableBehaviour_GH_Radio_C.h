// /Game/BP/Behaviours/Actionable/Scanner/BP_ActionableBehaviour_GH_Radio.BP_ActionableBehaviour_GH_Radio_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x320, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_GH_Radio_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x0318, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_GH_Radio(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetClosestGHDevice(ABP_Great_Hunt_Device_C*& ClosestDevice);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
