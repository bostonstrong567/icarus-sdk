// /Script/MovieScene.MovieSceneSectionParameters
// size 0x24, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneSectionParameters.h

USTRUCT()
struct FMovieSceneSectionParameters
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumber StartFrameOffset;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanLoop;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumber EndFrameOffset;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumber FirstLoopStartFrameOffset;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeScale;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) int32 HierarchicalBias;  // 0x0014, size 0x4
    UPROPERTY(Deprecated) float StartOffset;  // 0x0018, size 0x4
    UPROPERTY(Deprecated) float PrerollTime;  // 0x001C, size 0x4
    UPROPERTY(Deprecated) float PostrollTime;  // 0x0020, size 0x4
};
