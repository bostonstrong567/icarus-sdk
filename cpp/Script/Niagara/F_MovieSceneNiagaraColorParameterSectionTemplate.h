// /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// size 0x2C0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Private/MovieScene/Parameters/MovieSceneNiagaraColorParameterSectionTemplate.h

USTRUCT()
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    UPROPERTY() FMovieSceneFloatChannel RedChannel;  // 0x0040, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel GreenChannel;  // 0x00E0, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel BlueChannel;  // 0x0180, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel AlphaChannel;  // 0x0220, size 0xA0
};
