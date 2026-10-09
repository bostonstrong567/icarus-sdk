// /Script/MovieScene.MovieSceneTrackInstance
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstance.h

UCLASS(Transient)
class UMovieSceneTrackInstance : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UObject* AnimatedObject;  // 0x0028, size 0x8
    UPROPERTY() bool bIsMasterTrackInstance;  // 0x0030, size 0x1
    UPROPERTY() UMovieSceneEntitySystemLinker* Linker;  // 0x0038, size 0x8
    UPROPERTY() TArray<FMovieSceneTrackInstanceInput> Inputs;  // 0x0040, size 0x10

    // Virtual functions that start here:
    //   OnAnimate, OnBeginUpdateInputs, OnDestroyed, OnEndUpdateInputs, OnInitialize, OnInputAdded
    //   OnInputRemoved
};
