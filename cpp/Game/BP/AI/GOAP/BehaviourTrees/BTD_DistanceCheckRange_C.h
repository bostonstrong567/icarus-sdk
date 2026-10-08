// /Game/BP/AI/GOAP/BehaviourTrees/BTD_DistanceCheckRange.BTD_DistanceCheckRange_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x148, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_DistanceCheckRange_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistance;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorOrLocation;  // 0x00A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OptionalOriginKey;  // 0x00D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector MinDistanceKey;  // 0x00F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector MaxEngageDistanceKey;  // 0x0120, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
