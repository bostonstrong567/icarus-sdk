// /Game/BP/Objects/World/Items/Deployables/Defences/BP_Scorpion_Trap_Medium.BP_Scorpion_Trap_Medium_C
// Derives from: ABP_Snare_Trap_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x758, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Scorpion_Trap_Medium_C : public ABP_Snare_Trap_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Wood_Damage;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem_Blood;  // 0x0750, size 0x8

    UFUNCTION(BlueprintCallable) void ApplyModifiers(AActor* Defender);  // parameters 0x8
};
