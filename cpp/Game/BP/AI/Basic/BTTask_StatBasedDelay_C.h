// /Game/BP/AI/Basic/BTTask_StatBasedDelay.BTTask_StatBasedDelay_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xD4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_StatBasedDelay_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle Stat;  // 0x00B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPerMinuteRateStat;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultStatValue;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeviationPercent;  // 0x00D0, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_StatBasedDelay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
