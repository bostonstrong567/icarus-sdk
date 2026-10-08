// /Game/BP/AI/GOAP/BehaviourTrees/BTD_DistanceCheck.BTD_DistanceCheck_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x120, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_DistanceCheck_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Distance;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle DistanceStat;  // 0x00A4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OptionalMinDistance;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorOrLocation;  // 0x00C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OptionalOriginKey;  // 0x00E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OptionalMinDistanceKeyName;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AlternateOptionalDistanceKeyName;  // 0x0118, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
