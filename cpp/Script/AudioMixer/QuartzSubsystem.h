// /Script/AudioMixer.QuartzSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x150, declared in Engine/Source/Runtime/AudioMixer/Public/Quartz/QuartzSubsystem.h

UCLASS()
class UQuartzSubsystem : public UTickableWorldSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    Audio::FQuartzClockManager SubsystemClockManager;  // 0x0070, private
    TArray<UQuartzClockHandle *,TSizedDefaultAllocator<32> > QuartzTickSubscribers;  // 0x00E0, private
    int32 UpdateIndex;  // 0x00F0, private
    TMap<FName,enum EQuarztClockManagerType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,enum EQuarztClockManagerType,0> > ClockManagerTypeMap;  // 0x00F8, private

    UFUNCTION(BlueprintCallable) UQuartzClockHandle* CreateNewClock(UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void DeleteClockByHandle(UObject* WorldContextObject, UQuartzClockHandle*& InClockHandle);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void DeleteClockByName(UObject* WorldContextObject, FName ClockName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool DoesClockExist(UObject* WorldContextObject, FName ClockName);  // parameters 0x11
    UFUNCTION(BlueprintCallable) float GetAudioRenderThreadToGameThreadAverageLatency();  // parameters 0x4
    UFUNCTION(BlueprintCallable) float GetAudioRenderThreadToGameThreadMaxLatency();  // parameters 0x4
    UFUNCTION(BlueprintCallable) float GetAudioRenderThreadToGameThreadMinLatency();  // parameters 0x4
    UFUNCTION(BlueprintCallable) FQuartzTransportTimeStamp GetCurrentClockTimestamp(UObject* WorldContextObject, const FName& InClockName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) float GetDurationOfQuantizationTypeInSeconds(UObject* WorldContextObject, FName ClockName, const EQuartzCommandQuantization& QuantizationType, float Multiplier);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) float GetEstimatedClockRunTime(UObject* WorldContextObject, const FName& InClockName);  // parameters 0x14
    UFUNCTION(BlueprintCallable) float GetGameThreadToAudioRenderThreadAverageLatency(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable) float GetGameThreadToAudioRenderThreadMaxLatency(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable) float GetGameThreadToAudioRenderThreadMinLatency(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable) UQuartzClockHandle* GetHandleForClock(UObject* WorldContextObject, FName ClockName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) float GetRoundTripAverageLatency(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable) float GetRoundTripMaxLatency(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable) float GetRoundTripMinLatency(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable) bool IsClockRunning(UObject* WorldContextObject, FName ClockName);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool IsQuartzEnabled();  // parameters 0x1
};
