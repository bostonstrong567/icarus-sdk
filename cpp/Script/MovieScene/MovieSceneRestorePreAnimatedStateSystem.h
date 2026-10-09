// /Script/MovieScene.MovieSceneRestorePreAnimatedStateSystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x50, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieScenePreAnimatedStateSystem.h

UCLASS(MinimalAPI)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
private:
    TSharedPtr<UE::MovieScene::FPreAnimatedStateExtension,0> PreAnimatedStateRef;  // 0x0040, not reflected
};
