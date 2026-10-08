// /Script/Icarus.WeatherForecastBarComponent
// Derives from: UActorComponent > UObject
// size 0xC8, declared in Icarus/Source/Icarus/Systems/Weather/WeatherForecastBarComponent.h

UCLASS(Config=Engine)
class UWeatherForecastBarComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FForecastItemsUpdated ForecastItemsUpdated;  // 0x00B0, size 0x1
    UPROPERTY(BlueprintAssignable) FProspectForecastUpdated ProspectForecastUpdated;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FWeatherForecastItem> ForecastItems;  // 0x00B8, size 0x10

    UFUNCTION(BlueprintCallable) void AddItems(int32 Begin, const TArray<FWeatherBlock>& WeatherBlocks, int32 Now);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ClearItems();
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_ProspectForecastUpdated(FProspectForecastRowHandle NewForecast);  // parameters 0x18
    UFUNCTION() void OnRep_ForecastItems();
    UFUNCTION(BlueprintCallable) void RemovePastItems(int32 Now);  // parameters 0x4

    // Virtual functions that start here:
    //   Multicast_ProspectForecastUpdated_Implementation
};
