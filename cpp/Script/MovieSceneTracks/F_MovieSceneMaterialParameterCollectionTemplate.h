// /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// size 0x88, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneMaterialParameterCollectionTemplate.h

USTRUCT()
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UMaterialParameterCollection* MPC;  // 0x0080, size 0x8
};
