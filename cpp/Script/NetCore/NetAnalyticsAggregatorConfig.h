// /Script/NetCore.NetAnalyticsAggregatorConfig
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Net/Core/Classes/Net/Core/Analytics/NetAnalyticsAggregatorConfig.h

UCLASS(Config=Engine)
class UNetAnalyticsAggregatorConfig : public UObject
{
public:
    UPROPERTY(Config) TArray<FNetAnalyticsDataConfig> NetAnalyticsData;  // 0x0028, size 0x10
};
