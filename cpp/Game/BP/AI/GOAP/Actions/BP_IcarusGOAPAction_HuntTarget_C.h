// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_HuntTarget.BP_IcarusGOAPAction_HuntTarget_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x8D, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_HuntTarget_C : public UBP_IcarusGOAPAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTargetDistance;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldHuntAsPack;  // 0x008C, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ActionReset(bool Interrupted);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void EngageAllHuntingNPCs();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void GetClosestHuntingTarget(AActor*& Target) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsInRange(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
