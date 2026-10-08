// /Game/BP/AI/GOAP/BehaviourTrees/BTS_SweepBoneDamage.BTS_SweepBoneDamage_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x189, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_SweepBoneDamage_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Active;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AActor*, float> HitActors;  // 0x00A8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> LastTraceLocations;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* IcarusCharacter;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondaryHitCooldown;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugTrace;  // 0x0114, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> TraceSockets;  // 0x0118, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DealDamageDuringMontages;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageRadius;  // 0x012C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SocketVelocityThreshold;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPositionHistory> SocketHistory;  // 0x0138, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> SocketMovementState;  // 0x0148, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector LastHitActorBlackboardKey;  // 0x0158, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LaunchTargetSideways;  // 0x0180, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ToppleTrees;  // 0x0181, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TreeToppleDistance;  // 0x0184, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreFriendlyFire;  // 0x0188, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTS_SweepBoneDamage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDamageRadius();  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void RecordLastHitActor();
    UFUNCTION(BlueprintCallable) void RemoveStaleHitActors();
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldStopCharging(bool& ShouldStop);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TryAttack(APawn* ControlledPawn, bool& WasBlockingAttack);  // parameters 0x9
};
