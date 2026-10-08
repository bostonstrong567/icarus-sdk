// /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0xF8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/MovieScene/MovieSceneNiagaraSystemSpawnSection.h

UCLASS(MinimalAPI)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:
    UPROPERTY(EditAnywhere) ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere) ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere) ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere) ENiagaraAgeUpdateMode AgeUpdateMode;  // 0x00F4, size 0x1
};
