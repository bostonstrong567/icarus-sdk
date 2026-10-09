// /Game/BP/AI/GOAP/Motivations/BP_IcarusGOAPMotivation_Base.BP_IcarusGOAPMotivation_Base_C
// Derives from: UIcarusGOAPMotivation > UObject
// size 0x60, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPMotivation_Base_C : public UIcarusGOAPMotivation
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
