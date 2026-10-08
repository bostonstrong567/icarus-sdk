// /Game/BP/AI/GOAP/BehaviourTrees/BTTask_IcarusGOAP_SetMovementState.BTTask_IcarusGOAP_SetMovementState_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xB1, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_IcarusGOAP_SetMovementState_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMovementState NewMovementState;  // 0x00B0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_IcarusGOAP_SetMovementState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
