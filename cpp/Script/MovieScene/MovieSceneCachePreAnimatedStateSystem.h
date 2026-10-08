// /Script/MovieScene.MovieSceneCachePreAnimatedStateSystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x60, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieScenePreAnimatedStateSystem.h

UCLASS(MinimalAPI)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UE::MovieScene::FPreAnimatedStateExtensionReference PreAnimatedStateRef;  // 0x0040, private
};
