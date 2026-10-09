// /Script/MovieScene.MovieSceneTrackInstanceSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x48, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h

UCLASS()
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UMovieSceneTrackInstanceInstantiator* Instantiator;  // 0x0040, size 0x8
};
