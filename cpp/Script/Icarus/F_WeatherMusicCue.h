// /Script/Icarus.WeatherMusicCue
// size 0x8, declared in Icarus/Source/Icarus/Systems/Weather/IcarusWeatherEvent.h

USTRUCT()
struct FWeatherMusicCue
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMusicConditionWeather MusicCondition;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TriggerTime;  // 0x0004, size 0x4
};
