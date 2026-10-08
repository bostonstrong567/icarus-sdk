// /Game/BP/AI/GOAP/BehaviourTrees/BTD_ArePlayersNearby.BTD_ArePlayersNearby_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_ArePlayersNearby_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyDistance;  // 0x00A0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
