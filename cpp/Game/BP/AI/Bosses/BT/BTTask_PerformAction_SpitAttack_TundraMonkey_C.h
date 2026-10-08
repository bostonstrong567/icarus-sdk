// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_SpitAttack_TundraMonkey.BTTask_PerformAction_SpitAttack_TundraMonkey_C
// Derives from: UBTTask_PerformAction_SpitAttack_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x2A0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_SpitAttack_TundraMonkey_C : public UBTTask_PerformAction_SpitAttack_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetActionStats(TMap<FStatsEnum, int32>& ActionStats) const;  // parameters 0x50
    UFUNCTION(BlueprintCallable) void OnProjectileHit(FHitResult Hit);  // parameters 0x88
};
