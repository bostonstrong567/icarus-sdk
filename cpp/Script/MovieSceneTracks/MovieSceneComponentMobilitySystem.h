// /Script/MovieSceneTracks.MovieSceneComponentMobilitySystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x220, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieSceneComponentMobilitySystem.h

UCLASS(MinimalAPI)
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem, public IMovieScenePreAnimatedStateSystemInterface
{
private:
    UE::MovieScene::TOverlappingEntityTracker_BoundObject<enum EComponentMobility::Type> MobilityTracker;  // 0x0048, not reflected
    UE::MovieScene::FEntityComponentFilter Filter;  // 0x01B0, not reflected
    TArray<TTuple<USceneComponent *,enum EComponentMobility::Type>,TSizedDefaultAllocator<32> > PendingMobilitiesToRestore;  // 0x0210, not reflected
};
