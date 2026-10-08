// /Game/BP/AI/Basic/Mounts/BTS_SetCurrentMountAction.BTS_SetCurrentMountAction_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_SetCurrentMountAction_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMountAction MountAction;  // 0x00A8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTS_SetCurrentMountAction(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionFinish(AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionStart(AActor* OwnerActor);  // parameters 0x8
};
