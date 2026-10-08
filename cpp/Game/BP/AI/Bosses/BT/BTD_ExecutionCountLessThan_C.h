// /Game/BP/AI/Bosses/BT/BTD_ExecutionCountLessThan.BTD_ExecutionCountLessThan_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_ExecutionCountLessThan_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumExecutions;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TargetNumber;  // 0x00AC, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTD_ExecutionCountLessThan(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecutionStart(AActor* OwnerActor);  // parameters 0x8
};
