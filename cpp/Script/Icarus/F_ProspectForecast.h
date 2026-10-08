// /Script/Icarus.ProspectForecast
// size 0x40, declared in Icarus/Source/Icarus/Systems/Weather/ProspectForecast.h

USTRUCT()
struct FProspectForecast : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherPoolsRowHandle WeatherPool;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FForecastPattern> Pattern;  // 0x0030, size 0x10
};
