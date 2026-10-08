// /Game/BP/Audio/Buildings/BP_BuildingAudioComponent.BP_BuildingAudioComponent_C
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x258, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_BuildingAudioComponent_C : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UFMODEvent*, UMultiPointAudioEmitter*> Emitters;  // 0x0200, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FireAudioEvent;  // 0x0250, size 0x8

    UFUNCTION(BlueprintCallable) void Add_Weather_Audio(UWeatherAudioComponent* WeatherAudioComponent, UFMODEvent* Event);  // parameters 0x10, named "Add Weather Audio"
    UFUNCTION(BlueprintCallable) void AddEmitterNode(UObject* NodeObject, UFMODEvent* FMODEvent);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void AddFireAudioNode(UFlammableInstance* FlammableInstance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddUnzipAudioNode(USceneComponent* TargetComponent, UFMODEvent* FMODEvent);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetFireAudioData(bool& HasFireAudio, float& Weighting, FVector& Location);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void RemoveEmitterNode(UObject* NodeObject, UFMODEvent* FMODEvent);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveFireAudioNode(UFlammableInstance* FlammableInstance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveUnzipAudioNode(USceneComponent* TargetComponent, UFMODEvent* FMODEvent);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveWeatherAudio(UWeatherAudioComponent* WeatherAudioComponent, UFMODEvent* Event);  // parameters 0x10
};
