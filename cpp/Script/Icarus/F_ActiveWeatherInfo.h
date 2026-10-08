// /Script/Icarus.ActiveWeatherInfo
// size 0x48, declared in Icarus/Source/Icarus/Systems/Weather/WeatherController.h

USTRUCT()
struct FActiveWeatherInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherEventsRowHandle WeatherEvent;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesRowHandle Biome;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UIcarusWeatherAction*> Actions;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartTime;  // 0x0040, size 0x4
};
