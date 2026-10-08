// /Game/BP/AI/Basic/Mounts/BTD_CanTargetBeFertilized.BTD_CanTargetBeFertilized_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CanTargetBeFertilized_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00A0, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
