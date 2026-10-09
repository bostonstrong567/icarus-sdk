// /Script/AudioMixer.QuartzClockHandle
// Derives from: UObject
// size 0x190, declared in Engine/Source/Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h

UCLASS(Transient)
class UQuartzClockHandle : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    TSharedPtr<Audio::FShareableQuartzCommandQueue,1> CommandQueuePtr;  // 0x0028, not reflected
    TArray<UQuartzClockHandle::CommandDelegateGameThreadData,TSizedDefaultAllocator<32> > QuantizedCommandDelegates;  // 0x0038, not reflected
    UQuartzClockHandle::MetronomeDelegateGameThreadData[18] MetronomeDelegates;  // 0x0048, not reflected
    UPROPERTY(Transient) UQuartzSubsystem* QuartzSubsystem;  // 0x0168, size 0x8
    FName ClockHandleId;  // 0x0170, not reflected
    FName CurrentClockId;  // 0x0178, not reflected
    bool bConnectedToClock;  // 0x0180, not reflected
    UPROPERTY(Transient) UWorld* WorldPtr;  // 0x0188, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetBeatsPerMinute(UObject* WorldContextObject) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) FQuartzTransportTimeStamp GetCurrentTimestamp(UObject* WorldContextObject);  // parameters 0x18
    UFUNCTION(BlueprintCallable) float GetDurationOfQuantizationTypeInSeconds(UObject* WorldContextObject, const EQuartzCommandQuantization& QuantizationType, float Multiplier);  // parameters 0x14
    UFUNCTION(BlueprintCallable) float GetEstimatedRunTime(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMillisecondsPerTick(UObject* WorldContextObject) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSecondsPerTick(UObject* WorldContextObject) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetThirtySecondNotesPerMinute(UObject* WorldContextObject) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTicksPerSecond(UObject* WorldContextObject) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) bool IsClockRunning(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void PauseClock(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ResetTransport(UObject* WorldContextObject, const FOnQuartzCommandEventBP& InDelegate);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ResetTransportQuantized(UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, const FOnQuartzCommandEventBP& InDelegate, UQuartzClockHandle*& ClockHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ResumeClock(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetBeatsPerMinute(UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float BeatsPerMinute);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void SetMillisecondsPerTick(UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void SetSecondsPerTick(UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float SecondsPerTick);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void SetThirtySecondNotesPerMinute(UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void SetTicksPerSecond(UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float TicksPerSecond);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void StartClock(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void StartOtherClock(UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, const FOnQuartzCommandEventBP& InDelegate);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void StopClock(UObject* WorldContextObject, bool CancelPendingEvents, UQuartzClockHandle*& ClockHandle);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SubscribeToAllQuantizationEvents(UObject* WorldContextObject, const FOnQuartzMetronomeEventBP& OnQuantizationEvent, UQuartzClockHandle*& ClockHandle);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SubscribeToQuantizationEvent(UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const FOnQuartzMetronomeEventBP& OnQuantizationEvent, UQuartzClockHandle*& ClockHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void UnsubscribeFromAllTimeDivisions(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UnsubscribeFromTimeDivision(UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, UQuartzClockHandle*& ClockHandle);  // parameters 0x18
};
