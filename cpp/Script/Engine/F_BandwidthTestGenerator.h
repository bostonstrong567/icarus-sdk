// /Script/Engine.BandwidthTestGenerator
// size 0x20, declared in Engine/Source/Runtime/Engine/Public/Net/BandwidthTestActor.h

USTRUCT()
struct FBandwidthTestGenerator
{
    UPROPERTY() TArray<FBandwidthTestItem> ReplicatedBuffers;  // 0x0000, size 0x10

    // Not reflected:
    double TimeForNextSpike;  // 0x0010
    double SpikePeriodInSec;  // 0x0018
};
