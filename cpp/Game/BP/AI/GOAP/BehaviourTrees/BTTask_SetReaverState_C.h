// /Game/BP/AI/GOAP/BehaviourTrees/BTTask_SetReaverState.BTTask_SetReaverState_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xE0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_SetReaverState_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ReaverState> DesiredState;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentStateKey;  // 0x00B8, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTTask_SetReaverState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
