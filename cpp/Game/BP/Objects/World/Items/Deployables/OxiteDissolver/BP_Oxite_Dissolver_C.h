// /Game/BP/Objects/World/Items/Deployables/OxiteDissolver/BP_Oxite_Dissolver.BP_Oxite_Dissolver_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Oxite_Dissolver_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Drip04;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Drip03;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Drip02;  // 0x0990, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_Drip01;  // 0x0998, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara_TopFX;  // 0x09A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Niagara;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_ActiveAudio_Combust;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_ActiveAudio_Tanks;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_DEP_Oxite_Dissolver_Door_Sulfur;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_DEP_Oxite_Dissolver_Door_Oxite;  // 0x09C8, size 0x8

    UFUNCTION(BlueprintCallable) void ProcessorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
