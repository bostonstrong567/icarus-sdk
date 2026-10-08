// /Game/BP/Objects/World/Items/Deployables/MaterialProcessor/BP_MaterialProcessor.BP_MaterialProcessor_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MaterialProcessor_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_HeatHaze_Soft;  // 0x09B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x09B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DF_Chute;  // 0x09C0, size 0x8

    UFUNCTION(BlueprintCallable) void ProcessorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged);  // parameters 0x2
};
