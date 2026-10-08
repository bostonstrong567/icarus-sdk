// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Lava_Hunter_Trophy_Chair.BP_Lava_Hunter_Trophy_Chair_C
// Derives from: ABP_ChairBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Lava_Hunter_Trophy_Chair_C : public ABP_ChairBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x07A0, size 0x8
};
