// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x84, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_Charge_C : public UBP_IcarusGOAPAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastChargeTime;  // 0x0080, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsInRange(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void IsTargetWithinValidChargeDistance(AIcarusNPCGOAPController* Controller, AActor* Target, bool& WithinValidDistance) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
