// /Script/Icarus.ResourceNetworkInspectorData
// size 0x60, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ResourceNetworkDataRequesterComponent.generated.h

USTRUCT()
struct FResourceNetworkInspectorData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum SelectedResourceType;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRequireFullUpdate;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCompactNetworkDeviceData> SupplyDevices;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCompactNetworkDeviceData> DemandDevices;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCompactNetworkStorageDeviceData> StorageDevices;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalSupply;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalMaxSupply;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalDemand;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SatisfiedDemand;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalPriorityDemand;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SatisfiedPriorityDemand;  // 0x005C, size 0x4
};
