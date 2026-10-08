// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_DrinkWater.BP_IcarusGOAPAction_DrinkWater_C
// Derives from: UBP_IcarusGOAPAction_Interact_Base_C > UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0xA0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_DrinkWater_C : public UBP_IcarusGOAPAction_Interact_Base_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void GetInteractLocation(AIcarusNPCGOAPController* ForController, FVector& OutLocation, bool& Success);  // parameters 0x15
};
