// /Game/BP/Objects/World/Items/Deployables/Furnaces/BP_ConcreteFurnace_V2.BP_ConcreteFurnace_V2_C
// Derives from: ABP_FireProcessorBase_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA18, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ConcreteFurnace_V2_C : public ABP_FireProcessorBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Chimney;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Output_Ingot_3;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Output_Ingot_2;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Output_Ingot_1;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Input_Ore_3;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Input_Ore_2;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Concrete_Proxy_Input_Ore_1;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Left;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Right;  // 0x0A08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0A10, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
