// /Script/Icarus.CompactNetworkDeviceData
// size 0x30, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetworkInspectorData.h

USTRUCT()
struct FCompactNetworkDeviceData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DeviceNameRowName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumPriority;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumOn;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumIdle;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumOff;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCurrentFlow;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalMaxFlow;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FNetworkDeviceInstanceData> InstanceData;  // 0x0020, size 0x10
};
