// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_BecomeTamed.BP_IcarusGOAPAction_BecomeTamed_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x90, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_BecomeTamed_C : public UBP_IcarusGOAPAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HaveDisabledSight;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPController* CachedControllerRef;  // 0x0088, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Execute(AIcarusNPCGOAPController* Controller, float Delta);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
};
