// /Game/BP/AI/Basic/BTD_FeatureLevel.BTD_FeatureLevel_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_FeatureLevel_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFeatureLevelsEnum FeatureLevel;  // 0x00A0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
