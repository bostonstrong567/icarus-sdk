// /Script/Engine.BandwidthTestGenerator
// size 0x20, declared in Engine/Source/Runtime/Engine/Public/Net/BandwidthTestActor.h

USTRUCT()
struct FBandwidthTestGenerator
{
public:
    UPROPERTY() TArray<FBandwidthTestItem> ReplicatedBuffers;  // 0x0000, size 0x10
    double TimeForNextSpike;  // 0x0010, not reflected
    double SpikePeriodInSec;  // 0x0018, not reflected
};
