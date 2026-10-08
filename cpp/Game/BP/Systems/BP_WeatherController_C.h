// /Game/BP/Systems/BP_WeatherController.BP_WeatherController_C
// Derives from: AWeatherController > AInfo > AActor > UObject
// size 0x3B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WeatherController_C : public AWeatherController
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Deployable_Max_Damage;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Player_Max_Damage;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FStormIncomingAlert StormIncomingAlert;  // 0x0348, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FStormStartedAlert StormStartedAlert;  // 0x0358, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FAIPerceptionModifierUpdated AIPerceptionModifierUpdated;  // 0x0368, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWeatherBiomeGroupsRowHandle> ProspectBiomeGroups;  // 0x0378, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumDaysToForecast;  // 0x0388, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AWeatherForecastManager* WeatherForecastManager;  // 0x0390, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WeatherDisabled;  // 0x03A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WeatherDebug;  // 0x03A1, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UWeatherManagerComponent* WeatherManagerRef;  // 0x03A8, size 0x8

    UFUNCTION(BlueprintCallable) void AIPerceptionModifierUpdated__DelegateSignature(int32 NewValue, FBiomesRowHandle Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Ash(float Intensity, FBiomesRowHandle Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ClearAllWeather();
    UFUNCTION(BlueprintCallable) void ClearWeatherBiome(FBiomesEnum Biome);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ClogDeployableActors(FBiomesRowHandle Biome, int32 Percent);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void DamageTaggedPlayerItems(FBiomesRowHandle Biome, int32 Intensity, FTagQueriesRowHandle TagQueryRow, EIcarusDamageType DamageType, FInventoryIDEnum InventoryID);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void DamageToPlayerFocusedItem(FBiomesRowHandle Biome, int32 Intensity, EIcarusDamageType DamageType);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void DebugWeatherController(FBiomesRowHandle Biome, FString InStr, float Delta);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void Deployable_Damage(FBiomesRowHandle Biome, float Intensity, FGameplayTagQuery Query);  // parameters 0x68, named "Deployable Damage"
    UFUNCTION(BlueprintCallable) void DisableWeather(bool DisableWeather);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DrawWeatherForecastDebug();
    UFUNCTION() void ExecuteUbergraph_BP_WeatherController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ExtinguishFires(FBiomesRowHandle Biome, float Intensity);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Flush_Forecast_Weather();  // named "Flush Forecast Weather"
    UFUNCTION(BlueprintCallable) void Generate_Future_Events(int32 CurrentTime);  // parameters 0x4, named "Generate Future Events"
    UFUNCTION(BlueprintCallable) void GetEventDuration(FWeatherEventsRowHandle Event, int32& Duration);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void GetGameTimeSeconds(int32& TimeSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetInitialForecastRow(FProspectForecastRowHandle& Forecast);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetProspectForecastRow(FProspectForecastRowHandle& Forecast);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetProspectWeatherPool(TArray<FWeatherPoolEntry>& WeatherPools, FWeatherPoolsRowHandle& RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void HideWeatherWarningMessage(FBiomesRowHandle Biome);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void LowHertzTick();
    UFUNCTION(BlueprintImplementableEvent) void NotifyStormWarning(int32 TimeUntilStorm, const FWeatherEventsRowHandle& StormRow, const FBiomesEnum& Biome);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnForecastRestored();
    UFUNCTION(BlueprintCallable) void OnSeedInitialised(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OneTimeInit(int32 GameSeed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Player_Damage(FBiomesRowHandle Biome, float Intensity, FGameplayTagQuery Query);  // parameters 0x68, named "Player Damage"
    UFUNCTION(BlueprintCallable) void PlayerModifiers(FBiomesRowHandle Biome, float Intensity, FGameplayTagQuery Query, FModifier Modifier);  // parameters 0x88
    UFUNCTION(BlueprintImplementableEvent) void PostProspectInfoFetched();
    UFUNCTION(BlueprintCallable) void Rain(FBiomesRowHandle Biome, int32 Rainfall__Millilitre_);  // parameters 0x1C
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Sand(float Intensity, FBiomesRowHandle Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetAIPerceptionModifier(int32 Modifier, FBiomesRowHandle BiomesRowHandle);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetAcidRain(float Severity, FBiomesRowHandle BiomeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetAsh(float Severity, FBiomesRowHandle BiomeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetBiomeWindDirection(FVector WindDirection, FBiomesRowHandle BiomeRow);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void SetBiomeWindForce(float WindDirectionStrength, FBiomesRowHandle BiomeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetBiomeWindVisuals(float WindSpeed, float WindStrength, float WindGust, FBiomesRowHandle BiomeRow);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void SetCloud(float Severity, FBiomesRowHandle biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetDebris(float Severity, FBiomesRowHandle BiomeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetEmbers(float Severity, FBiomesRowHandle BiomeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetFogColor(FBiomesRowHandle Biome_Row, FLinearColor Color, float ColorAmount);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void SetFogDensity(FBiomesRowHandle BiomeRow, float Severity);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetFogExtinction(FBiomesRowHandle BiomeRow, float Amount);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetHail(float Severity, FBiomesRowHandle BiomeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetLightningClouds(float Severity, FBiomesRowHandle BiomeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetRadiation(float Severity, FBiomesRowHandle BiomeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetRadiationWind(FBiomesRowHandle BiomeRow, float Severity);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetRain(float Severity, FBiomesRowHandle Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetSand(float Severity, FBiomesRowHandle Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetSmoke(float Severity, FBiomesRowHandle BiomeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetSnow(float Severity, FBiomesRowHandle Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetSnowStorm(float Severity, FBiomesRowHandle Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetSpeckles(FBiomesRowHandle BiomeRow, float Amount);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetThunder(float Severity, FBiomesRowHandle Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetWeatherTemperatureModifier(int32 TempModifier, FBiomesRowHandle BiomeRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetWhiteoutAmount(FBiomesRowHandle BiomeRow, float Severity);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetupProspectWeatherData(int32 GameStateSeed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ShowWeatherWarningMessage(FBiomesRowHandle Biome, FText Message);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void Snow(float Intensity, FBiomesRowHandle Biome);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void StormIncomingAlert__DelegateSignature(int32 TimeUntilStorm, FWeatherEventsRowHandle StormRow, FBiomesEnum Biome);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void StormStartedAlert__DelegateSignature(FWeatherEventsRowHandle Event, FBiomesEnum Biome);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void Update_Forecast(FProspectForecastRowHandle ProspectForecast);  // parameters 0x18, named "Update Forecast"
    UFUNCTION(BlueprintCallable) void UpdateResourceNetworks(FBiomesRowHandle Biome, int32 BaseModifierEffectiveness, FModifierStatesRowHandle Modifier);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
