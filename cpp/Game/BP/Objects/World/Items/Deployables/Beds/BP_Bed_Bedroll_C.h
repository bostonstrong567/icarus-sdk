// /Game/BP/Objects/World/Items/Deployables/Beds/BP_Bed_Bedroll.BP_Bed_Bedroll_C
// Derives from: ABP_BedBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x768, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Bed_Bedroll_C : public ABP_BedBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0760, size 0x8
};
