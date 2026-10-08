// /Script/LevelSequence.LevelSequencePlayer
// Derives from: UMovieSceneSequencePlayer > UObject
// size 0x600, declared in Engine/Source/Runtime/LevelSequence/Public/LevelSequencePlayer.h

UCLASS()
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
    UPROPERTY(BlueprintAssignable) FOnLevelSequencePlayerCameraCutEvent OnCameraCut;  // 0x04E8, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UWorld,FWeakObjectPtr> World;  // 0x04F8, private
    TWeakObjectPtr<ULevel,FWeakObjectPtr> Level;  // 0x0500, private
    FName StreamedLevelAssetPath;  // 0x0508, private
    FLevelSequenceCameraSettings CameraSettings;  // 0x0510, private
    TWeakObjectPtr<AActor,FWeakObjectPtr> LastViewTarget;  // 0x0514, private
    TOptional<enum EAspectRatioAxisConstraint> LastAspectRatioAxisConstraint;  // 0x051C, private
    FLevelSequenceSnapshotSettings SnapshotSettings;  // 0x0524, protected
    TOptional<int> SnapshotOffsetTime;  // 0x0530, protected
    TWeakObjectPtr<UCameraComponent,FWeakObjectPtr> CachedCameraComponent;  // 0x0538, protected
    TOptional<FLevelSequencePlayerSnapshot> PreviousSnapshot;  // 0x0540, private

    UFUNCTION(BlueprintCallable) static ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) UCameraComponent* GetActiveCameraComponent() const;  // parameters 0x8
};
