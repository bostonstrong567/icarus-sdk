// /Game/BP/AI/GOAP/Motivations/BP_IcarusGOAPMotivation_Hunger.BP_IcarusGOAPMotivation_Hunger_C
// Derives from: UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x68, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPMotivation_Hunger_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IncreasePerSecond;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delta;  // 0x0064, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
