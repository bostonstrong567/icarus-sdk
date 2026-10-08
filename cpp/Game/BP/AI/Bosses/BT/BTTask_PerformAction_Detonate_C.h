// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_Detonate.BTTask_PerformAction_Detonate_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1A0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_Detonate_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DetonationTime;  // 0x019C, size 0x4

    UFUNCTION(BlueprintCallable) void DoAction();
};
