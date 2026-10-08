// /Script/Engine.TimecodeProvider
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/TimecodeProvider.h

UCLASS(Abstract)
class UTimecodeProvider : public UObject
{
public:
    UPROPERTY(EditAnywhere) float FrameDelay;  // 0x0028, size 0x4

    UFUNCTION(BlueprintCallable) void FetchAndUpdate();
    UFUNCTION(BlueprintCallable) bool FetchTimecode(FQualifiedFrameTime& OutFrameTime);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) FQualifiedFrameTime GetDelayedQualifiedFrameTime() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FTimecode GetDelayedTimecode() const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FFrameRate GetFrameRate() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FQualifiedFrameTime GetQualifiedFrameTime() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) ETimecodeProviderSynchronizationState GetSynchronizationState() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FTimecode GetTimecode() const;  // parameters 0x14

    // Virtual functions that start here:
    //   FetchAndUpdate, FetchTimecode, GetQualifiedFrameTime, GetSynchronizationState, Initialize, Shutdown
};
