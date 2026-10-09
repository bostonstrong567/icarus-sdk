// /Script/MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x1A8, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Systems/MovieSceneLevelVisibilitySystem.h

UCLASS(MinimalAPI)
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem, public IMovieScenePreAnimatedStateSystemInterface
{
private:
    UE::MovieScene::FCachedEntityFilterResult_Match ApplicableFilter;  // 0x0048, not reflected
    UE::MovieScene::FMovieSceneLevelStreamingSharedData SharedData;  // 0x00B8, not reflected
};
