// /Game/BP/AI/GOAP/Motivations/BP_IcarusGOAPMotivation_Anchored.BP_IcarusGOAPMotivation_Anchored_C
// Derives from: UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x64, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPMotivation_Anchored_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaCostUpdate;  // 0x0060, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
