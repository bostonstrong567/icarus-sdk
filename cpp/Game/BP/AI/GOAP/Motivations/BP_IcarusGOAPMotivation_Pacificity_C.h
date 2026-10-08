// /Game/BP/AI/GOAP/Motivations/BP_IcarusGOAPMotivation_Pacificity.BP_IcarusGOAPMotivation_Pacificity_C
// Derives from: UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x74, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPMotivation_Pacificity_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delta;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DecreasePerMinute;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsHungry;  // 0x006C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsAngry;  // 0x006D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UID;  // 0x0070, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
