// /Game/BP/Audio/Environment/BP_WeatherAudioComponent.BP_WeatherAudioComponent_C
// Derives from: UWeatherAudioComponent > USceneComponent > UActorComponent > UObject
// size 0x23C, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WeatherAudioComponent_C : public UWeatherAudioComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* IcarusActor;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WeatherAudioActive;  // 0x0210, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioComponent;  // 0x0218, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WeatherExposureUpdateFrequency;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle WeatherExposureTimerHandle;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* ItemFMODEvent;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Exposure;  // 0x0238, size 0x4

    UFUNCTION(BlueprintCallable) void CheckExposure(float& Exposure);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_WeatherAudioComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetBiome(FBiomesRowHandle& Biome);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnBiomeUpdated();
    UFUNCTION(BlueprintCallable) void PlayPointSourceAudio();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetPointSourceExposureParameter();
    UFUNCTION(BlueprintCallable) void StartExposureTimer();
    UFUNCTION(BlueprintCallable) void StartWeatherAudio();
    UFUNCTION(BlueprintCallable) void StopExposureTimer();
    UFUNCTION(BlueprintCallable) void StopPointSourceAudio();
    UFUNCTION(BlueprintCallable) void StopWeatherAudio();
    UFUNCTION(BlueprintCallable) void SubscribeToWeatherUpdates(FBiomesRowHandle Biome);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void UpdateWeatherAudio(bool bWeatherActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateWeatherExposure();
};
