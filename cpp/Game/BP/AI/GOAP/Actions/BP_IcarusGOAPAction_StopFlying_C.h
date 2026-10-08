// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_StopFlying.BP_IcarusGOAPAction_StopFlying_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x80, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_StopFlying_C : public UBP_IcarusGOAPAction_Base_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsInRange(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
