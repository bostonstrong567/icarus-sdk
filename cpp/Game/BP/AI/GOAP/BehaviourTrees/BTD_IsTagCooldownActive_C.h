// /Game/BP/AI/GOAP/BehaviourTrees/BTD_IsTagCooldownActive.BTD_IsTagCooldownActive_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_IsTagCooldownActive_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag CooldownTag;  // 0x00A0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
