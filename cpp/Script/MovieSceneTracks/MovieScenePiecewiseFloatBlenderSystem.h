// /Script/MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// Derives from: UMovieSceneBlenderSystem > UMovieSceneEntitySystem > UObject
// size 0x128, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieScenePiecewiseFloatBlenderSystem.h

UCLASS()
class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem, public IMovieSceneFloatDecomposer
{
private:
    UE::MovieScene::FAccumulationBuffers AccumulationBuffers;  // 0x0070, not reflected
    UE::MovieScene::FComponentMask BlendedResultMask;  // 0x00B0, not reflected
    UE::MovieScene::FComponentMask BlendedPropertyMask;  // 0x00D8, not reflected
    UE::MovieScene::FCachedEntityManagerState ChannelRelevancyCache;  // 0x0100, not reflected
    TBitArray<FDefaultBitArrayAllocator> CachedRelevantProperties;  // 0x0108, not reflected
};
