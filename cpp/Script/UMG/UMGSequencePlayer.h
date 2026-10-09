// /Script/UMG.UMGSequencePlayer
// Derives from: UObject
// size 0x3C8, declared in Engine/Source/Runtime/UMG/Public/Animation/UMGSequencePlayer.h

UCLASS(Transient)
class UUMGSequencePlayer : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UWidgetAnimation* Animation;  // 0x0260, size 0x8
    TWeakObjectPtr<UUserWidget,FWeakObjectPtr> UserWidget;  // 0x0268, not reflected
    UPROPERTY() FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x0270, size 0xE8
    FFrameRate AnimationResolution;  // 0x0358, not reflected
    FFrameNumber AbsolutePlaybackStart;  // 0x0360, not reflected
    FFrameTime TimeCursorPosition;  // 0x0364, not reflected
    int32 Duration;  // 0x036C, not reflected
    FFrameTime EndTime;  // 0x0370, not reflected
    EMovieScenePlayerStatus::Type PlayerStatus;  // 0x0378, not reflected
    UUMGSequencePlayer::FOnSequenceFinishedPlaying OnSequenceFinishedPlayingEvent;  // 0x0380, not reflected
    int32 NumLoopsToPlay;  // 0x0398, not reflected
    int32 NumLoopsCompleted;  // 0x039C, not reflected
    float PlaybackSpeed;  // 0x03A0, not reflected
    bool bRestoreState;  // 0x03A4, not reflected
    EUMGSequencePlayMode::Type PlayMode;  // 0x03A8, not reflected
    FName UserTag;  // 0x03AC, not reflected
    bool bIsPlayingForward;  // 0x03B4, not reflected
    bool : 1 bCompleteOnPostEvaluation;  // 0x03B5, not reflected
    bool : 1 bIsEvaluating;  // 0x03B5, not reflected
    TArray<TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > LatentActions;  // 0x03B8, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetUserTag() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetUserTag(FName InUserTag);  // parameters 0x8
};
