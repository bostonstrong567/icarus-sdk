// /Script/MovieScene.MovieSceneFieldEntry_EvaluationTrack
// size 0xC, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h

USTRUCT()
struct FMovieSceneFieldEntry_EvaluationTrack
{
public:
    UPROPERTY() FMovieSceneEvaluationFieldTrackPtr TrackPtr;  // 0x0000, size 0x8
    UPROPERTY() uint16 NumChildren;  // 0x0008, size 0x2
};
