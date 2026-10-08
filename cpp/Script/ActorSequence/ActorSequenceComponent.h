// /Script/ActorSequence.ActorSequenceComponent
// Derives from: UActorComponent > UObject
// size 0xD8, declared in Engine/Plugins/MovieScene/ActorSequence/Source/ActorSequence/Public/ActorSequenceComponent.h

UCLASS(Config=Engine)
class UActorSequenceComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere) FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0x00B0, size 0x14
    UPROPERTY(EditAnywhere, Instanced) UActorSequence* Sequence;  // 0x00C8, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UActorSequencePlayer* SequencePlayer;  // 0x00D0, size 0x8
};
