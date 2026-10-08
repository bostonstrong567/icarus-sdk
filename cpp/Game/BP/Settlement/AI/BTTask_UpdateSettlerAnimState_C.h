// /Game/BP/Settlement/AI/BTTask_UpdateSettlerAnimState.BTTask_UpdateSettlerAnimState_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xDA, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_UpdateSettlerAnimState_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector AnimStateKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SettlementNPC_AnimState> DesiredAnimState;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseDefaultOverride;  // 0x00D9, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_UpdateSettlerAnimState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
