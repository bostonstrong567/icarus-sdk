// /Script/Icarus.WeatherBlockEvent
// size 0x1C, declared in Icarus/Source/Icarus/Systems/Weather/WeatherTypes.h

USTRUCT()
struct FWeatherBlockEvent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EventTime;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherEventsRowHandle WeatherEvent;  // 0x0004, size 0x18
};
