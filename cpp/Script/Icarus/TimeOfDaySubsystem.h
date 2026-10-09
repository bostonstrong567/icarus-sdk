// /Script/Icarus.TimeOfDaySubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0xB0, declared in Icarus/Source/Icarus/Subsystems/World/TimeOfDaySubsystem.h

UCLASS()
class UTimeOfDaySubsystem : public UTickableWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FPlayersSleptNotifySignature OnPlayersSleptNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FTimeOfDayDayChangedSignature TimeOfDayDayChanged;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FTimeOfDayHourChangedSignature TimeOfDayHourChanged;  // 0x0060, size 0x10
    UPROPERTY(BlueprintAssignable) FTimeOfDayMinuteChangedSignature TimeOfDayMinuteChanged;  // 0x0070, size 0x10
protected:
    UPROPERTY() UCurveFloat* TimeScaleCurve;  // 0x0080, size 0x8
    UPROPERTY() float TimeScale;  // 0x0088, size 0x4
    UPROPERTY() float MinimumTimeStep;  // 0x008C, size 0x4
    UPROPERTY() AIcarusGameStateSurvival* CachedGameState;  // 0x0090, size 0x8
    FTimerHandle SleepCheckTimer;  // 0x0098, not reflected
private:
    UCurveFloat * FallbackCurve;  // 0x00A0, not reflected
    float FracTimeOfDayStep;  // 0x00A8, not reflected
    int32 CurrentDay;  // 0x00AC, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void AttemptToSleep();
    UFUNCTION(BlueprintCallable) ESleepResult CanSleep();  // parameters 0x1
    UFUNCTION(BlueprintCallable) TSet<FModifierStatesRowHandle> GetAllSleepAffectingModifiers();  // parameters 0x50
    UFUNCTION(BlueprintCallable) float GetMinimumTimeStepSeconds();  // parameters 0x4
    UFUNCTION(BlueprintCallable) TSet<FModifierStatesRowHandle> GetSleepAffectingModifiers(AIcarusPlayerCharacter* Player);  // parameters 0x58
    UFUNCTION(BlueprintCallable) float GetTimeNormalized();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTimeOfDay(float& Total, float& Normalized, float& Realtime);  // parameters 0xC
    UFUNCTION(BlueprintCallable) FTimeOfDayEnum GetTimeOfDayEnum();  // parameters 0x10
    UFUNCTION(BlueprintCallable) int32 GetTimeOfDayHour();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTimeOfDayHoursMinutesSecs(int32& Hours, int32& Minutes, int32& Seconds);  // parameters 0xC
    UFUNCTION(BlueprintCallable) int32 GetTimeOfDayMinutes();  // parameters 0x4
    UFUNCTION(BlueprintCallable) float GetTimeRealtime();  // parameters 0x4
    UFUNCTION(BlueprintCallable) float GetTimeScale();  // parameters 0x4
    UFUNCTION(BlueprintCallable) float GetTimeTotal();  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool HasRequiredSleepModifier(AIcarusPlayerCharacter* Player);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool IsSleeping(AIcarusPlayerCharacter* Player);  // parameters 0x9
    UFUNCTION() void ProspectInfoFetched();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetMinimumTimeStepSeconds(float Step);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetTimeOfDay(float Total);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetTimeOfDayHour(int32 Hour);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetTimeScale(float NewScale);  // parameters 0x4
};
