// /Game/BP/AI/GOAP/Actions/BP_IcarusGOAPAction_GotoAnchorPoint.BP_IcarusGOAPAction_GotoAnchorPoint_C
// Derives from: UBP_IcarusGOAPAction_Base_C > UIcarusGOAPAction > UObject
// size 0x94, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGOAPAction_GotoAnchorPoint_C : public UBP_IcarusGOAPAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TimesBlocked;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TimesBlockedBeforeTeleport;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastBlockLocation;  // 0x0088, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ActionReset(bool Interrupted);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ExecutionComplete(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetActionStats(TMap<FBaseStatsEnum, int32>& ActionStats);  // parameters 0x51
    UFUNCTION(BlueprintCallable) void OnGOAPMovementBlocked(FVector CurrentLocation, FVector TargetLocation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PlanAction(AIcarusNPCGOAPController* Controller);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ResetGOAPState();
};
