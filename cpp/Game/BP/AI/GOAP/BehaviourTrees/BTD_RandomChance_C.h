// /Game/BP/AI/GOAP/BehaviourTrees/BTD_RandomChance.BTD_RandomChance_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_RandomChance_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Chance;  // 0x00A0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
