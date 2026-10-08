// /Game/BP/Audio/Environment/BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C
// Derives from: UBP_WeatherAudioComponent_C > UWeatherAudioComponent > USceneComponent > UActorComponent > UObject
// size 0x24C, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WeatherAudioComponent_BuildingWindDamage_C : public UBP_WeatherAudioComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxDestructionPoints;  // 0x0248, size 0x4

    UFUNCTION(BlueprintCallable) void CheckExposure(float& Exposure);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_WeatherAudioComponent_BuildingWindDamage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceStopAndDestroy();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void StopWeatherAudio();
};
