// /Script/Icarus.ClientResourceComponentValues
// size 0x18, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusPlayerControllerSurvival.generated.h

USTRUCT()
struct FClientResourceComponentValues
{
public:
    UPROPERTY() int32 StorageFlowRate;  // 0x0000, size 0x4
    UPROPERTY() uint32 ConnectionPriorityMask;  // 0x0004, size 0x4
    UPROPERTY() TArray<FClientResourceNetworkComponentValues> ResourceValues;  // 0x0008, size 0x10
};
