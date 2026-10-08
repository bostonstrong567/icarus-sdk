// /Game/BP/Audio/Environment/BP_WeatherAudioComponent_Deployable.BP_WeatherAudioComponent_Deployable_C
// Derives from: UBP_WeatherAudioComponent_C > UWeatherAudioComponent > USceneComponent > UActorComponent > UObject
// size 0x248, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WeatherAudioComponent_Deployable_C : public UBP_WeatherAudioComponent_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector TraceExtent;  // 0x023C, size 0xC

    UFUNCTION(BlueprintCallable) void CheckExposure(float& Exposure);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTraceStartPoints(TArray<FVector>& Points);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void StartWeatherAudio();
};
