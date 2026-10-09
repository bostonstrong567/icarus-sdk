// /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// size 0xD0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Private/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterSectionTemplate.h

USTRUCT()
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneIntegerChannel IntegerChannel;  // 0x0040, size 0x90
};
