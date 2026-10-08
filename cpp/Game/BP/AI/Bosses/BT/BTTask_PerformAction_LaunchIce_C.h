// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_LaunchIce.BTTask_PerformAction_LaunchIce_C
// Derives from: UBTTask_PerformAction_SpitAttack_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x2F0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_LaunchIce_C : public UBTTask_PerformAction_SpitAttack_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DummyObjectBlackboardName;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpitballScale;  // 0x02B0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector LastLocation;  // 0x02C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Min;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Max;  // 0x02EC, size 0x4

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_LaunchIce(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSpitballScale(FVector& OutScale);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
