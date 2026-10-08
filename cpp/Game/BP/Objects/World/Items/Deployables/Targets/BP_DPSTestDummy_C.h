// /Game/BP/Objects/World/Items/Deployables/Targets/BP_DPSTestDummy.BP_DPSTestDummy_C
// Derives from: ABP_DeployableTargetDummy_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x76C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DPSTestDummy_C : public ABP_DeployableTargetDummy_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TimerStarted;  // 0x0758, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Damage;  // 0x075C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeStarted;  // 0x0760, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeStopped;  // 0x0764, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CooldownTimer;  // 0x0768, size 0x4

    UFUNCTION(BlueprintCallable) void DoTimeStart();
    UFUNCTION(BlueprintCallable) void DoTimeStop();
    UFUNCTION() void ExecuteUbergraph_BP_DPSTestDummy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x20
};
