// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Birdbath_Gold.BP_Birdbath_Gold_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x730, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Birdbath_Gold_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0728, size 0x8
};
