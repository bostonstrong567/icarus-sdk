// /Script/TemplateSequence.TemplateSequencePlayer
// Derives from: UMovieSceneSequencePlayer > UObject
// size 0x4F0, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Public/TemplateSequencePlayer.h

UCLASS()
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
private:
    TWeakObjectPtr<UWorld,FWeakObjectPtr> World;  // 0x04E8, not reflected
public:
    UFUNCTION(BlueprintCallable) static UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor);  // parameters 0x38
};
