// /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Private/MovieScene/Parameters/MovieSceneNiagaraParameterSectionTemplate.h

USTRUCT()
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FNiagaraVariable Parameter;  // 0x0020, size 0x20
};
