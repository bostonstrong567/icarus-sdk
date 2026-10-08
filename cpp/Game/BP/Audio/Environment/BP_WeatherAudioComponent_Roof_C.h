// /Game/BP/Audio/Environment/BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C
// Derives from: UBP_WeatherAudioComponent_C > UWeatherAudioComponent > USceneComponent > UActorComponent > UObject
// size 0x258, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WeatherAudioComponent_Roof_C : public UBP_WeatherAudioComponent_C, public IMultiPointAudioNodeInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_BuildingAudioComponent_C* BuildingAudio;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* BuildingFMODEvent;  // 0x0250, size 0x8

    UFUNCTION(BlueprintCallable) void CheckExposure(float& Exposure);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DeregisterWithBuilding();
    UFUNCTION() void ExecuteUbergraph_BP_WeatherAudioComponent_Roof(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FVector GetMultiPointAudioLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetMultiPointAudioWeighting() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBuildingDestroyed(ABuildingBase* Building, EBuildingDestroyReason DestroyReason);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RegisterWithBuilding();
    UFUNCTION(BlueprintCallable) void StartWeatherAudio();
    UFUNCTION(BlueprintCallable) void StopWeatherAudio();
    UFUNCTION(BlueprintCallable) void UpdateWeatherExposure();
};
