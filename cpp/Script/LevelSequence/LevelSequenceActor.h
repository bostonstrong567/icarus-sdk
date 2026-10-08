// /Script/LevelSequence.LevelSequenceActor
// Derives from: AActor > UObject
// size 0x2A8, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequenceActor.h

UCLASS(Config=Engine)
class ALevelSequenceActor : public AActor, public IMovieSceneSequenceActor, public IMovieScenePlaybackClient, public IMovieSceneBindingOwnerInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0x0238, size 0x14
    UPROPERTY(Replicated, Transient, Instanced, BlueprintReadOnly) ULevelSequencePlayer* SequencePlayer;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSoftObjectPath LevelSequence;  // 0x0258, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLevelSequenceCameraSettings CameraSettings;  // 0x0270, size 0x2
    UPROPERTY(Instanced, BlueprintReadOnly) ULevelSequenceBurnInOptions* BurnInOptions;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UMovieSceneBindingOverrides* BindingOverrides;  // 0x0280, size 0x8
    UPROPERTY(Deprecated) uint8 bAutoPlay : 1;  // 0x0288, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverrideInstanceData : 1;  // 0x0288, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bReplicatePlayback : 1;  // 0x0288, mask 0x04
    UPROPERTY(Instanced, BlueprintReadWrite) UObject* DefaultInstanceData;  // 0x0290, size 0x8
    UPROPERTY(Instanced) ULevelSequenceBurnIn* BurnInInstance;  // 0x0298, size 0x8
    UPROPERTY() bool bShowBurnin;  // 0x02A0, size 0x1

    UFUNCTION(BlueprintCallable) void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);  // parameters 0x21
    UFUNCTION(BlueprintCallable) void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) FMovieSceneObjectBindingID FindNamedBinding(FName Tag) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) ULevelSequence* GetSequence() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) ULevelSequencePlayer* GetSequencePlayer() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HideBurnin();
    UFUNCTION(BlueprintCallable, BlueprintPure) ULevelSequence* LoadSequence() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void RemoveBindingByTag(FName Tag, AActor* Actor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ResetBinding(FMovieSceneObjectBindingID Binding);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ResetBindings();
    UFUNCTION(BlueprintCallable) void SetBinding(FMovieSceneObjectBindingID Binding, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);  // parameters 0x29
    UFUNCTION(BlueprintCallable) void SetBindingByTag(FName BindingTag, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SetReplicatePlayback(bool ReplicatePlayback);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSequence(ULevelSequence* InSequence);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowBurnin();
};
