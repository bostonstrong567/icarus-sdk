// /Game/BP/AI/NPC/BTD_CheckRemainingMoveDistance.BTD_CheckRemainingMoveDistance_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckRemainingMoveDistance_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceThreshold;  // 0x00A0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
