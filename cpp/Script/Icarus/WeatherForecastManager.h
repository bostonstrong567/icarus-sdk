// /Script/Icarus.WeatherForecastManager
// Derives from: AInfo > AActor > UObject
// size 0x310, declared in Icarus/Source/Icarus/Systems/Weather/WeatherForecastManager.h

UCLASS(Config=Engine)
class AWeatherForecastManager : public AInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FForecastRestoredFromDatabase OnForecastRestoredFromDatabase;  // 0x0220, size 0x10
protected:
    UPROPERTY(EditAnywhere, Instanced) UWeatherForecastRecorderComponent* ForecastRecorder;  // 0x0230, size 0x8
private:
    int32 LastEndTime;  // 0x0238, not reflected
    int32 DayLength;  // 0x023C, not reflected
    int32 NumDays;  // 0x0240, not reflected
    bool bPostProspectInfoFetched;  // 0x0244, not reflected
    UPROPERTY(Instanced) UWeatherForecasting* WeatherForecasting;  // 0x0248, size 0x8
    UPROPERTY(Instanced) UWeatherForecastBarComponent* WeatherForecastBar;  // 0x0250, size 0x8
    UPROPERTY() FProspectForecastRowHandle ForecastRow;  // 0x0258, size 0x18
    UPROPERTY() FProspectForecastRowHandle InitialForecastRow;  // 0x0270, size 0x18
    TQueue<FWeatherBlock,1> FutureBlocks;  // 0x0290, not reflected
    TArray<FWeatherBlock,TSizedDefaultAllocator<32> > QueuedBlocks;  // 0x02A0, not reflected
    TArray<FWeatherBlock,TSizedDefaultAllocator<32> > ForecastBlocks;  // 0x02B0, not reflected
    FRecordedCurrentWeatherBlock QueuedNowBlock;  // 0x02C0, not reflected
    TQueue<int,1> BlockEndTimes;  // 0x02F0, not reflected
    int32 LastNowTick;  // 0x0300, not reflected
public:
    UFUNCTION(BlueprintCallable) bool DoTick(int32 Now);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void EnqueueForecast(TMap<FWeatherBiomeGroupsEnum, FWeatherBiomeGroupForecast>& OutBiomeGroupForecast);  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentForecastInfo(FRecordedCurrentWeatherBlock& NowBlockOut) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) UWeatherForecastBarComponent* GetWeatherBar();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Initialize(int32 GameStateSeed, int32 InNumDays);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsReady() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PostProspectInfoFetched();
    UFUNCTION(BlueprintCallable) void QueueRestoreForecastFromDatabase(const FRecordedCurrentWeatherBlock& NowBlock);  // parameters 0x30
    UFUNCTION(BlueprintCallable) bool RestoreForecastFromDatabase();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetInitialForecast(const FProspectForecastRowHandle& InitialForecastRowHandle, const FProspectForecastRowHandle& ForecastRowHandle, int32 Now);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldInitProspectSeed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateForecast(const FProspectForecastRowHandle& ForecastRowHandle, TMap<FWeatherBiomeGroupsEnum, FWeatherBiomeGroupForecast>& CurrentBiomeGroupForecast);  // parameters 0x68
};
