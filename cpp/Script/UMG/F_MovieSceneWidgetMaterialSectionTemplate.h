// /Script/UMG.MovieSceneWidgetMaterialSectionTemplate
// size 0x90, declared in Engine/Source/Runtime/UMG/Private/Animation/MovieSceneWidgetMaterialTemplate.h

USTRUCT()
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FName> BrushPropertyNamePath;  // 0x0080, size 0x10
};
