// /Script/MovieScene.MovieSceneSequenceActorPointers
// size 0x18, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSequenceTickManager.h

USTRUCT()
struct FMovieSceneSequenceActorPointers
{
public:
    UPROPERTY() AActor* SequenceActor;  // 0x0000, size 0x8
    UPROPERTY() TScriptInterface<IMovieSceneSequenceActor> SequenceActorInterface;  // 0x0008, size 0x10
};
