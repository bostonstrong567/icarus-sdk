// /Game/BP/Objects/World/Items/Deployables/Furnaces/BP_ElectricFurnace_Large.BP_ElectricFurnace_Large_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0xA28, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ElectricFurnace_Large_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ProxyMeshComponent_C* BP_ProxyMeshComponent;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Input_Ore_3;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Input_Ore_2;  // 0x09C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Input_Ore_1;  // 0x09C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Ingot_3;  // 0x09D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Ingot_2;  // 0x09D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Ingot_1;  // 0x09E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Glass_3;  // 0x09E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Glass_2;  // 0x09F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Furnace_Electric_Proxy_Output_Glass_1;  // 0x09F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight1;  // 0x0A00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight;  // 0x0A08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight;  // 0x0A10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Lights;  // 0x0A18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x0A20, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged);  // parameters 0x2
};
