// /Game/BP/AI/Basic/Kea/BTTask_Detonate.BTTask_Detonate_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xB4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_Detonate_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DetonationTime;  // 0x00B0, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_Detonate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
