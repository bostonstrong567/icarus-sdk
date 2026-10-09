// /Script/Icarus.WeatherForecastItem
// size 0x18, declared in Icarus/Source/Icarus/Systems/Weather/WeatherForecastBarComponent.h

USTRUCT()
struct FWeatherForecastItem
{
public:
    UPROPERTY(BlueprintReadWrite) int32 StartTime;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 EndTime;  // 0x000C, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Tier;  // 0x0010, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 PatternIndex;  // 0x0014, size 0x4
};
