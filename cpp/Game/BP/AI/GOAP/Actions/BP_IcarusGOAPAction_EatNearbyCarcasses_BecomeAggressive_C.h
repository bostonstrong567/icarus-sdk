// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_EatNearbyCarcasses_BecomeAggressive.BP_IcarusGOAPAction_EatNearbyCarcasses_BecomeAggressive_C
// Derives from: UBP_IcarusGOAPAction_EatNearbyCarcasses_C > UBP_IcarusGOAPAction_Interact_Base_C > UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0xF4, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_EatNearbyCarcasses_BecomeAggressive_C : public UBP_IcarusGOAPAction_EatNearbyCarcasses_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ProtectedActorKey;  // 0x00EC, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Execute(AIcarusNPCGOAPController* Controller, float Delta);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool UpdateCost(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
