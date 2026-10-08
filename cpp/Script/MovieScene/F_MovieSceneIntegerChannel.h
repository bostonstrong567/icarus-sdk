// /Script/MovieScene.MovieSceneIntegerChannel
// size 0x90, declared in Engine/Source/Runtime/MovieScene/Public/Channels/MovieSceneIntegerChannel.h

USTRUCT()
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
    UPROPERTY() TArray<FFrameNumber> Times;  // 0x0008, size 0x10
    UPROPERTY() int32 DefaultValue;  // 0x0018, size 0x4
    UPROPERTY() bool bHasDefaultValue;  // 0x001C, size 0x1
    UPROPERTY() TArray<int32> Values;  // 0x0020, size 0x10

    // Not reflected:
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0030
};
