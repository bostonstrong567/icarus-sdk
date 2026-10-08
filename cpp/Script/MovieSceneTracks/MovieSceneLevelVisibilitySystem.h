// /Script/MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x1A8, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Systems/MovieSceneLevelVisibilitySystem.h

UCLASS(MinimalAPI)
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem, public IMovieScenePreAnimatedStateSystemInterface
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UE::MovieScene::FCachedEntityFilterResult_Match ApplicableFilter;  // 0x0048, private
    UE::MovieScene::FMovieSceneLevelStreamingSharedData SharedData;  // 0x00B8, private
};
