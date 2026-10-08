// /Game/BP/AI/GOAP/BehaviourTrees/BTT_IcarusGOAP_ClearFocus.BTT_IcarusGOAP_ClearFocus_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_IcarusGOAP_ClearFocus_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTT_IcarusGOAP_ClearFocus(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
