// /Script/Icarus.RecordedForecastWeatherEvent
// size 0x14, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/WeatherControllerRecorderComponent.h

USTRUCT()
struct FRecordedForecastWeatherEvent
{
    UPROPERTY(SaveGame) FName WeatherEventRowName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) FName BiomeGroupRowName;  // 0x0008, size 0x8
    UPROPERTY(SaveGame) int32 TimeElapsed;  // 0x0010, size 0x4
};
