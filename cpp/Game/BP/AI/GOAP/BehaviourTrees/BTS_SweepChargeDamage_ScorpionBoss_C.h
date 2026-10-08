// /Game/BP/AI/GOAP/BehaviourTrees/BTS_SweepChargeDamage_ScorpionBoss.BTS_SweepChargeDamage_ScorpionBoss_C
// Derives from: UBTS_SweepChargeDamage_C > UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x154, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_SweepChargeDamage_ScorpionBoss_C : public UBTS_SweepChargeDamage_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0140, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StoppingDistance;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasEnteredArena;  // 0x014C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeDamageRadius;  // 0x0150, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_SweepChargeDamage_ScorpionBoss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetChargeDamageRadius();  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldStopCharging(bool& ShouldStop);  // parameters 0x1
};
