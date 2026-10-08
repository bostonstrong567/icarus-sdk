// /Script/Icarus.WeatherForecasting
// Derives from: UActorComponent > UObject
// size 0x130, declared in Icarus/Source/Icarus/Systems/Weather/WeatherForecasting.h

UCLASS(Config=Engine)
class UWeatherForecasting : public UActorComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FWeatherPoolsRowHandle LastWeatherPool;  // 0x00B0, private
    TArray<FBiomeGroupForecast,TSizedDefaultAllocator<32> > LastEmptyBiomeMap;  // 0x00C8, private
    TMap<FWeatherBiomeGroupsEnum,FRandomStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWeatherBiomeGroupsEnum,FRandomStream,0> > BiomeRandoms;  // 0x00D8, private
    bool bInitedFromSaveGame;  // 0x0128, private

    UFUNCTION() void Deinitialize();
};
