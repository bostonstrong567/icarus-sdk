// /Game/BP/AI/GOAP/Motivations/BP_IcarusGOAPMotivation_PackFollower.BP_IcarusGOAPMotivation_PackFollower_C
// Derives from: UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x60, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPMotivation_PackFollower_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
