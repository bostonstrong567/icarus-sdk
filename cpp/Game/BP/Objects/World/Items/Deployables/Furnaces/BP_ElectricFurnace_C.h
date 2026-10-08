// /Game/BP/Objects/World/Items/Deployables/Furnaces/BP_ElectricFurnace.BP_ElectricFurnace_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ElectricFurnace_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight1;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight1;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Lights1;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Lights;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UParticleSystemComponent* ParticleSystem;  // 0x09E8, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged);  // parameters 0x2
};
