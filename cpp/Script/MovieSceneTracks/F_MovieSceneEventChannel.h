// /Script/MovieSceneTracks.MovieSceneEventChannel
// size 0x88, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Channels/MovieSceneEventChannel.h

USTRUCT()
struct FMovieSceneEventChannel : public FMovieSceneChannel
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FFrameNumber> KeyTimes;  // 0x0008, size 0x10
    UPROPERTY() TArray<FMovieSceneEvent> KeyValues;  // 0x0018, size 0x10
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0028, not reflected
};
