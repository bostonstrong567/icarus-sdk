// /Game/BP/AI/Basic/BTTask_RemoveModifierStateOfType.BTTask_RemoveModifierStateOfType_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xC9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_RemoveModifierStateOfType_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle ModifierType;  // 0x00B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FailWithoutRemoval;  // 0x00C8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_RemoveModifierStateOfType(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
