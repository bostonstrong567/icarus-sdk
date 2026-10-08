// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x94, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_Melee_Attack_C : public UBP_IcarusGOAPAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AAITargetNode_C* TargetNodeRef;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastTargetSwitchTime;  // 0x0090, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ActionReset(bool Interrupted);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsInRange(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void TrySwitchAttackTarget(AIcarusNPCGOAPController* Controller, bool& DidSwitch);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
