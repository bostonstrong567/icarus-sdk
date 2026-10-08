// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_FireNPCWeapon.BTTask_PerformAction_FireNPCWeapon_C
// Derives from: UBTTask_PerformAction_SpitAttack_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x2A0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_FireNPCWeapon_C : public UBTTask_PerformAction_SpitAttack_C
{
public:

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION(BlueprintCallable) void GetProjectileSourceLocationAndRotation(FVector& OutDamageSource, FRotator& OutCustomLaunchRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnProjectileFired(FTransform SpawnTransform);  // parameters 0x30
};
