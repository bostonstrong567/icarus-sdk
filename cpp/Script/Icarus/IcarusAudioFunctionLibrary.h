// /Script/Icarus.IcarusAudioFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Audio/IcarusAudioFunctionLibrary.h

UCLASS()
class UIcarusAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool EventInstanceIsInAudibleRange(FFMODEventInstance EventInstance);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetEventLengthInSeconds(UFMODEvent* Event);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetEventMaxDistance(UFMODEvent* Event);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static FVector GetListenerLocation(UObject* WorldContextObject);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static UAudioContextComponent* GetLocalPlayerAudioContext(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static FTransform GetNearestListenerTransform(FVector TargetLocation);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static float GetSimpleOcclusionOnce(UObject* WorldContextObject, FVector Location, AActor* IgnoreActor);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static TMap<int32, float> GetSubtitleTimes(UFMODEvent* Event, int32 NumSubtitles);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static bool LocationIsInAudibleRangeOfEvent(FVector Location, UFMODEvent* Event);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void PlayReplicatedOneShot(UObject* WorldContext, UFMODEvent* Event, FTransform Transform, bool bUseListenerRotation, bool bUseOcclusion);  // parameters 0x42
    UFUNCTION() static void RegisterEventInstanceToUseListenerRotation(FFMODEventInstance Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void SetAudioComponentPlayState(UFMODAudioComponent* AudioComponent, bool bShouldPlay);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentAudioContextParameters(AActor* ContextActor, UFMODAudioComponent* AudioComponent, bool bUseOcclusion, FName TracePoint, bool bUseWaterImmersion);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) static void SetEventAudioContextParameters(AActor* ContextActor, FFMODEventInstance EventInstance, bool bUseOcclusion, FName TracePoint, bool bUseWaterImmersion);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) static void StopAllEvents();
};
