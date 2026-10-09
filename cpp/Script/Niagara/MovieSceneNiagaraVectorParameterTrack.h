// /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
// Derives from: UMovieSceneNiagaraParameterTrack > UMovieSceneNiagaraTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xD0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/MovieScene/Parameters/MovieSceneNiagaraVectorParameterTrack.h

UCLASS(MinimalAPI)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack, public IMovieSceneTrackTemplateProducer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() int32 ChannelsUsed;  // 0x00C8, size 0x4
};
