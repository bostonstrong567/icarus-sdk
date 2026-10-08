// /Game/BP/Objects/World/Items/Deployables/Prop/BP_Prop_Laptop_A.BP_Prop_Laptop_A_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x730, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prop_Laptop_A_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0728, size 0x8
};
