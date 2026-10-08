// /Script/Icarus.ConnectedNetworkData
// size 0x18, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetworkInspectorData.h

USTRUCT()
struct FConnectedNetworkData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum NetworkType;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NetworkId;  // 0x0010, size 0x4
};
