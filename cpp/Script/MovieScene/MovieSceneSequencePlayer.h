// /Script/MovieScene.MovieSceneSequencePlayer
// Derives from: UObject
// size 0x4E8, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSequencePlayer.h

UCLASS(Abstract)
class UMovieSceneSequencePlayer : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOnMovieSceneSequencePlayerEvent OnPlay;  // 0x0260, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMovieSceneSequencePlayerEvent OnPlayReverse;  // 0x0270, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMovieSceneSequencePlayerEvent OnStop;  // 0x0280, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMovieSceneSequencePlayerEvent OnPause;  // 0x0290, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMovieSceneSequencePlayerEvent OnFinished;  // 0x02A0, size 0x10
    UPROPERTY() TEnumAsByte<EMovieScenePlayerStatus> Status;  // 0x02B0, size 0x1
    UPROPERTY(Replicated) uint8 bReversePlayback : 1;  // 0x02B4, mask 0x01
    UPROPERTY(Transient) UMovieSceneSequence* Sequence;  // 0x02B8, size 0x8
    UPROPERTY(Replicated) FFrameNumber StartTime;  // 0x02C0, size 0x4
    UPROPERTY(Replicated) int32 DurationFrames;  // 0x02C4, size 0x4
    UPROPERTY(Replicated) float DurationSubFrames;  // 0x02C8, size 0x4
    UPROPERTY(Transient) int32 CurrentNumLoops;  // 0x02CC, size 0x4
    UPROPERTY(Replicated) FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0x02D0, size 0x14
    UPROPERTY(Transient) FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x02E8, size 0xE8
    UPROPERTY(Replicated) FMovieSceneSequenceReplProperties NetSyncProps;  // 0x0438, size 0x10
    UPROPERTY(Transient) TScriptInterface<IMovieScenePlaybackClient> PlaybackClient;  // 0x0448, size 0x10
    UPROPERTY(Transient) UMovieSceneSequenceTickManager* TickManager;  // 0x0458, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bPendingOnStartedPlaying;  // 0x02B4, protected
    uint32 : 1 bIsEvaluating;  // 0x02B4, protected
    uint32 : 1 bIsMainLevelUpdate;  // 0x02B4, protected
    uint32 : 1 bSkipNextUpdate;  // 0x02B4, protected
    FMovieScenePlaybackPosition PlayPosition;  // 0x03D0, protected
    TSharedPtr<FMovieSceneSpawnRegister,0> SpawnRegister;  // 0x0428, protected
    FMovieSceneLatentActionManager LatentActionManager;  // 0x0460, protected
    TSharedPtr<FMovieSceneTimeController,0> TimeController;  // 0x0478, protected
    UMovieSceneSequencePlayer::FOnMovieSceneSequencePlayerUpdated OnMovieSceneSequencePlayerUpdate;  // 0x0488, private
    TOptional<double> OldMaxTickRate;  // 0x04A0, private
    TOptional<float> LastTickGameTimeSeconds;  // 0x04B0, private
    TOptional<FFrameTime> PauseOnFrame;  // 0x04B8, private
    TArray<TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > PreEvaluationCallbacks;  // 0x04C8, private
    TArray<TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > PostEvaluationCallbacks;  // 0x04D8, private

    UFUNCTION(BlueprintCallable) void ChangePlaybackDirection();
    UFUNCTION(BlueprintCallable) TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) FQualifiedFrameTime GetCurrentTime() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool GetDisableCameraCuts();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FQualifiedFrameTime GetDuration() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FQualifiedFrameTime GetEndTime() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetFrameDuration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FFrameRate GetFrameRate() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) TArray<FMovieSceneObjectBindingID> GetObjectBindings(UObject* InObject);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlayRate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UMovieSceneSequence* GetSequence() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FQualifiedFrameTime GetStartTime() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GoToEndAndStop();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPaused() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlaying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsReversed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void JumpToFrame(FFrameTime NewPosition);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool JumpToMarkedFrame(FString InLabel);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void JumpToSeconds(float TimeInSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Pause();
    UFUNCTION(BlueprintCallable) void Play();
    UFUNCTION(BlueprintCallable) void PlayLooping(int32 NumLoops);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayReverse();
    UFUNCTION(BlueprintCallable) void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void PlayToFrame(FFrameTime NewPosition);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool PlayToMarkedFrame(FString InLabel);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void PlayToSeconds(float TimeInSeconds);  // parameters 0x4
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);  // parameters 0xC
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void RPC_OnStopEvent(FFrameTime StoppedTime);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RestoreState();
    UFUNCTION(BlueprintCallable) void Scrub();
    UFUNCTION(BlueprintCallable) void ScrubToFrame(FFrameTime NewPosition);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool ScrubToMarkedFrame(FString InLabel);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void ScrubToSeconds(float TimeInSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDisableCameraCuts(bool bInDisableCameraCuts);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetFrameRate(FFrameRate FrameRate);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPlayRate(float PlayRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetTimeRange(float StartTime, float Duration);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Stop();
    UFUNCTION(BlueprintCallable) void StopAtCurrentTime();

    // Virtual functions that start here:
    //   CanPlay, OnLooped, OnPaused, OnStartedPlaying, OnStopped
    //   RPC_ExplicitServerUpdateEvent_Implementation, RPC_OnStopEvent_Implementation
    //   UpdateMovieSceneInstance
};
