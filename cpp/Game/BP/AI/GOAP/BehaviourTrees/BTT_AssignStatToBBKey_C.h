// /Game/BP/AI/GOAP/BehaviourTrees/BTT_AssignStatToBBKey.BTT_AssignStatToBBKey_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x140, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_AssignStatToBBKey_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector FloatBlackboardKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector IntBlackboardKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum Stat;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultValue;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Debug;  // 0x0114, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector dummykey;  // 0x0118, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_AssignStatToBBKey(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
