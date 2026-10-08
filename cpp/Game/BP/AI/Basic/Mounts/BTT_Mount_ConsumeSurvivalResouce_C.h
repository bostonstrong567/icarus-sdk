// /Game/BP/AI/Basic/Mounts/BTT_Mount_ConsumeSurvivalResouce.BTT_Mount_ConsumeSurvivalResouce_C
// Derives from: UBTTask_PerformAction_Mount_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x220, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_Mount_ConsumeSurvivalResouce_C : public UBTTask_PerformAction_Mount_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector ContainerKey;  // 0x01D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle TargetResourceItem;  // 0x01F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESurvivalConsumableType SurvivalResourceType;  // 0x0210, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FillableUnitConsumption;  // 0x0214, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ScaleConsumptionByNPCWeight;  // 0x0218, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NutritionMultiplier;  // 0x021C, size 0x4

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetContainerInventory(UInventory*& Inventory);  // parameters 0x8
};
