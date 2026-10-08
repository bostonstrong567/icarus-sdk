// /Script/MovieScene.MovieSceneEvaluationGroup
// size 0x30, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h

USTRUCT()
struct FMovieSceneEvaluationGroup
{
    UPROPERTY() TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;  // 0x0000, size 0x10
    UPROPERTY() TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;  // 0x0010, size 0x10
    UPROPERTY() TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT;  // 0x0020, size 0x10
};
