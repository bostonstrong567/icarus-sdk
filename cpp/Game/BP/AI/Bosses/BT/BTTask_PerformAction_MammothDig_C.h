// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_MammothDig.BTTask_PerformAction_MammothDig_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1D8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_MammothDig_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DummyObjectBlackboardName;  // 0x01A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector LastLocation;  // 0x01B0, size 0x28

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_MammothDig(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
