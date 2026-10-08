// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_RunForSafety.BP_IcarusGOAPAction_RunForSafety_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x80, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_RunForSafety_C : public UBP_IcarusGOAPAction_Base_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
