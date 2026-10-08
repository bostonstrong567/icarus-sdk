// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_EatNearbyCarcasses_Protect_Sleep.BP_IcarusGOAPAction_EatNearbyCarcasses_Protect_Sleep_C
// Derives from: UBP_IcarusGOAPAction_EatNearbyCarcasses_C > UBP_IcarusGOAPAction_Interact_Base_C > UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0xF5, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_EatNearbyCarcasses_Protect_Sleep_C : public UBP_IcarusGOAPAction_EatNearbyCarcasses_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ProtectedActorKey;  // 0x00EC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SLEEP_AFTER_EATING;  // 0x00F4, size 0x1

    UFUNCTION(BlueprintCallable) void ConditionalBuffCorpseFood(AIcarusNPCGOAPController* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EatFromCorpse(AIcarusNPCGOAPController* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ForceDormant(AIcarusNPCGOAPController* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
