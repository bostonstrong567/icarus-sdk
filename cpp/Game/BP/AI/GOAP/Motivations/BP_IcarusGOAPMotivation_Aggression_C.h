// /Game/BP/AI/GOAP/Motivations/BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C
// Derives from: UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x90, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPMotivation_Aggression_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* DistanceCurve;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeLastSafe;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AAITargetNode_C* TargetNodeRef;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LastHostileTarget;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PerSecondAggressionDecrease;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DecreaseDelta;  // 0x008C, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_IcarusGOAPMotivation_Aggression(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnMotivationTriggerEvent(AIcarusNPCGOAPController* Controller, const FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered);  // parameters 0x71
    UFUNCTION(BlueprintCallable) void SpawnTargetNode(AController* Controller, AAITargetNode_C*& TargetNode);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
