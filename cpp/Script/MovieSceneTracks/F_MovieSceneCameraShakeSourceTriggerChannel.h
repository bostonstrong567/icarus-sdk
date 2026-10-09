// /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// size 0x88, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h

USTRUCT()
struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FFrameNumber> KeyTimes;  // 0x0008, size 0x10
    UPROPERTY() TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues;  // 0x0018, size 0x10
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0028, not reflected
};
