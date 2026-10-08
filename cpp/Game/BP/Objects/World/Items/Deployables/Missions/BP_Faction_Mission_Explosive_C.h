// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Faction_Mission_Explosive.BP_Faction_Mission_Explosive_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Explosive_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Extractor_Audio;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem_Loop;  // 0x0738, size 0x8
};
