// /Game/BP/Objects/World/Items/Deployables/Prop/BP_Prop_LandingPad.BP_Prop_LandingPad_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x758, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prop_LandingPad_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Plane;  // 0x0750, size 0x8
};
