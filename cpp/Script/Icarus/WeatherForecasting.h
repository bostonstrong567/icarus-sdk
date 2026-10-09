// /Script/Icarus.WeatherForecasting
// Derives from: UActorComponent > UObject
// size 0x130, declared in Icarus/Source/Icarus/Systems/Weather/WeatherForecasting.h

UCLASS(Config=Engine)
class UWeatherForecasting : public UActorComponent
{
private:
    FWeatherPoolsRowHandle LastWeatherPool;  // 0x00B0, not reflected
    TArray<FBiomeGroupForecast,TSizedDefaultAllocator<32> > LastEmptyBiomeMap;  // 0x00C8, not reflected
    TMap<FWeatherBiomeGroupsEnum,FRandomStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWeatherBiomeGroupsEnum,FRandomStream,0> > BiomeRandoms;  // 0x00D8, not reflected
    bool bInitedFromSaveGame;  // 0x0128, not reflected
public:
    UFUNCTION() void Deinitialize();
};
