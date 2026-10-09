// /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// size 0xE0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Private/MovieScene/Parameters/MovieSceneNiagaraFloatParameterSectionTemplate.h

USTRUCT()
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneFloatChannel FloatChannel;  // 0x0040, size 0xA0
};
