// /Game/BP/AI/Bosses/BT/GreatApe/BTT_GreatApeSetNewRandomState.BTT_GreatApeSetNewRandomState_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x160, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_GreatApeSetNewRandomState_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<GreatApeState> CurrentState;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<GreatApeState> NextState;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<GreatApeState> InitialPick;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentStateKey;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector PreviousStateKey;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector HasLogKey;  // 0x0108, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector IsInTreeKey;  // 0x0130, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0158, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTT_GreatApeSetNewRandomState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PickNewState(AIcarusNPCGOAPCharacter* ControlledPawn, bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void Randoo(float& Rando);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
