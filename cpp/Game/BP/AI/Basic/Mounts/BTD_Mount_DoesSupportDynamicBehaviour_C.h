// /Game/BP/AI/Basic/Mounts/BTD_Mount_DoesSupportDynamicBehaviour.BTD_Mount_DoesSupportDynamicBehaviour_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_Mount_DoesSupportDynamicBehaviour_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag BehaviourTag;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ErrorIfUnsupported;  // 0x00A8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
