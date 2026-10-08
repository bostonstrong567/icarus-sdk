// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_Base.BP_IcarusGOAPAction_Base_C
// Derives from: UIcarusGOAPAction > UObject
// size 0x80, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_Base_C : public UIcarusGOAPAction
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Execute(AIcarusNPCGOAPController* Controller, float Delta);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
