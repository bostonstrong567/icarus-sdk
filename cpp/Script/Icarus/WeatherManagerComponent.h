// /Script/Icarus.WeatherManagerComponent
// Derives from: UActorComponent > UObject
// size 0x168, declared in Icarus/Source/Icarus/Systems/Weather/WeatherManagerComponent.h

UCLASS(Config=Engine)
class UWeatherManagerComponent : public UActorComponent
{
public:
    UPROPERTY(Replicated, ReplicatedUsing) TArray<FWeatherGameplayData> GameplayWeatherArray;  // 0x00B0, size 0x10
    TMap<FBiomesEnum,FWeatherVisualData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBiomesEnum,FWeatherVisualData,0> > VisualWeatherMap;  // 0x00C0, not reflected
    TMap<FBiomesEnum,FVector,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBiomesEnum,FVector,0> > WindDirectionMap;  // 0x0110, not reflected
    UPROPERTY(BlueprintAssignable) FWeatherGameplayUpdated WeatherGameplayUpdated;  // 0x0160, size 0x1
    UPROPERTY(BlueprintAssignable) FWeatherVisualUpdated WeatherVisualUpdated;  // 0x0161, size 0x1

    UFUNCTION(BlueprintCallable) FWeatherGameplayData BP_GetGameplayWeather(const FBiomesEnum& Biome);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetAcidRain(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetAsh(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetCloudyAmount(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetDebris(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetEmbers(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) FLinearColor GetFogColor(const FBiomesEnum& Biome);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetFogDensity(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetFogExtinction(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetHail(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetLightningClouds(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetRadiation(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetRadiationWind(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetRainAmount(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetSandAmount(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetSmoke(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetSnowAmount(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetSnowStormAmount(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetSpeckles(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable) int32 GetTemperatureModifier(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetThunderAmount(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) FWeatherVisualData GetVisualWeather(const FBiomesEnum& Biome);  // parameters 0x7C
    UFUNCTION(BlueprintCallable) FText GetWeatherWarningMessage(const FBiomesEnum& Biome);  // parameters 0x28
    UFUNCTION(BlueprintCallable) FVector GetWindDirection(const FBiomesEnum& Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) float GetWindForce(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetWindGust(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetWindSpeed(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) float GetWindStrength(const FBiomesEnum& Biome);  // parameters 0x14
    UFUNCTION() void OnRep_GameplayWeatherArray();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetAcidRain(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetAsh(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetCloudyAmount(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetDebris(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetEmbers(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetFogColor(const FBiomesEnum& Biome, FLinearColor FogColor, float Amount);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetFogDensity(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetFogExtinction(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetGameplayWeather(const FBiomesEnum& Biome, FWeatherGameplayData GameplayData);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetHail(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetLightningClouds(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetRadiation(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetRadiationWind(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetRainAmount(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetSandAmount(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetSmoke(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetSnowAmount(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetSnowStormAmount(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetSpeckles(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetTemperatureModifier(const FBiomesEnum& Biome, int32 Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetThunderAmount(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetVisualWeather(const FBiomesEnum& Biome, FWeatherVisualData VisualData);  // parameters 0x7C
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetWeatherWarningMessage(const FBiomesEnum& Biome, FText Message);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetWhiteout(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetWindDirection(const FBiomesEnum& Biome, FVector Direction);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetWindForce(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetWindGust(const FBiomesEnum& Biome, float WindGust);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetWindSpeed(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintCosmetic) void SetWindStrength(const FBiomesEnum& Biome, float Amount);  // parameters 0x14
};
