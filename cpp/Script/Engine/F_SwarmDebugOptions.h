// /Script/Engine.SwarmDebugOptions
// size 0x4, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FSwarmDebugOptions
{
public:
    UPROPERTY(EditAnywhere) uint8 bDistributionEnabled : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bForceContentExport : 1;  // 0x0000, mask 0x02
    UPROPERTY() uint8 bInitialized : 1;  // 0x0000, mask 0x04
};
