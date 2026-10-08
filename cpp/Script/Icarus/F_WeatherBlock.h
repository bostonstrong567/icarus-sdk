// /Script/Icarus.WeatherBlock
// size 0x38, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/WeatherForecastBarComponent.generated.h

USTRUCT()
struct FWeatherBlock
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Tier;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DurationSeconds;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeatherPoolsRowHandle WeatherPool;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PatternIndex;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBiomeGroupForecast> BiomeEvents;  // 0x0028, size 0x10
};
