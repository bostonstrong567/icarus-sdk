// /Game/BP/Audio/Environment/BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C
// Derives from: UBP_WeatherAudioComponent_C > UWeatherAudioComponent > USceneComponent > UActorComponent > UObject
// size 0x248, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WeatherAudioComponent_WindowShutter_C : public UBP_WeatherAudioComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0240, size 0x8

    UFUNCTION(BlueprintCallable) void CheckExposure(float& Exposure);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_WeatherAudioComponent_WindowShutter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayPointSourceAudio();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetOpenState(bool Open);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartWeatherAudio();
};
