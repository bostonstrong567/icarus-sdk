// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Teddy_Bear.BP_Teddy_Bear_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x730, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Teddy_Bear_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* SM_DEP_Teddy_Bear_Fur;  // 0x0728, size 0x8
};
