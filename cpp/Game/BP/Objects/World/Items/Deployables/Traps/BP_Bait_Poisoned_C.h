// /Game/BP/Objects/World/Items/Deployables/Traps/BP_Bait_Poisoned.BP_Bait_Poisoned_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Bait_Poisoned_C : public ABP_DeployableBase_C, public IBP_GOAPBaitInterface_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* P_Smoke_Poison;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FlyAudio;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies1;  // 0x0738, size 0x8

    UFUNCTION(BlueprintCallable) void GetModifierToApplyOnConsume(FModifierStatesRowHandle& Modifier, float& Lifetime);  // parameters 0x1C
};
