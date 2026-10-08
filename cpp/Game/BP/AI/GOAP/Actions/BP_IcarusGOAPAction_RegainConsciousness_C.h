// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_RegainConsciousness.BP_IcarusGOAPAction_RegainConsciousness_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x90, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_RegainConsciousness_C : public UBP_IcarusGOAPAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HaveDisabledSight;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPController* CachedControllerRef;  // 0x0088, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ActionReset(bool Interrupted);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GOAPAnimNotify(FString NotifyName, AIcarusNPCGOAPController* Controller);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void ResetSightPerception(AAIController* Target);  // parameters 0x8
};
