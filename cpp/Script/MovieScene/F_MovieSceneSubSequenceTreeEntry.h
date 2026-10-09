// /Script/MovieScene.MovieSceneSubSequenceTreeEntry
// size 0x18, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h

USTRUCT()
struct FMovieSceneSubSequenceTreeEntry
{
public:
    FMovieSceneSequenceID SequenceID;  // 0x0000, not reflected
    ESectionEvaluationFlags Flags;  // 0x0004, not reflected
    FMovieSceneWarpCounter RootToSequenceWarpCounter;  // 0x0008, not reflected
};
