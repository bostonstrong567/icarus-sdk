// /Script/Niagara.MovieSceneNiagaraParameterTrack
// Derives from: UMovieSceneNiagaraTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xC0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/MovieScene/Parameters/MovieSceneNiagaraParameterTrack.h

UCLASS(Abstract, MinimalAPI)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
    UPROPERTY() FNiagaraVariable Parameter;  // 0x00A0, size 0x20

    // Virtual functions that start here:
    //   SetSectionChannelDefaults
};
