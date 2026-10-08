// /Game/BP/AI/Bosses/BT/GreatApe/BTT_GreatApeSetState.BTT_GreatApeSetState_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x108, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_GreatApeSetState_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentStateKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<GreatApeState> CurrentState;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<GreatApeState> NextState;  // 0x00D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector PreviousStateKey;  // 0x00E0, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_GreatApeSetState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
