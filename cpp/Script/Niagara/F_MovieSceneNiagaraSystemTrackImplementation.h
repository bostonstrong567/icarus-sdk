// /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Private/MovieScene/MovieSceneNiagaraSystemTrackTemplate.h

USTRUCT()
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FFrameNumber SpawnSectionStartFrame;  // 0x0010, size 0x4
    UPROPERTY() FFrameNumber SpawnSectionEndFrame;  // 0x0014, size 0x4
    UPROPERTY() ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;  // 0x0018, size 0x4
    UPROPERTY() ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;  // 0x001C, size 0x4
    UPROPERTY() ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;  // 0x0020, size 0x4
    UPROPERTY() ENiagaraAgeUpdateMode AgeUpdateMode;  // 0x0024, size 0x1
};
