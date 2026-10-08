// /Game/BP/AI/Bosses/BT/BTTask_SimpleAttack.BTTask_SimpleAttack_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x248, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_SimpleAttack_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActor;  // 0x01A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSweepDamage;  // 0x01D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastAttackLocation;  // 0x01D4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ChargeStartLocation;  // 0x01E0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, float> HitActors;  // 0x01F0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinZDistance;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTimeBetweenSuccessiveHits;  // 0x0244, size 0x4

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION() void ExecuteUbergraph_BTTask_SimpleAttack(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PostDamageDealt(AActor* TargetActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SweepDamage(bool& WasBlockingAttack);  // parameters 0x1
};
