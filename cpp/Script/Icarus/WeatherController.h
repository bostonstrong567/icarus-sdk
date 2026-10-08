// /Script/Icarus.WeatherController
// Derives from: AInfo > AActor > UObject
// size 0x338, declared in Icarus/Source/Icarus/Systems/Weather/WeatherController.h

UCLASS(Config=Engine)
class AWeatherController : public AInfo
{
public:
    UPROPERTY(BlueprintAssignable) FWeatherUpdated WeatherUpdated;  // 0x0220, size 0x1
    UPROPERTY(BlueprintAssignable) FWeatherEventStartedSignature OnWeatherEventStarted;  // 0x0228, size 0x10
    UPROPERTY(BlueprintAssignable) FWeatherEventCompletedSignature OnWeatherEventCompleted;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateCycle;  // 0x0248, size 0x4
    UPROPERTY() float CurrentUpdateTime;  // 0x024C, size 0x4
    UPROPERTY(BlueprintReadOnly) TMap<FName, FActorCollection> BiomeToActor;  // 0x0250, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FWeatherBiomeGroupsEnum, FWeatherBiomeGroupForecast> BiomeGroupForecast;  // 0x02A0, size 0x50
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FActiveWeatherInfo> CurrentWeather;  // 0x02F0, size 0x10
    UPROPERTY() TArray<FActiveWeatherInfo> WeatherToRemove;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, Instanced) UWeatherControllerRecorderComponent* Recorder;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UIcarusStatContainer* StatContainer;  // 0x0318, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    float AccumulatedDeltaTime;  // 0x0320, private
    FActorCollection NullBiomeToActor;  // 0x0328, private

    UFUNCTION(BlueprintCallable) bool AddWeatherEvent(const FBiomesRowHandle& Biome, const FWeatherEventsRowHandle& Event, int32 StartTime);  // parameters 0x35
    UFUNCTION(BlueprintCallable) void CheckForStormStart(int32 Now);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceStopAllWeatherEvents();
    UFUNCTION(BlueprintCallable) FActiveWeatherInfo GetActiveWeatherInfoForBiome(FBiomesRowHandle Biome, EValid& OutValidity) const;  // parameters 0x68
    UFUNCTION(BlueprintCallable, BlueprintPure) FWeatherEventsRowHandle GetWeatherEventForBiome(const FBiomesRowHandle& Biome, bool& bHasWeatherEvent) const;  // parameters 0x34
    UFUNCTION() bool HasActiveStorm(const FBiomesRowHandle& BiomeRow) const;  // parameters 0x19
    UFUNCTION(BlueprintNativeEvent) void LowHertzTick();
    UFUNCTION(BlueprintImplementableEvent) void NotifyStormWarning(int32 TimeUntilStorm, const FWeatherEventsRowHandle& StormRow, const FBiomesEnum& Biome);  // parameters 0x30
    UFUNCTION() void OnRep_CurrentWeather();
    UFUNCTION(BlueprintNativeEvent) void PostProspectInfoFetched();
    UFUNCTION(BlueprintCallable) bool RegisterActor(AIcarusActor* Actor, const FBiomesRowHandle& Biome);  // parameters 0x21
    UFUNCTION() void SetWorldStats();
    UFUNCTION(BlueprintCallable) bool UnregisterActor(AIcarusActor* Actor, const FBiomesRowHandle& Biome);  // parameters 0x21
    UFUNCTION() void UpdateWeather(float Delta);  // parameters 0x4
    UFUNCTION() void WeatherEventCompleted(UIcarusWeatherAction* ActionComplete);  // parameters 0x8
};
