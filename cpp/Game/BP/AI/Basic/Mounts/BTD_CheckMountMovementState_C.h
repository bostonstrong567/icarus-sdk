// /Game/BP/AI/Basic/Mounts/BTD_CheckMountMovementState.BTD_CheckMountMovementState_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckMountMovementState_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector StateKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMountMovementBehaviourState DesiredState;  // 0x00C8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
