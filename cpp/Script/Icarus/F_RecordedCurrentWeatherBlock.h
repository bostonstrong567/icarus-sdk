// /Script/Icarus.RecordedCurrentWeatherBlock
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/WeatherForecastManager.generated.h

USTRUCT()
struct FRecordedCurrentWeatherBlock
{
    UPROPERTY(SaveGame) FName InitialProspectForecast;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) FName ProspectForecastRowName;  // 0x0008, size 0x8
    UPROPERTY(SaveGame) int32 StartTimeDelta;  // 0x0010, size 0x4
    UPROPERTY(SaveGame) int32 PatternIndex;  // 0x0014, size 0x4
    UPROPERTY(SaveGame) int32 RecordedNow;  // 0x0018, size 0x4
    UPROPERTY(SaveGame) TArray<int32> GameStateSeeds;  // 0x0020, size 0x10
};
