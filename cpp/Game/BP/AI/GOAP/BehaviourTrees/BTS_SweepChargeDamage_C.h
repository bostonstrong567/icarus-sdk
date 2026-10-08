// /Game/BP/AI/GOAP/BehaviourTrees/BTS_SweepChargeDamage.BTS_SweepChargeDamage_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x140, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_SweepChargeDamage_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ChargeStartLocation;  // 0x00A0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Active;  // 0x00AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, float> HitActors;  // 0x00B0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastAttackLocation;  // 0x0100, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ChargeAbortSection;  // 0x010C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ChargeLoopSection;  // 0x0114, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* IcarusCharacter;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondaryHitCooldown;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHitResult> LastCachedHits;  // 0x0130, size 0x10

    UFUNCTION() void ExecuteUbergraph_BTS_SweepChargeDamage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetChargeDamageRadius();  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void RemoveStaleHitActors();
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldStopCharging(bool& ShouldStop);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TryAttack(APawn* ControlledPawn, bool& WasBlockingAttack);  // parameters 0x9
};
