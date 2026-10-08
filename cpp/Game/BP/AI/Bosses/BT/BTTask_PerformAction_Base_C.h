// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_Base.BTTask_PerformAction_Base_C
// Derives from: UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x199, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_Base_C : public UBTTask_PlayMontage_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ActionNotifyName;  // 0x0138, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> ActionStats;  // 0x0140, size 0x50
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusStatContainer* OwnerStatContainer;  // 0x0190, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FinishOnActionExecution;  // 0x0198, size 0x1

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetActionStats(TMap<FStatsEnum, int32>& ActionStats) const;  // parameters 0x50
    UFUNCTION(BlueprintCallable) void OnMontageComplete();
    UFUNCTION(BlueprintCallable) void OnMontageInterrupted();
    UFUNCTION(BlueprintCallable) void OnMontageNotifyBegin(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbort(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
