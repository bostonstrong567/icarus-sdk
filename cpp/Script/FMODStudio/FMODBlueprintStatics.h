// /Script/FMODStudio.FMODBlueprintStatics
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Classes/FMODBlueprintStatics.h

UCLASS()
class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void BusSetMute(UFMODBus* Bus, bool bMute);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void BusSetPaused(UFMODBus* Bus, bool bPaused);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void BusSetVolume(UFMODBus* Bus, float Volume);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void BusStopAllEvents(UFMODBus* Bus, TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static float EventInstanceGetParameter(FFMODEventInstance EventInstance, FName Name);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void EventInstanceGetParameterValue(FFMODEventInstance EventInstance, FName Name, float& UserValue, float& FinalValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool EventInstanceIsValid(FFMODEventInstance EventInstance);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void EventInstanceKeyOff(FFMODEventInstance EventInstance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void EventInstancePlay(FFMODEventInstance EventInstance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void EventInstanceRelease(FFMODEventInstance EventInstance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void EventInstanceSetParameter(FFMODEventInstance EventInstance, FName Name, float Value);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void EventInstanceSetPaused(FFMODEventInstance EventInstance, bool Paused);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void EventInstanceSetPitch(FFMODEventInstance EventInstance, float Pitch);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void EventInstanceSetProperty(FFMODEventInstance EventInstance, TEnumAsByte<EFMODEventProperty> Property, float Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void EventInstanceSetTransform(FFMODEventInstance EventInstance, const FTransform& Location);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void EventInstanceSetVolume(FFMODEventInstance EventInstance, float Volume);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void EventInstanceStop(FFMODEventInstance EventInstance, bool Release);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static UFMODAsset* FindAssetByName(FString Name);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static UFMODEvent* FindEventByName(FString Name);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TArray<FFMODEventInstance> FindEventInstances(UObject* WorldContextObject, UFMODEvent* Event);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static float GetGlobalParameterByName(FName Name);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void GetGlobalParameterValueByName(FName Name, float& UserValue, float& FinalValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FString> GetOutputDrivers();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool IsBankLoaded(UFMODBank* Bank);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void LoadBank(UFMODBank* Bank, bool bBlocking, bool bLoadSampleData);  // parameters 0xA
    UFUNCTION(BlueprintCallable) static void LoadBankSampleData(UFMODBank* Bank);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void LoadEventSampleData(UObject* WorldContextObject, UFMODEvent* Event);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void MixerResume();
    UFUNCTION(BlueprintCallable) static void MixerSuspend();
    UFUNCTION(BlueprintCallable) static FFMODEventInstance PlayEvent2D(UObject* WorldContextObject, UFMODEvent* Event, bool bAutoPlay);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FFMODEventInstance PlayEventAtLocation(UObject* WorldContextObject, UFMODEvent* Event, const FTransform& Location, bool bAutoPlay, bool bUseListenerRotation);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static UFMODAudioComponent* PlayEventAttached(UFMODEvent* Event, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy, EFMODValid& IsValid, bool bUseListenerRotation);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void SetGlobalParameterByName(FName Name, float Value);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetLocale(FString Locale);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SetOutputDriverByIndex(int32 NewDriverIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetOutputDriverByName(FString NewDriverName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void UnloadBank(UFMODBank* Bank);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void UnloadBankSampleData(UFMODBank* Bank);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void UnloadEventSampleData(UObject* WorldContextObject, UFMODEvent* Event);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void VCASetVolume(UFMODVCA* Vca, float Volume);  // parameters 0xC
};
