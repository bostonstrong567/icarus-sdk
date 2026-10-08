// /Script/Niagara.MovieSceneNiagaraTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/MovieScene/MovieSceneNiagaraTrack.h

UCLASS(Abstract, MinimalAPI)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0090, size 0x10
};
