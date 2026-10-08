// /Game/BP/AI/Bosses/BT/BTS_MakeInvulnerable.BTS_MakeInvulnerable_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_MakeInvulnerable_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanBeDamaged;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDamagePercentThreshold;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BindMinDamageToBlackboard;  // 0x00A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector MinDamageBlackboardKey;  // 0x00B0, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTS_MakeInvulnerable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
