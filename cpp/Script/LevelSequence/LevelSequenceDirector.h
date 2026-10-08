// /Script/LevelSequence.LevelSequenceDirector
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequenceDirector.h

UCLASS()
class ULevelSequenceDirector : public UObject
{
public:
    UPROPERTY(BlueprintReadOnly) ULevelSequencePlayer* Player;  // 0x0028, size 0x8
    UPROPERTY() int32 SubSequenceID;  // 0x0030, size 0x4
    UPROPERTY() int32 MovieScenePlayerIndex;  // 0x0034, size 0x4

    UFUNCTION(BlueprintCallable) AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);  // parameters 0x28
    UFUNCTION(BlueprintCallable) UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);  // parameters 0x28
    UFUNCTION(BlueprintCallable) UMovieSceneSequence* GetSequence();  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnCreated();
};
