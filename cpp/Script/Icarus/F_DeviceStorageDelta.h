// /Script/Icarus.DeviceStorageDelta
// size 0x18, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetwork.h

USTRUCT()
struct FDeviceStorageDelta
{
public:
    UResourceNetworkComponent * Device;  // 0x0000, not reflected
    int32 MaxFlow;  // 0x0008, not reflected
    int32 Available;  // 0x000C, not reflected
    int32 Delta;  // 0x0010, not reflected
};
