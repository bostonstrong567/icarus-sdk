// /Script/MovieScene.MovieSceneSequenceHierarchy
// size 0x118, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h

USTRUCT()
struct FMovieSceneSequenceHierarchy
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneSequenceHierarchyNode RootNode;  // 0x0000, size 0x18
    UPROPERTY() FMovieSceneSubSequenceTree Tree;  // 0x0018, size 0x60
    UPROPERTY() TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences;  // 0x0078, size 0x50
    UPROPERTY() TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy;  // 0x00C8, size 0x50
};
