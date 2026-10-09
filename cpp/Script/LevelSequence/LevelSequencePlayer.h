// /Script/LevelSequence.LevelSequencePlayer
// Derives from: UMovieSceneSequencePlayer > UObject
// size 0x600, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequencePlayer.h

UCLASS()
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
    UPROPERTY(BlueprintAssignable) FOnLevelSequencePlayerCameraCutEvent OnCameraCut;  // 0x04E8, size 0x10
protected:
    FLevelSequenceSnapshotSettings SnapshotSettings;  // 0x0524, not reflected
    TOptional<int> SnapshotOffsetTime;  // 0x0530, not reflected
    TWeakObjectPtr<UCameraComponent,FWeakObjectPtr> CachedCameraComponent;  // 0x0538, not reflected
private:
    TWeakObjectPtr<UWorld,FWeakObjectPtr> World;  // 0x04F8, not reflected
    TWeakObjectPtr<ULevel,FWeakObjectPtr> Level;  // 0x0500, not reflected
    FName StreamedLevelAssetPath;  // 0x0508, not reflected
    FLevelSequenceCameraSettings CameraSettings;  // 0x0510, not reflected
    TWeakObjectPtr<AActor,FWeakObjectPtr> LastViewTarget;  // 0x0514, not reflected
    TOptional<enum EAspectRatioAxisConstraint> LastAspectRatioAxisConstraint;  // 0x051C, not reflected
    TOptional<FLevelSequencePlayerSnapshot> PreviousSnapshot;  // 0x0540, not reflected
public:
    UFUNCTION(BlueprintCallable) static ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) UCameraComponent* GetActiveCameraComponent() const;  // parameters 0x8
};
