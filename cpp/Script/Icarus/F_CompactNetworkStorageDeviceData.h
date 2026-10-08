// /Script/Icarus.CompactNetworkStorageDeviceData
// size 0x20, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetworkInspectorData.h

USTRUCT()
struct FCompactNetworkStorageDeviceData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* IcarusActor;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDeviceState DeviceState;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FlowRateCurrent;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FlowRateMax;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StorageValueCurrent;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StorageValueMax;  // 0x0018, size 0x4
};
