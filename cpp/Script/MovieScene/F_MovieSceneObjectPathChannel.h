// /Script/MovieScene.MovieSceneObjectPathChannel
// size 0xC0, declared in Engine/Source/Runtime/MovieScene/Public/Channels/MovieSceneObjectPathChannel.h

USTRUCT()
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TSubclassOf<UObject> PropertyClass;  // 0x0008, size 0x8
    UPROPERTY() TArray<FFrameNumber> Times;  // 0x0010, size 0x10
    UPROPERTY() TArray<FMovieSceneObjectPathChannelKeyValue> Values;  // 0x0020, size 0x10
    UPROPERTY() FMovieSceneObjectPathChannelKeyValue DefaultValue;  // 0x0030, size 0x30
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0060, not reflected
};
