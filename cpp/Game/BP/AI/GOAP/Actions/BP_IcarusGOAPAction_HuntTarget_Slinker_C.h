// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_HuntTarget_Slinker.BP_IcarusGOAPAction_HuntTarget_Slinker_C
// Derives from: UBP_IcarusGOAPAction_HuntTarget_C > UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x8D, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_HuntTarget_Slinker_C : public UBP_IcarusGOAPAction_HuntTarget_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
};
