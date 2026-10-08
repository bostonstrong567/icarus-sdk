// /Script/MovieScene.MovieSceneDeterminismData
// size 0x18, declared in Engine/Source/Runtime/MovieScene/Public/Compilation/IMovieSceneDeterminismSource.h

USTRUCT()
struct FMovieSceneDeterminismData
{
    UPROPERTY() TArray<FFrameTime> Fences;  // 0x0000, size 0x10
    UPROPERTY() bool bParentSequenceRequiresLowerFence;  // 0x0010, size 0x1
    UPROPERTY() bool bParentSequenceRequiresUpperFence;  // 0x0011, size 0x1
};
