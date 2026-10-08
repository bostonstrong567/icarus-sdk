// /Game/BP/Objects/World/Items/Deployables/Lights/BP_Worklamp_Directional.BP_Worklamp_Directional_C
// Derives from: ABP_Light_Electric_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Worklamp_Directional_C : public ABP_Light_Electric_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight2;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight1;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x07E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x07E8, size 0x8
};
