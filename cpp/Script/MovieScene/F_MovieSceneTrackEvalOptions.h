// /Script/MovieScene.MovieSceneTrackEvalOptions
// size 0x4, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneTrack.h

USTRUCT()
struct FMovieSceneTrackEvalOptions
{
public:
    UPROPERTY() uint8 bCanEvaluateNearestSection : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bEvalNearestSection : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bEvaluateInPreroll : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bEvaluateInPostroll : 1;  // 0x0000, mask 0x08
    UPROPERTY(Deprecated) uint8 bEvaluateNearestSection : 1;  // 0x0000, mask 0x10
};
