// /Game/BP/AI/Basic/Mounts/BTD_HasStat.BTD_HasStat_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xB8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_HasStat_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AtLeastRequiredValue;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum RequiredStat;  // 0x00A8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
