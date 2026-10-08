// /Game/BP/Objects/World/Items/Deployables/BP_ResourceNetworkProcessor.BP_ResourceNetworkProcessor_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9A4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ResourceNetworkProcessor_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasEnergy;  // 0x0988, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle WaterConnectionSpeedUpModifier;  // 0x098C, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_ResourceNetworkProcessor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_HasEnergy();
    UFUNCTION(BlueprintCallable) void ProcessorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateDevice();
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool EnergyFlowChanged, bool ProcessorActiveChanged);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdateEnergy();
    UFUNCTION(BlueprintCallable) void UpdateModifiers();
    UFUNCTION(BlueprintCallable) void UpdateWater();
    UFUNCTION(BlueprintCallable) void UpdateWaterRequirement(bool bActive);  // parameters 0x1
};
