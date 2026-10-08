// /Script/Icarus.BiomeGroupForecast
// size 0x20, declared in Icarus/Source/Icarus/Systems/Weather/WeatherTypes.h

USTRUCT()
struct FBiomeGroupForecast
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherBiomeGroupsEnum BiomeGroup;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWeatherBlockEvent> Events;  // 0x0010, size 0x10
};
