// /Game/BP/Objects/World/Items/Deployables/Furnaces/BP_StoneFurnace.BP_StoneFurnace_C
// Derives from: ABP_FireProcessorBase_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_StoneFurnace_C : public ABP_FireProcessorBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Campfire_Wood_Full_v2;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Bounce_Exterior;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Bounce_Top;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x09D8, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
