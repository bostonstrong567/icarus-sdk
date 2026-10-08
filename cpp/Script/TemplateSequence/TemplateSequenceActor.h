// /Script/TemplateSequence.TemplateSequenceActor
// Derives from: AActor > UObject
// size 0x278, declared in Engine/Plugins/MovieScene/TemplateSequence/Source/TemplateSequence/Public/TemplateSequenceActor.h

UCLASS(Config=Engine)
class ATemplateSequenceActor : public AActor, public IMovieSceneSequenceActor, public IMovieScenePlaybackClient
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0x0230, size 0x14
    UPROPERTY(Replicated, Transient, Instanced, BlueprintReadOnly) UTemplateSequencePlayer* SequencePlayer;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSoftObjectPath TemplateSequence;  // 0x0250, size 0x18
    UPROPERTY(BlueprintReadOnly) FTemplateSequenceBindingOverrideData BindingOverride;  // 0x0268, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintPure) UTemplateSequence* GetSequence() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UTemplateSequencePlayer* GetSequencePlayer() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UTemplateSequence* LoadSequence() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBinding(AActor* Actor, bool bOverridesDefault);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetSequence(UTemplateSequence* InSequence);  // parameters 0x8
};
