// /Script/Icarus.WeatherAudioSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x90, declared in Icarus/Source/Icarus/Audio/Weather/WeatherAudioSubsystem.h

UCLASS()
class UWeatherAudioSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY() TMap<FBiomesRowHandle, FWeatherAudioSubsystemBiomeRecord> BiomeRecords;  // 0x0030, size 0x50
    UPROPERTY() AWeatherController* WeatherController;  // 0x0080, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle InitWithControllerTimerHandle;  // 0x0088, private

    UFUNCTION() void OnWeatherUpdated();
    UFUNCTION(BlueprintCallable) void SubscribeToWeatherUpdates(UWeatherAudioComponent* WeatherAudioComponent, FBiomesRowHandle Biome);  // parameters 0x20
};
