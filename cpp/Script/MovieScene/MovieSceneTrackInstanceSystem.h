// /Script/MovieScene.MovieSceneTrackInstanceSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x48, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h

UCLASS()
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
    UPROPERTY() UMovieSceneTrackInstanceInstantiator* Instantiator;  // 0x0040, size 0x8
};
