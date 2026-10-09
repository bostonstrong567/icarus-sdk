// /Script/Icarus.ResourceNetworkDataRequesterComponent
// Derives from: UActorComponent > UObject
// size 0x1A8, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetworkDataRequesterComponent.h

UCLASS(Config=Engine)
class UResourceNetworkDataRequesterComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnNetworkDataReceived OnNetworkDataReceived;  // 0x00B0, size 0x10
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float UpdateFrequency;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FResourceNetworkInspectorData Data;  // 0x00C8, size 0x60
private:
    FTimerHandle UpdateNetworkTimer;  // 0x0128, not reflected
    TWeakObjectPtr<AResourceNetwork,FWeakObjectPtr> TargetNetwork;  // 0x0130, not reflected
    TWeakObjectPtr<AResourceSplineActorBase,FWeakObjectPtr> TargetSpline;  // 0x0138, not reflected
    TWeakObjectPtr<UResourceComponent,FWeakObjectPtr> TargetDevice;  // 0x0140, not reflected
    FIcarusResourcesEnum TargetNetworkType;  // 0x0148, not reflected
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> InstancesToRequest;  // 0x0158, not reflected
public:
    UFUNCTION() void OnRep_Data();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void RequestDeviceInstances(FName DeviceNameRowHandleName);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void RequestNetworkInfoForDevice(UResourceComponent* NewTargetDevice, FIcarusResourcesEnum NetworkType);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void RequestNetworkInfoForNetwork(AResourceNetwork* NewTargetNetwork);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void RequestNetworkInfoForSpline(AResourceSplineActorBase* NewTargetSpline);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void StopDeviceInstancesRequest(FName DeviceNameRowHandleName);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void StopNetworkInfoRequest();
};
