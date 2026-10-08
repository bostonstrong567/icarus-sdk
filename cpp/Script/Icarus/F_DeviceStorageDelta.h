// /Script/Icarus.DeviceStorageDelta
// size 0x18, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetwork.h

USTRUCT()
struct FDeviceStorageDelta
{

    // Not reflected:
    UResourceNetworkComponent * Device;  // 0x0000
    int32 MaxFlow;  // 0x0008
    int32 Available;  // 0x000C
    int32 Delta;  // 0x0010
};
