// /Script/MovieSceneTracks.MovieScenePropertySystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x58, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieScenePropertySystem.h

UCLASS(Abstract)
class UMovieScenePropertySystem : public UMovieSceneEntitySystem, public IMovieScenePreAnimatedStateSystemInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;  // 0x0048, size 0x8
    UE::MovieScene::FCompositePropertyTypeID CompositePropertyID;  // 0x0050, not reflected
    UE::MovieScene::FPreAnimatedStorageID PreAnimatedStorageID;  // 0x0054, not reflected
};
