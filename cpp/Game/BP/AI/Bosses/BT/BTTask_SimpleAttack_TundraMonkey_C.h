// /Game/BP/AI/Bosses/BT/BTTask_SimpleAttack_TundraMonkey.BTTask_SimpleAttack_TundraMonkey_C
// Derives from: UBTTask_SimpleAttack_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x248, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_SimpleAttack_TundraMonkey_C : public UBTTask_SimpleAttack_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetActionStats(TMap<FStatsEnum, int32>& ActionStats) const;  // parameters 0x50
    UFUNCTION(BlueprintCallable) void PostDamageDealt(AActor* TargetActor);  // parameters 0x8
};
