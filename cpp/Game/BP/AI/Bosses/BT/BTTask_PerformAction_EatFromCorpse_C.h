// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_EatFromCorpse.BTTask_PerformAction_EatFromCorpse_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1C8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_EatFromCorpse_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CorpseActorKey;  // 0x01A0, size 0x28

    UFUNCTION(BlueprintCallable) void DoAction();
};
