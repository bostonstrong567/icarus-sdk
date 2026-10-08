// /Game/BP/AI/Basic/Mounts/BTD_CheckLastMountMovementResult.BTD_CheckLastMountMovementResult_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckLastMountMovementResult_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector ResultKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<MountLastMoveResult> DesiredState;  // 0x00C8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
