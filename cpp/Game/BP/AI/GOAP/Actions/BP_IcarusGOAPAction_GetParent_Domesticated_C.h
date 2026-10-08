// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_GetParent_Domesticated.BP_IcarusGOAPAction_GetParent_Domesticated_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x80, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_GetParent_Domesticated_C : public UBP_IcarusGOAPAction_Base_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Execute(AIcarusNPCGOAPController* Controller, float Delta);  // parameters 0xD
};
