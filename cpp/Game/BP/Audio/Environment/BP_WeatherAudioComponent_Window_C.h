// /Game/BP/Audio/Environment/BP_WeatherAudioComponent_Window.BP_WeatherAudioComponent_Window_C
// Derives from: UBP_WeatherAudioComponent_C > UWeatherAudioComponent > USceneComponent > UActorComponent > UObject
// size 0x249, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WeatherAudioComponent_Window_C : public UBP_WeatherAudioComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Open;  // 0x0248, size 0x1

    UFUNCTION(BlueprintCallable) void BuildingOpenStateChanged(TEnumAsByte<EBuildingOpenableState> NewState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckExposure(float& Exposure);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_WeatherAudioComponent_Window(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetOpenParameter();
    UFUNCTION(BlueprintCallable) void SetOpenState(bool Open);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartWeatherAudio();
};
