// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_EnragedAttack.BP_IcarusGOAPAction_EnragedAttack_C
// Derives from: UBP_IcarusGOAPAction_Melee_Attack_C > UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x94, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_EnragedAttack_C : public UBP_IcarusGOAPAction_Melee_Attack_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
