// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Lab_Desk.BP_Lab_Desk_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x738, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Lab_Desk_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Shadow1;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Shadow;  // 0x0730, size 0x8
};
