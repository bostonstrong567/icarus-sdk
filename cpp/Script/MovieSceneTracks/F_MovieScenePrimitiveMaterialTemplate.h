// /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// size 0xE8, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieScenePrimitiveMaterialTemplate.h

USTRUCT()
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{
    UPROPERTY() int32 MaterialIndex;  // 0x0020, size 0x4
    UPROPERTY() FMovieSceneObjectPathChannel MaterialChannel;  // 0x0028, size 0xC0
};
