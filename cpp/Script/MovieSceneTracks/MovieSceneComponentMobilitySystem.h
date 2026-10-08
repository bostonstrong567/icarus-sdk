// /Script/MovieSceneTracks.MovieSceneComponentMobilitySystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x220, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieSceneComponentMobilitySystem.h

UCLASS(MinimalAPI)
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem, public IMovieScenePreAnimatedStateSystemInterface
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UE::MovieScene::TOverlappingEntityTracker_BoundObject<enum EComponentMobility::Type> MobilityTracker;  // 0x0048, private
    UE::MovieScene::FEntityComponentFilter Filter;  // 0x01B0, private
    TArray<TTuple<USceneComponent *,enum EComponentMobility::Type>,TSizedDefaultAllocator<32> > PendingMobilitiesToRestore;  // 0x0210, private
};
