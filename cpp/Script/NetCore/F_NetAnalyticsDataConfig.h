// /Script/NetCore.NetAnalyticsDataConfig
// size 0xC, declared in Engine/Source/Runtime/Net/Core/Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h

USTRUCT()
struct FNetAnalyticsDataConfig
{
    UPROPERTY(Config) FName DataName;  // 0x0000, size 0x8
    UPROPERTY(Config) bool bEnabled;  // 0x0008, size 0x1
};
