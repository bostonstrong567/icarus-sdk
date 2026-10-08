// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_EnableCarapace.BTTask_PerformAction_EnableCarapace_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x290, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_EnableCarapace_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldApplyCarapace;  // 0x01A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ApplyDuration;  // 0x01AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentCarapacePercent;  // 0x01B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x01B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PhysicalDamageResistancePercent;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> ExtraCarapaceStats;  // 0x01C8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector HasCarapaceBlackboardKey;  // 0x0218, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> TempStats;  // 0x0240, size 0x50

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_EnableCarapace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnMontageComplete();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UpdateCarapaceAmount(float NewPercent);  // parameters 0x4
};
