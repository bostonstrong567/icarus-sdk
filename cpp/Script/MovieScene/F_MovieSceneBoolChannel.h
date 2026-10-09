// /Script/MovieScene.MovieSceneBoolChannel
// size 0x90, declared in Engine/Source/Runtime/MovieScene/Public/Channels/MovieSceneBoolChannel.h

USTRUCT()
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FFrameNumber> Times;  // 0x0008, size 0x10
    UPROPERTY() bool DefaultValue;  // 0x0018, size 0x1
    UPROPERTY() bool bHasDefaultValue;  // 0x0019, size 0x1
    UPROPERTY() TArray<bool> Values;  // 0x0020, size 0x10
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0030, not reflected
};
