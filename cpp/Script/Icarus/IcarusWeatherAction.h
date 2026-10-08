// /Script/Icarus.IcarusWeatherAction
// Derives from: UActorComponent > UObject
// size 0x7C8, declared in Icarus/Source/Icarus/Systems/Weather/IcarusWeatherAction.h

UCLASS(Config=Engine)
class UIcarusWeatherAction : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FWeatherActionComplete WeatherActionComplete;  // 0x00B0, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FWeatherEventsRowHandle ParentWeatherEvent;  // 0x00B4, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FWeatherActionsRowHandle WeatherActionData;  // 0x00CC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FIcarusWeatherActionData CachedActionData;  // 0x00E8, size 0x6B0
    UPROPERTY(BlueprintAssignable) FActionRowUpdatedSignature ActionRowUpdated;  // 0x0798, size 0x1
    UPROPERTY(Replicated, BlueprintReadOnly) float TotalLifeTime;  // 0x079C, size 0x4
    UPROPERTY(BlueprintReadOnly) float CurrentLifeTime;  // 0x07A0, size 0x4
    UPROPERTY(Replicated) uint16 Replicated_CurrentLifeTime;  // 0x07A4, size 0x2
    UPROPERTY(Replicated, BlueprintReadOnly) FBiomesRowHandle BiomeAssigned;  // 0x07A8, size 0x18
    UPROPERTY() bool bIsRunning;  // 0x07C0, size 0x1

    UFUNCTION() void ActionTick_External(float Delta, AWeatherController* WeatherController);  // parameters 0x10
    UFUNCTION() FBiomesRowHandle GetBiomeAssigned();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentLifeTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetStormTier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(float ExpectedLifeTime, FBiomesRowHandle Biome, FWeatherEventsRowHandle ParentWeatherEvent, FWeatherActionsRowHandle ActionData);  // parameters 0x4C
    UFUNCTION() void OnRep_ParentWeatherEvent();
    UFUNCTION() void OnRep_WeatherActionData();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetCurrentLifetime(const float& NewLifetime);  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) void WeatherActionEnded(AWeatherController* WeatherController);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void WeatherActionStarted(AWeatherController* WeatherController);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void WeatherActionTick(float Delta, AWeatherController* WeatherController);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void WeatherActionVisualTick(float Delta, AWeatherController* WeatherController);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void WeatherEventUpdated(FWeatherEventsRowHandle& Event);  // parameters 0x18

    // Virtual functions that start here:
    //   WeatherEventUpdated_Implementation
};
