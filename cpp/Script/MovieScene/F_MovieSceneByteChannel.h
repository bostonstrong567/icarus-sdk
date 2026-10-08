// /Script/MovieScene.MovieSceneByteChannel
// size 0x98, declared in Engine/Source/Runtime/MovieScene/Public/Channels/MovieSceneByteChannel.h

USTRUCT()
struct FMovieSceneByteChannel : public FMovieSceneChannel
{
    UPROPERTY() TArray<FFrameNumber> Times;  // 0x0008, size 0x10
    UPROPERTY() uint8 DefaultValue;  // 0x0018, size 0x1
    UPROPERTY() bool bHasDefaultValue;  // 0x0019, size 0x1
    UPROPERTY() TArray<uint8> Values;  // 0x0020, size 0x10
    UPROPERTY() UEnum* Enum;  // 0x0030, size 0x8

    // Not reflected:
    FMovieSceneKeyHandleMap KeyHandles;  // 0x0038
};
