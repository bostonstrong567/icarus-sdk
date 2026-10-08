// /Game/BP/Objects/World/Items/Deployables/BP_Deployable_PowerToggleableBase.BP_Deployable_PowerToggleableBase_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x731, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deployable_PowerToggleableBase_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bIsDeviceRunning;  // 0x0730, size 0x1

    UFUNCTION(BlueprintCallable) void CalculateIsDeviceRunning(bool& IsRunning);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckDeviceRunning();
    UFUNCTION() void ExecuteUbergraph_BP_Deployable_PowerToggleableBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsDeviceRunning(bool& DeviceIsRunning) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnBrownOutStrengthChanged(FIcarusResourcesEnum ResourceType, int32 NewBrownOutStrength);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void OnDeviceOnStateChanged(bool bIsOn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnDeviceStartRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceStopRunning();
    UFUNCTION(BlueprintCallable) void OnDeviceTurnedOff();
    UFUNCTION(BlueprintCallable) void OnDeviceTurnedOn();
    UFUNCTION(BlueprintCallable) void OnRep_IsDeviceRunning();
    UFUNCTION(BlueprintCallable) void OnResourceNetworkUpdated(EIcarusResourceType ResourceType, bool bConnected);  // parameters 0x2
};
