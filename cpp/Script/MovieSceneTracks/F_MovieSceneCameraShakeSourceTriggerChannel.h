// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// size 0x88, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h

USTRUCT()
struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
    UPROPERTY() TArray<FFrameNumber> KeyTimes;  // 0x0008, size 0x10
    UPROPERTY() TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues;  // 0x0018, size 0x10

    // Not reflected:
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0028
};
