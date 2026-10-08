// /Game/BP/AI/GOAP/Motivations/BP_IcarusGOAPMotivation_Safety.BP_IcarusGOAPMotivation_Safety_C
// Derives from: UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x94, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPMotivation_Safety_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> KnownSeenActors;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> KnownHeardActors;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* DistanceCurve;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CallCount;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeLastSafe;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaSafety;  // 0x0090, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
