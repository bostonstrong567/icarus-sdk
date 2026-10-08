// /Script/MovieSceneTracks.MovieScenePropertySystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x58, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieScenePropertySystem.h

UCLASS(Abstract)
class UMovieScenePropertySystem : public UMovieSceneEntitySystem, public IMovieScenePreAnimatedStateSystemInterface
{
public:
    UPROPERTY() UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;  // 0x0048, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    UE::MovieScene::FCompositePropertyTypeID CompositePropertyID;  // 0x0050, protected
    UE::MovieScene::FPreAnimatedStorageID PreAnimatedStorageID;  // 0x0054, protected
};
