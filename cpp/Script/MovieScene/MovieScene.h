// /Script/MovieScene.MovieScene
// Derives from: UMovieSceneSignedObject > UObject
// size 0x148, declared in Engine/Source/Runtime/MovieScene/Public/MovieScene.h

UCLASS()
class UMovieScene : public UMovieSceneSignedObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<FMovieSceneSpawnable> Spawnables;  // 0x0050, size 0x10
    UPROPERTY() TArray<FMovieScenePossessable> Possessables;  // 0x0060, size 0x10
    UPROPERTY() TArray<FMovieSceneBinding> ObjectBindings;  // 0x0070, size 0x10
    UPROPERTY() TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups;  // 0x0080, size 0x50
    UPROPERTY() TArray<UMovieSceneTrack*> MasterTracks;  // 0x00D0, size 0x10
    UPROPERTY(Instanced) UMovieSceneTrack* CameraCutTrack;  // 0x00E0, size 0x8
    UPROPERTY() FMovieSceneFrameRange SelectionRange;  // 0x00E8, size 0x10
    UPROPERTY() FMovieSceneFrameRange PlaybackRange;  // 0x00F8, size 0x10
    UPROPERTY() FFrameRate TickResolution;  // 0x0108, size 0x8
    UPROPERTY() FFrameRate DisplayRate;  // 0x0110, size 0x8
    UPROPERTY() EMovieSceneEvaluationType EvaluationType;  // 0x0118, size 0x1
    UPROPERTY() EUpdateClockSource ClockSource;  // 0x0119, size 0x1
    UPROPERTY() FSoftObjectPath CustomClockSourcePath;  // 0x0120, size 0x18
    UPROPERTY() TArray<FMovieSceneMarkedFrame> MarkedFrames;  // 0x0138, size 0x10
};
