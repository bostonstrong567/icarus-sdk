// /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// size 0xD0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Private/MovieScene/Parameters/MovieSceneNiagaraBoolParameterSectionTemplate.h

USTRUCT()
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FMovieSceneBoolChannel BoolChannel;  // 0x0040, size 0x90
};
