// /Script/Icarus.WeatherForecastRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x108, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/WeatherForecastRecorderComponent.h

UCLASS(Config=Engine)
class UWeatherForecastRecorderComponent : public UIcarusStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FRecordedCurrentWeatherBlock NowBlock;  // 0x00D8, size 0x30
};
