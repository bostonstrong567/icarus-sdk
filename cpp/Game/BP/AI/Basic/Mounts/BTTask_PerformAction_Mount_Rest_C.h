// /Game/BP/AI/Basic/Mounts/BTTask_PerformAction_Mount_Rest.BTTask_PerformAction_Mount_Rest_C
// Derives from: UBTTask_PerformAction_Mount_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1F8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_Mount_Rest_C : public UBTTask_PerformAction_Mount_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EnableOvernightSleeping;  // 0x01D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SleepDuration;  // 0x01DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SleepDurationDeviation;  // 0x01E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D NighttimeStartStop;  // 0x01E4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeStartedSleeping;  // 0x01EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D RandomisedNighttimeStartStop;  // 0x01F0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_Mount_Rest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void IsItNighttime(bool& Yes);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbort(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
