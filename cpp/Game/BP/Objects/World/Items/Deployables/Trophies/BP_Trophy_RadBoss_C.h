// /Game/BP/Objects/World/Items/Deployables/Trophies/BP_Trophy_RadBoss.BP_Trophy_RadBoss_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x730, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Trophy_RadBoss_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0728, size 0x8
};
