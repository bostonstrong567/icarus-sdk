// /Game/BP/Objects/World/Items/Deployables/Furniture/BP_Nesting_Box.BP_Nesting_Box_C
// Derives from: ABP_Animal_Bed_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Nesting_Box_C : public ABP_Animal_Bed_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Egg;  // 0x0738, size 0x8
};
