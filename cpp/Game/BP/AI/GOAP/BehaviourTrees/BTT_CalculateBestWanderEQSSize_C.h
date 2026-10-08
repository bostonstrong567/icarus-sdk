// /Game/BP/AI/GOAP/BehaviourTrees/BTT_CalculateBestWanderEQSSize.BTT_CalculateBestWanderEQSSize_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x128, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_CalculateBestWanderEQSSize_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector WanderEQSGridSizeKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector WanderEQSConeSizeKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector WanderEQSHalfMaximumSizeKey;  // 0x0100, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_CalculateBestWanderEQSSize(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
