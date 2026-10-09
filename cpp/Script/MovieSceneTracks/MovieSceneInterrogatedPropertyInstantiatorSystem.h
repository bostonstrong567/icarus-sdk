// /Script/MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x1E8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/EntitySystem/Interrogation/MovieSceneInterrogatedPropertyInstantiator.h

UCLASS()
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
private:
    UE::MovieScene::TOverlappingEntityTracker<UE::MovieScene::FInterrogationKey,UMovieSceneInterrogatedPropertyInstantiatorSystem::FPropertyInfo> PropertyTracker;  // 0x0040, not reflected
    UE::MovieScene::FComponentMask CleanFastPathMask;  // 0x01A8, not reflected
    UE::MovieScene::FBuiltInComponentTypes * BuiltInComponents;  // 0x01D0, not reflected
    UE::MovieScene::FPropertyRecomposerImpl RecomposerImpl;  // 0x01D8, not reflected
};
