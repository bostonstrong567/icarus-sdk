// /Game/BP/AI/GOAP/BehaviourTrees/BTD_IsFacingTarget.BTD_IsFacingTarget_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xCE, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_IsFacingTarget_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector ActorOrLocationTargetKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DotThreshold;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreHeight;  // 0x00CC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugDot;  // 0x00CD, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
