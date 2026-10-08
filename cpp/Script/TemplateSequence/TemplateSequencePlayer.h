// /Script/TemplateSequence.TemplateSequencePlayer
// Derives from: UMovieSceneSequencePlayer > UObject
// size 0x4F0, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Public/TemplateSequencePlayer.h

UCLASS()
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UWorld,FWeakObjectPtr> World;  // 0x04E8, private

    UFUNCTION(BlueprintCallable) static UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor);  // parameters 0x38
};
