// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0xA0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_RetreatAndRegenerate_C : public UBP_IcarusGOAPAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName LastRetreatHealthKey;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName LastRetreatTimeKey;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RetreatTargetLocationKey;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RetreatTargetActorKey;  // 0x0098, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
