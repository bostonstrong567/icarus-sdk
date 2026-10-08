// /Game/BP/AI/GOAP/BehaviourTrees/BTD_CheckDistanceToNearestPlayer.BTD_CheckDistanceToNearestPlayer_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA5, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckDistanceToNearestPlayer_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxDistance;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use2DDistance;  // 0x00A4, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
