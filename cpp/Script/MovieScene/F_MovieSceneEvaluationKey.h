// /Script/MovieScene.MovieSceneEvaluationKey
// size 0xC, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h

USTRUCT()
struct FMovieSceneEvaluationKey
{
public:
    UPROPERTY() FMovieSceneSequenceID SequenceID;  // 0x0000, size 0x4
    UPROPERTY() FMovieSceneTrackIdentifier TrackIdentifier;  // 0x0004, size 0x4
    UPROPERTY() uint32 SectionIndex;  // 0x0008, size 0x4
};
