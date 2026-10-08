// /Game/BP/AI/Bosses/BT/BTD_NumberGreaterThan.BTD_NumberGreaterThan_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xCC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_NumberGreaterThan_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector FloatOrIntKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ComparisonValue;  // 0x00C8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
