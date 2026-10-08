// /Script/Icarus.WeatherAction
// size 0x1C, declared in Icarus/Source/Icarus/Systems/Weather/IcarusWeatherEvent.h

USTRUCT()
struct FWeatherAction
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherActionsRowHandle Action;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeInSeconds;  // 0x0018, size 0x4
};
