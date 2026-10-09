// /Script/Icarus.WeatherAudioSubsystemBiomeRecord
// size 0x18, declared in Icarus/Source/Icarus/Audio/Weather/WeatherAudioSubsystem.h

USTRUCT()
struct FWeatherAudioSubsystemBiomeRecord
{
public:
    UPROPERTY() TArray<UWeatherAudioComponent*> Components;  // 0x0000, size 0x10
    bool bWeatherActive;  // 0x0010, not reflected
    bool bHasHadInitialStateSet;  // 0x0011, not reflected
};
