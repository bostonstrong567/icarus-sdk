// /Script/UMG.UMGSequencePlayer
// Derives from: UObject
// size 0x3C8, declared in Engine/Source/Runtime/UMG/Public/Animation/UMGSequencePlayer.h

UCLASS(Transient)
class UUMGSequencePlayer : public UObject
{
public:
    UPROPERTY() UWidgetAnimation* Animation;  // 0x0260, size 0x8
    UPROPERTY() FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // 0x0270, size 0xE8

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UUserWidget,FWeakObjectPtr> UserWidget;  // 0x0268, private
    FFrameRate AnimationResolution;  // 0x0358, private
    FFrameNumber AbsolutePlaybackStart;  // 0x0360, private
    FFrameTime TimeCursorPosition;  // 0x0364, private
    int32 Duration;  // 0x036C, private
    FFrameTime EndTime;  // 0x0370, private
    EMovieScenePlayerStatus::Type PlayerStatus;  // 0x0378, private
    UUMGSequencePlayer::FOnSequenceFinishedPlaying OnSequenceFinishedPlayingEvent;  // 0x0380, private
    int32 NumLoopsToPlay;  // 0x0398, private
    int32 NumLoopsCompleted;  // 0x039C, private
    float PlaybackSpeed;  // 0x03A0, private
    bool bRestoreState;  // 0x03A4, private
    EUMGSequencePlayMode::Type PlayMode;  // 0x03A8, private
    FName UserTag;  // 0x03AC, private
    bool bIsPlayingForward;  // 0x03B4, private
    bool : 1 bIsEvaluating;  // 0x03B5, private
    bool : 1 bCompleteOnPostEvaluation;  // 0x03B5, private
    TArray<TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > LatentActions;  // 0x03B8, private

    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetUserTag() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetUserTag(FName InUserTag);  // parameters 0x8
};
