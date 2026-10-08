// /Game/BP/Objects/World/Items/Deployables/ExoticProcessor/BP_T3_Cleaning_Device.BP_T3_Cleaning_Device_C
// Derives from: ABP_ResourceNetworkProcessor_C > ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_T3_Cleaning_Device_C : public ABP_ResourceNetworkProcessor_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_StartProcessor;  // 0x09A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x09B0, size 0x8

    UFUNCTION(BlueprintCallable) void ProcessorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged);  // parameters 0x2
};
