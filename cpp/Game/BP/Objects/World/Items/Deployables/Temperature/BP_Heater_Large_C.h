// /Game/BP/Objects/World/Items/Deployables/Temperature/BP_Heater_Large.BP_Heater_Large_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x77C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Heater_Large_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URectLightComponent* RectLight;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ActiveAudio;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastRangeValue;  // 0x0760, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle AuraEffect;  // 0x0764, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_Heater_Large(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDeviceResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void Update_Running_Effects(bool ReceivingPower);  // parameters 0x1, named "Update Running Effects"
    UFUNCTION(BlueprintCallable) void UpdateAuraEffect(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateThermalComponent();
};
