// /Game/BP/AI/Basic/Kea/BTD_IsTargetValidCorpse.BTD_IsTargetValidCorpse_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_IsTargetValidCorpse_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetCorpseKey;  // 0x00A0, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
