// /Game/BP/AI/Bosses/BT/BTTask_PerformAction_ShootBulletEx.BTTask_PerformAction_ShootBulletEx_C
// Derives from: UBTTask_PerformAction_SpitAttack_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x2A8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_ShootBulletEx_C : public UBTTask_PerformAction_SpitAttack_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A0, size 0x8

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION() void ExecuteUbergraph_BTTask_PerformAction_ShootBulletEx(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupCarrierDrone();
    UFUNCTION(BlueprintCallable) void SetupHunterDrone();
    UFUNCTION(BlueprintCallable) void SetupScoutDrone();
    UFUNCTION(BlueprintCallable) void SetupStandardDrone();
    UFUNCTION(BlueprintCallable) void SetupVarsFromDroneType();
};
