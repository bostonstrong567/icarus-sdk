// /Game/BP/AI/Basic/Mounts/BTD_CheckNotHungryOrThirsty.BTD_CheckNotHungryOrThirsty_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckNotHungryOrThirsty_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PercentThreshold;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastFoodContainerCheckTime;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTimeBetweenContainerSearches;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastWaterContainerCheckTime;  // 0x00AC, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
