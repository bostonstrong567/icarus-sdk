// /Script/MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
// Derives from: UMovieSceneBlenderSystem > UMovieSceneEntitySystem > UObject
// size 0x90, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieScenePiecewiseBoolBlenderSystem.h

UCLASS()
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{
private:
    UE::MovieScene::TSimpleBlenderSystemImpl<bool> Impl;  // 0x0068, not reflected
};
