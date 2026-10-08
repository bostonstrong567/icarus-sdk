// /Script/MovieScene.MovieSceneSequenceTickManager
// Derives from: UObject
// size 0xD0, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSequenceTickManager.h

UCLASS()
class UMovieSceneSequenceTickManager : public UObject
{
public:
    UPROPERTY(Transient) TArray<FMovieSceneSequenceActorPointers> SequenceActors;  // 0x0028, size 0x10
    UPROPERTY(Transient) UMovieSceneEntitySystemLinker* Linker;  // 0x0038, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FMovieSceneEntitySystemRunner Runner;  // 0x0040, private
    FDelegateHandle WorldTickDelegateHandle;  // 0x00B0, private
    FMovieSceneLatentActionManager LatentActionManager;  // 0x00B8, private
};
