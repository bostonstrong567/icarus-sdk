// /Game/BP/Objects/World/Items/Deployables/Furniture/BP_Chicken_Coop_Rustic.BP_Chicken_Coop_Rustic_C
// Derives from: ABP_Chicken_Coop_Base_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Chicken_Coop_Rustic_C : public ABP_Chicken_Coop_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* RoofCollision_02;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* RoofCollision_01;  // 0x07E0, size 0x8
};
