// /Script/MovieScene.MovieSceneSequenceTickManager
// Derives from: UObject
// size 0xD0, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSequenceTickManager.h

UCLASS()
class UMovieSceneSequenceTickManager : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) TArray<FMovieSceneSequenceActorPointers> SequenceActors;  // 0x0028, size 0x10
    UPROPERTY(Transient) UMovieSceneEntitySystemLinker* Linker;  // 0x0038, size 0x8
    FMovieSceneEntitySystemRunner Runner;  // 0x0040, not reflected
    FDelegateHandle WorldTickDelegateHandle;  // 0x00B0, not reflected
    FMovieSceneLatentActionManager LatentActionManager;  // 0x00B8, not reflected
};
