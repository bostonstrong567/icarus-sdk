// /Script/Icarus.WeatherPoolEntry
// size 0x1C, declared in Icarus/Source/Icarus/Systems/Weather/IcarusWeatherPoolData.h

USTRUCT()
struct FWeatherPoolEntry
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherEventsRowHandle Event;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Weight;  // 0x0018, size 0x4
};
