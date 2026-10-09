// /Script/Icarus.WeatherAudioSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x90, declared in Icarus/Source/Icarus/Audio/Weather/WeatherAudioSubsystem.h

UCLASS()
class UWeatherAudioSubsystem : public UWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TMap<FBiomesRowHandle, FWeatherAudioSubsystemBiomeRecord> BiomeRecords;  // 0x0030, size 0x50
    UPROPERTY() AWeatherController* WeatherController;  // 0x0080, size 0x8
    FTimerHandle InitWithControllerTimerHandle;  // 0x0088, not reflected
public:
    UFUNCTION() void OnWeatherUpdated();
    UFUNCTION(BlueprintCallable) void SubscribeToWeatherUpdates(UWeatherAudioComponent* WeatherAudioComponent, FBiomesRowHandle Biome);  // parameters 0x20
};
