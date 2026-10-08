// /Script/MovieScene.MovieSceneSequenceReplProperties
// size 0x10, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSequencePlayer.h

USTRUCT()
struct FMovieSceneSequenceReplProperties
{
    UPROPERTY() FFrameTime LastKnownPosition;  // 0x0000, size 0x8
    UPROPERTY() TEnumAsByte<EMovieScenePlayerStatus> LastKnownStatus;  // 0x0008, size 0x1
    UPROPERTY() int32 LastKnownNumLoops;  // 0x000C, size 0x4
};
