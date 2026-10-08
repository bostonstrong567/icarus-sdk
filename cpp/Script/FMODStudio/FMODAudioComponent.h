// /Script/FMODStudio.FMODAudioComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x380, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Classes/FMODAudioComponent.h

UCLASS(Config=Engine)
class UFMODAudioComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Event;  // 0x01F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, float> ParameterCache;  // 0x0200, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProgrammerSoundName;  // 0x0258, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableTimelineCallbacks : 1;  // 0x0268, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseListenerRotation;  // 0x026C, size 0x1
    UPROPERTY() uint8 bAutoDestroy : 1;  // 0x0284, mask 0x01
    UPROPERTY() uint8 bStopWhenOwnerDestroyed : 1;  // 0x0284, mask 0x02
    UPROPERTY(BlueprintAssignable) FOnEventStopped OnEventStopped;  // 0x0288, size 0x10
    UPROPERTY(BlueprintAssignable) FOnTimelineMarker OnTimelineMarker;  // 0x0298, size 0x10
    UPROPERTY(BlueprintAssignable) FOnTimelineBeat OnTimelineBeat;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODAttenuationDetails AttenuationDetails;  // 0x02B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODOcclusionDetails OcclusionDetails;  // 0x02C4, size 0x3

    // Not reflected: the engine's scripting cannot see these.
    bool bDefaultParameterValuesCached;  // 0x0250
    float[5] StoredProperties;  // 0x0270
    uint32 : 1 bApplyAmbientVolumes;  // 0x0284
    uint32 : 1 bApplyOcclusionParameter;  // 0x0284
    FMOD::Studio::EventInstance * StudioInstance;  // 0x02C8
    IFMODStudioModule * Module;  // 0x02D0, private
    double InteriorLastUpdateTime;  // 0x02D8, private
    float SourceInteriorVolume;  // 0x02E0, private
    float SourceInteriorLPF;  // 0x02E4, private
    float CurrentInteriorVolume;  // 0x02E8, private
    float CurrentInteriorLPF;  // 0x02EC, private
    float AmbientVolume;  // 0x02F0, private
    float AmbientLPF;  // 0x02F4, private
    float LastVolume;  // 0x02F8, private
    float LastLPF;  // 0x02FC, private
    bool wasOccluded;  // 0x0300, private
    FMOD_STUDIO_PARAMETER_ID OcclusionID;  // 0x0304, private
    FMOD_STUDIO_PARAMETER_ID AmbientVolumeID;  // 0x030C, private
    FMOD_STUDIO_PARAMETER_ID AmbientLPFID;  // 0x0314, private
    FWindowsCriticalSection CallbackLock;  // 0x0320, private
    TArray<FTimelineMarkerProperties,TSizedDefaultAllocator<32> > CallbackMarkerQueue;  // 0x0348, private
    TArray<FTimelineBeatProperties,TSizedDefaultAllocator<32> > CallbackBeatQueue;  // 0x0358, private
    FMOD::Sound * ProgrammerSound;  // 0x0368, private
    bool NeedDestroyProgrammerSoundCallback;  // 0x0370, private
    int32 EventLength;  // 0x0374, private

    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetLength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) float GetParameter(FName Name);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetParameterValue(FName Name, float& UserValue, float& FinalValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) float GetProperty(TEnumAsByte<EFMODEventProperty> Property);  // parameters 0x8
    UFUNCTION(BlueprintCallable) int32 GetTimelinePosition();  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool IsPlaying();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void KeyOff();
    UFUNCTION(BlueprintCallable) void Play();
    UFUNCTION(BlueprintCallable) void Release();
    UFUNCTION(BlueprintCallable) void SetEvent(UFMODEvent* NewEvent, bool bKeepParameterValues);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetParameter(FName Name, float Value);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetPaused(bool paused);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPitch(float pitch);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetProgrammerSoundName(FString Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetProperty(TEnumAsByte<EFMODEventProperty> Property, float Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTimelinePosition(int32 Time);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVolume(float volume);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Stop();
};
