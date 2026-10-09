// /Script/Icarus.WeatherControllerRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/WeatherControllerRecorderComponent.h

UCLASS(Config=Engine)
class UWeatherControllerRecorderComponent : public UIcarusStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) TArray<FRecordedForecastWeatherEvent> LatestWeatherEvents;  // 0x00D8, size 0x10
};
