// /Script/Icarus.ClientResourceNetworkComponentValues
// size 0x20, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/IcarusResourceNetworkTypes.h

USTRUCT()
struct FClientResourceNetworkComponentValues
{
    UPROPERTY() FIcarusResourcesEnum ResourceType;  // 0x0000, size 0x10
    UPROPERTY() int32 CurrentFlowRate;  // 0x0010, size 0x4
    UPROPERTY() int32 DesiredFlowRate;  // 0x0014, size 0x4
    UPROPERTY() int32 BrownOutStrength;  // 0x0018, size 0x4
};
