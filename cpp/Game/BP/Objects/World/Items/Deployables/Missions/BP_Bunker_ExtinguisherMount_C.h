// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Bunker_ExtinguisherMount.BP_Bunker_ExtinguisherMount_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x738, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Bunker_ExtinguisherMount_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Fire_Extinguisher;  // 0x0730, size 0x8
};
