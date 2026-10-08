// /Script/MovieScene.MovieSceneMarkedFrame
// size 0x20, declared in Engine/Source/Runtime/MovieScene/Public/MovieScene.h

USTRUCT()
struct FMovieSceneMarkedFrame
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumber FrameNumber;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Label;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsDeterminismFence;  // 0x0018, size 0x1
};
