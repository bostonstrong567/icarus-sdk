// /Script/MovieScene.MovieSceneCachePreAnimatedStateSystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x60, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieScenePreAnimatedStateSystem.h

UCLASS(MinimalAPI)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
private:
    UE::MovieScene::FPreAnimatedStateExtensionReference PreAnimatedStateRef;  // 0x0040, not reflected
};
