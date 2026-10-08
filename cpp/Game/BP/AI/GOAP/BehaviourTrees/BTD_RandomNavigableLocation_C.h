// /Game/BP/AI/GOAP/BehaviourTrees/BTD_RandomNavigableLocation.BTD_RandomNavigableLocation_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_RandomNavigableLocation_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OuterRadiusRange;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OutputLocation;  // 0x00A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerRadius;  // 0x00D0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
