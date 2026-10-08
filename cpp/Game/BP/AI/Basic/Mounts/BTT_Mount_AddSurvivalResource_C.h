// /Game/BP/AI/Basic/Mounts/BTT_Mount_AddSurvivalResource.BTT_Mount_AddSurvivalResource_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xD4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_Mount_AddSurvivalResource_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESurvivalConsumableType SurvivalResourceType;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UnitsToAdd;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVirtualStatsEnum StatBasedUnitsToAdd;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldSubtractResource;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RandomDeviationPercent;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RandomDeviation;  // 0x00D0, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTT_Mount_AddSurvivalResource(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
