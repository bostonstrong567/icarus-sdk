// /Script/MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// size 0x88, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Evaluation/MovieSceneParameterTemplate.h

USTRUCT()
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() int32 MaterialIndex;  // 0x0080, size 0x4
};
