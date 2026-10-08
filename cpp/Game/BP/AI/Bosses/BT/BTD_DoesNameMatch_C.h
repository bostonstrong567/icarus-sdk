// /Game/BP/AI/Bosses/BT/BTD_DoesNameMatch.BTD_DoesNameMatch_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_DoesNameMatch_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector NameKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName NameToMatchAgainst;  // 0x00C8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
