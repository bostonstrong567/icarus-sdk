// /Script/MovieScene.MovieSceneSequenceTransform
// size 0x20, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h

USTRUCT()
struct FMovieSceneSequenceTransform
{
    UPROPERTY() FMovieSceneTimeTransform LinearTransform;  // 0x0000, size 0xC
    UPROPERTY() TArray<FMovieSceneNestedSequenceTransform> NestedTransforms;  // 0x0010, size 0x10
};
