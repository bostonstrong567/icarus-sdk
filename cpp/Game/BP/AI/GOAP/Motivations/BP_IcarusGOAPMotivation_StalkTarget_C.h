// /Game/BP/AI/GOAP/Motivations/BP_IcarusGOAPMotivation_StalkTarget.BP_IcarusGOAPMotivation_StalkTarget_C
// Derives from: UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x60, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPMotivation_StalkTarget_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
