// /Game/BP/AI/Basic/BTTask_AddModifierState.BTTask_AddModifierState_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xCC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_AddModifierState_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle DesiredModifier;  // 0x00B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModifierLifetime;  // 0x00C8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_AddModifierState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
