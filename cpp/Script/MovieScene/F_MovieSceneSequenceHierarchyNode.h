// /Script/MovieScene.MovieSceneSequenceHierarchyNode
// size 0x18, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h

USTRUCT()
struct FMovieSceneSequenceHierarchyNode
{
    UPROPERTY() FMovieSceneSequenceID ParentID;  // 0x0000, size 0x4
    UPROPERTY() TArray<FMovieSceneSequenceID> Children;  // 0x0008, size 0x10
};
