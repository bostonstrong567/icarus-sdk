// /Script/MovieScene.MovieSceneSequence
// Derives from: UMovieSceneSignedObject > UObject
// size 0x60, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSequence.h

UCLASS(Abstract, MinimalAPI, Config=Engine)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
    UPROPERTY(Instanced) UMovieSceneCompiledData* CompiledData;  // 0x0050, size 0x8
    UPROPERTY(Config) EMovieSceneCompletionMode DefaultCompletionMode;  // 0x0058, size 0x1
    UPROPERTY() bool bParentContextsAreSignificant;  // 0x0059, size 0x1
    UPROPERTY() bool bPlayableDirectly;  // 0x005A, size 0x1
    UPROPERTY() EMovieSceneSequenceFlags SequenceFlags;  // 0x005B, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName) const;  // parameters 0x18

    // Virtual functions that start here:
    //   AllowsSpawnableObjects, BindPossessableObject, CanAnimateObject, CanPossessObject
    //   CanRebindPossessable, CreateDirectorInstance, CreatePossessable, CreateSpawnable
    //   GatherExpiredObjects, GetMovieScene, GetParentObject, LocateBoundObjects
    //   MakeSpawnableTemplateFromInstance, OverrideNetworkMask, UnbindInvalidObjects, UnbindObjects
    //   UnbindPossessableObjects
};
