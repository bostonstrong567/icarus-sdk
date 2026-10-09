// /Script/Icarus.WeatherAudioComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x200, declared in Icarus/Source/Icarus/Audio/WeatherAudioComponent.h

UCLASS(Config=Engine)
class UWeatherAudioComponent : public USceneComponent
{
public:
    UFUNCTION(BlueprintNativeEvent) void UpdateWeatherAudio(bool bWeatherActive);  // parameters 0x1

    // Virtual functions that start here:
    //   UpdateWeatherAudio_Implementation
};
