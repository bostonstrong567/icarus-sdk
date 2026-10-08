// /Game/BP/AI/GOAP/Motivations/BP_GOAPMotivation_Hunting.BP_GOAPMotivation_Hunting_C
// Derives from: UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x6C, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_GOAPMotivation_Hunting_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaChange;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTargetDistance;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTargetDistance;  // 0x0068, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
