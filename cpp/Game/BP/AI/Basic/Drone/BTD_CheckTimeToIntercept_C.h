// /Game/BP/AI/Basic/Drone/BTD_CheckTimeToIntercept.BTD_CheckTimeToIntercept_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckTimeToIntercept_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeToIntercept;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ConstantTimeUnderThresholdRequirement;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeSinceUnderThreshold;  // 0x00D0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
