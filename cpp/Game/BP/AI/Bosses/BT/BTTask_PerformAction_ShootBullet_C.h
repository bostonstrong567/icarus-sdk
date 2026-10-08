// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_ShootBullet.BTTask_PerformAction_ShootBullet_C
// Derives from: UBTTask_PerformAction_SpitAttack_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x2A0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_ShootBullet_C : public UBTTask_PerformAction_SpitAttack_C
{
public:

    UFUNCTION(BlueprintCallable) void DoAction();
};
