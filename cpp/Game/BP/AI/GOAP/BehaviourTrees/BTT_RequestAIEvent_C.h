// /Game/BP/AI/GOAP/BehaviourTrees/BTT_RequestAIEvent.BTT_RequestAIEvent_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xC1, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_RequestAIEvent_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIEventsEnum EventToRequest;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MustSucceed;  // 0x00C0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTT_RequestAIEvent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
