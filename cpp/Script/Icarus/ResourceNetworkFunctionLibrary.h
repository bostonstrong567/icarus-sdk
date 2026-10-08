// /Script/Icarus.ResourceNetworkFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetworkFunctionLibrary.h

UCLASS()
class UResourceNetworkFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void GatherFlowMeterValuesForNetwork(AResourceNetwork* ResourceNetwork, int32& TotalSupply, int32& TotalDemand, int32& CurrentStored, int32& MaxStorage);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool GatherResourceNetworkData(AResourceNetwork* ResourceNetwork, FResourceNetworkInspectorData& OutNetworkData, const TSet<FName>& InstancesToRequest);  // parameters 0xB9
    UFUNCTION(BlueprintCallable) static FText GetDeviceDisplayName(AIcarusActor* DeviceActor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FText GetDeviceDisplayNameFromRow(const FName& ItemableOrHighlightableRowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void ProcessIncomingResourceNetworkData(const TArray<FName>& ExistingKeys, const TArray<FCompactNetworkDeviceData>& IncomingData, TArray<FCompactNetworkDeviceData>& ToAdd, TArray<FCompactNetworkDeviceData>& ToUpdate, TArray<FName>& ToRemove);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static void ProcessIncomingResourceNetworkInstanceData(const TArray<int32>& ExistingIcarusUIDs, const TArray<FNetworkDeviceInstanceData>& IncomingData, TArray<FNetworkDeviceInstanceData>& ToAdd, TArray<FNetworkDeviceInstanceData>& ToUpdate, TArray<int32>& ToRemove);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static TArray<FNetworkDeviceInstanceData> SortDeviceInstances(const TArray<FNetworkDeviceInstanceData>& Devices);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static TArray<FCompactNetworkDeviceData> SortDevicesByTotalFlowThenName(const TArray<FCompactNetworkDeviceData>& Devices);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static TArray<FCompactNetworkStorageDeviceData> SortStorageDevicesByTotalStorageThenName(const TArray<FCompactNetworkStorageDeviceData>& StorageDevices);  // parameters 0x20
};
