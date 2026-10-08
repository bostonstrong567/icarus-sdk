// /Script/MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// Derives from: UMovieSceneBlenderSystem > UMovieSceneEntitySystem > UObject
// size 0x128, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieScenePiecewiseFloatBlenderSystem.h

UCLASS()
class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem, public IMovieSceneFloatDecomposer
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UE::MovieScene::FAccumulationBuffers AccumulationBuffers;  // 0x0070, private
    UE::MovieScene::FComponentMask BlendedResultMask;  // 0x00B0, private
    UE::MovieScene::FComponentMask BlendedPropertyMask;  // 0x00D8, private
    UE::MovieScene::FCachedEntityManagerState ChannelRelevancyCache;  // 0x0100, private
    TBitArray<FDefaultBitArrayAllocator> CachedRelevantProperties;  // 0x0108, private
};
