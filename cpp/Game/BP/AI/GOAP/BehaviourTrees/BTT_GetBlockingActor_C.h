// /Game/BP/AI/GOAP/BehaviourTrees/BTT_GetBlockingActor.BTT_GetBlockingActor_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xD8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_GetBlockingActor_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector BlockedTargetKey;  // 0x00B0, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_GetBlockingActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
