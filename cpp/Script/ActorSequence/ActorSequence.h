// /Script/ActorSequence.ActorSequence
// Derives from: UMovieSceneSequence > UMovieSceneSignedObject > UObject
// size 0x88, declared in Engine/Plugins/MovieScene/ActorSequence/Source/ActorSequence/Public/ActorSequence.h

UCLASS(Config=Engine)
class UActorSequence : public UMovieSceneSequence
{
public:
    UPROPERTY(Instanced) UMovieScene* MovieScene;  // 0x0060, size 0x8
    UPROPERTY() FActorSequenceObjectReferenceMap ObjectReferences;  // 0x0068, size 0x20
};
