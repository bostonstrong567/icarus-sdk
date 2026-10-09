// /Script/Icarus.WeatherBiomeGroupForecast
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/WeatherForecastManager.generated.h

USTRUCT()
struct FWeatherBiomeGroupForecast
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, FWeatherEventsRowHandle> PlannedEvents;  // 0x0000, size 0x50
};
