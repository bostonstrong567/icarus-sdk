// /Game/BP/Objects/World/Items/Deployables/Prop/BP_Prop_Specimen.BP_Prop_Specimen_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prop_Specimen_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_AquariumBubblesLarge1;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_AquariumBubblesLarge;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Specimen_Dragonfly;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Specimen_Striker;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Radiation_Growths;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, USceneComponent*> MeshMapping;  // 0x0760, size 0x50
};
