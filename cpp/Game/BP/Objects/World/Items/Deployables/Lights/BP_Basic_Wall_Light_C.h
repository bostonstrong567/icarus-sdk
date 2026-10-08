// /Game/BP/Objects/World/Items/Deployables/Lights/BP_Basic_Wall_Light.BP_Basic_Wall_Light_C
// Derives from: ABP_Light_Electric_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Basic_Wall_Light_C : public ABP_Light_Electric_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Bot;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Top;  // 0x07E0, size 0x8
};
