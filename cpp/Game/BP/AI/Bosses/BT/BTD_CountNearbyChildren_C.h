// /Game/BP/AI/Bosses/BT/BTD_CountNearbyChildren.BTD_CountNearbyChildren_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CountNearbyChildren_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyDistance;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NearbyChildrenCount;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinChildren;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxChildren;  // 0x00AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum MaxChildrenScalingRule;  // 0x00B0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
