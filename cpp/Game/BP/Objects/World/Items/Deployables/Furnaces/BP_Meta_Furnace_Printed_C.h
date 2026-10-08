// /Game/BP/Objects/World/Items/Deployables/Furnaces/BP_Meta_Furnace_Printed.BP_Meta_Furnace_Printed_C
// Derives from: ABP_FireProcessorBase_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Meta_Furnace_Printed_C : public ABP_FireProcessorBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Internal;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x09C0, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
