// /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// size 0x2C8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Private/MovieScene/Parameters/MovieSceneNiagaraVectorParameterSectionTemplate.h

USTRUCT()
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    UPROPERTY() FMovieSceneFloatChannel VectorChannels;  // 0x0040, size 0xA0
    UPROPERTY() int32 ChannelsUsed;  // 0x02C0, size 0x4
};
