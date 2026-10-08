// /Script/Icarus.IcarusGOAPAction
// Derives from: UObject
// size 0x80, declared in Icarus/Source/Icarus/AI/IcarusGOAPAction.h

UCLASS()
class UIcarusGOAPAction : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Target;  // 0x0050, size 0x8
    UPROPERTY(BlueprintReadOnly) AIcarusNPCGOAPController* CachedController;  // 0x0058, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FGOAPActionsRowHandle CachedRowHandle;  // 0x0028
    float ActionTimer;  // 0x0040
    float TimeSinceLastCostUpdate;  // 0x0044
    float TimeSinceLastTick;  // 0x0048
    bool AttemptedExecuting;  // 0x004C
    FGOAPState InternalPreconditions;  // 0x0060, private
    FGOAPState InternalEffects;  // 0x0070, private

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool ActionReset(bool Interrupted);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) bool AreEffectsSatisfied(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ArePreconditionsSatisfied(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) bool CheckContextualPreconditions(AIcarusNPCGOAPController* Controller) const;  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) bool Execute(AIcarusNPCGOAPController* Controller, float Delta);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) bool GOAPAnimNotify(FString NotifyName, AIcarusNPCGOAPController* Controller);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) FGOAPAction GetActionData();  // parameters 0x108
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool GetActionStats(TMap<FBaseStatsEnum, int32>& ActionStats);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool IsInRange(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintNativeEvent) bool UpdateCost(AIcarusNPCGOAPController* Controller);  // parameters 0x9

    // Virtual functions that start here:
    //   ActionReset_Implementation, CheckContextualPreconditions_Implementation, Execute_Implementation
    //   ExecutionComplete_Implementation, GetActionStats_Implementation, IsInRange_Implementation
    //   PlanAction_Implementation, UpdateCost_Implementation
};
