// /Game/BP/AI/Basic/Mounts/BTTask_Mount_SimpleAttack.BTTask_Mount_SimpleAttack_C
// Derives from: UBTTask_PerformAction_Mount_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x230, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_Mount_SimpleAttack_C : public UBTTask_PerformAction_Mount_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x01D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseSweepDamage;  // 0x01D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastAttackLocation;  // 0x01DC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> HitActors;  // 0x01E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ChargeStartLocation;  // 0x01F8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActor;  // 0x0208, size 0x28

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION() void ExecuteUbergraph_BTTask_Mount_SimpleAttack(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SweepDamage(bool& WasBlockingAttack);  // parameters 0x1
};
