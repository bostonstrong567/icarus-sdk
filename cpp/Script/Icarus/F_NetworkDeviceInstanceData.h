// /Script/Icarus.NetworkDeviceInstanceData
// size 0x18, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetworkInspectorData.h

USTRUCT()
struct FNetworkDeviceInstanceData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* DeviceActor;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDeviceState State;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasPriority;  // 0x0009, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentFlow;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxFlow;  // 0x0010, size 0x4
};
