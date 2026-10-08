// /Game/BP/AI/GOAP/BehaviourTrees/BTT_FindWanderLocation.BTT_FindWanderLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xDC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindWanderLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector target_location;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float distance;  // 0x00D8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTT_FindWanderLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
