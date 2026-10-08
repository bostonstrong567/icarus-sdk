// /Script/MovieScene.MovieSceneSubSequenceTreeEntry
// size 0x18, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h

USTRUCT()
struct FMovieSceneSubSequenceTreeEntry
{

    // Not reflected:
    FMovieSceneSequenceID SequenceID;  // 0x0000
    ESectionEvaluationFlags Flags;  // 0x0004
    FMovieSceneWarpCounter RootToSequenceWarpCounter;  // 0x0008
};
