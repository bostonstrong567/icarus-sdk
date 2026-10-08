// /Script/Icarus.WeatherAudioSubsystemBiomeRecord
// size 0x18, declared in Icarus/Source/Icarus/Audio/Weather/WeatherAudioSubsystem.h

USTRUCT()
struct FWeatherAudioSubsystemBiomeRecord
{
    UPROPERTY() TArray<UWeatherAudioComponent*> Components;  // 0x0000, size 0x10

    // Not reflected:
    bool bWeatherActive;  // 0x0010
    bool bHasHadInitialStateSet;  // 0x0011
};
