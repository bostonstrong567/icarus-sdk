// /Game/BP/AI/GOAP/Motivations/BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C
// Derives from: UBP_IcarusGOAPMotivation_Base_C > UIcarusGOAPMotivation > UObject
// size 0x88, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPMotivation_Protective_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AAITargetNode_C* TargetNodeRef;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaThreat;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ThreatCurve;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LastTargetActor;  // 0x0080, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_IcarusGOAPMotivation_Protective(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnMotivationTriggerEvent(AIcarusNPCGOAPController* Controller, const FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered);  // parameters 0x71
    UFUNCTION(BlueprintCallable) void SpawnTargetNode(AController* Controller, AAITargetNode_C*& TargetNodeRef);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(float Delta, AIcarusNPCGOAPController* Controller);  // parameters 0x11
};
