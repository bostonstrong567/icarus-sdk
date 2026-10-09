// /Script/MovieSceneTracks.MovieSceneStringChannel
// size 0xA0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Channels/MovieSceneStringChannel.h

USTRUCT()
struct FMovieSceneStringChannel : public FMovieSceneChannel
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FFrameNumber> Times;  // 0x0008, size 0x10
    UPROPERTY() TArray<FString> Values;  // 0x0018, size 0x10
    UPROPERTY() FString DefaultValue;  // 0x0028, size 0x10
    UPROPERTY() bool bHasDefaultValue;  // 0x0038, size 0x1
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0040, not reflected
};
