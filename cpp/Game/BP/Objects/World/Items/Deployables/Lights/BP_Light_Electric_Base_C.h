// /Game/BP/Objects/World/Items/Deployables/Lights/BP_Light_Electric_Base.BP_Light_Electric_Base_C
// Derives from: ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7CC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Light_Electric_Base_C : public ABP_Deployable_PowerToggleableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ActiveAudio;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_SwitchOn;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_SwitchOff;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* MaterialOn;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* MaterialOff;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaterialIndex;  // 0x0770, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 BrownOutStrength;  // 0x0774, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ULightComponent*, float> IntensityMapping;  // 0x0778, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastEffectiveness;  // 0x07C8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Light_Electric_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnBrownOutStrengthChanged(FIcarusResourcesEnum ResourceType, int32 NewBrownOutStrength);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceTurnedOff();
    UFUNCTION(BlueprintCallable) void OnDeviceTurnedOn();
    UFUNCTION(BlueprintCallable) void OnRep_BrownOutStrength();
    UFUNCTION(BlueprintCallable) void OnStatsUpdated();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void PlaySwitchSound(bool On);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetLightActiveState();
    UFUNCTION(BlueprintCallable) void UpdateLights();
    UFUNCTION(BlueprintCallable) void UpdateLights_BrownOut(int32 Strength);  // parameters 0x4
};
