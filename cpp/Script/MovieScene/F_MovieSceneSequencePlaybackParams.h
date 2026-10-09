// /Script/MovieScene.MovieSceneSequencePlaybackParams
// size 0x28, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSequencePlayer.h

USTRUCT()
struct FMovieSceneSequencePlaybackParams
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameTime Frame;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString MarkedFrame;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMovieScenePositionType PositionType;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EUpdatePositionMethod UpdateMethod;  // 0x0021, size 0x1
};
