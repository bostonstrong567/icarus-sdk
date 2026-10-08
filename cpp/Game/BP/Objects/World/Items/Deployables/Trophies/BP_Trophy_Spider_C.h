// /Game/BP/Objects/World/Items/Deployables/Trophies/BP_Trophy_Spider.BP_Trophy_Spider_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x730, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Trophy_Spider_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0728, size 0x8
};
