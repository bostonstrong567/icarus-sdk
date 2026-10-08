// /Game/BP/AI/GOAP/BehaviourTrees/BTS_SweepChargeDamage_IceMammoth.BTS_SweepChargeDamage_IceMammoth_C
// Derives from: UBTS_SweepChargeDamage_C > UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x14C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_SweepChargeDamage_IceMammoth_C : public UBTS_SweepChargeDamage_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0140, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SphereRadius;  // 0x0148, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_SweepChargeDamage_IceMammoth(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetChargeDamageRadius();  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TryAttack(APawn* ControlledPawn, bool& WasBlockingAttack);  // parameters 0x9
};
