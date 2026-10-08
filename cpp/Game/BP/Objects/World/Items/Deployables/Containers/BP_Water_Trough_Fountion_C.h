// /Game/BP/Objects/World/Items/Deployables/Containers/BP_Water_Trough_Fountion.BP_Water_Trough_Fountion_C
// Derives from: ABP_Water_Trough_Large_C > ABP_Water_Trough_Base_C > ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Water_Trough_Fountion_C : public ABP_Water_Trough_Large_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x07A0, size 0x8
};
