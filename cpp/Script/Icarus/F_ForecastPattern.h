// /Script/Icarus.ForecastPattern
// size 0x8, declared in Icarus/Source/Icarus/Systems/Weather/WeatherTypes.h

USTRUCT()
struct FForecastPattern
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Tier;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DurationMinutes;  // 0x0004, size 0x4
};
