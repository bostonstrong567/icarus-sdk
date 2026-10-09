// /Script/MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
// Derives from: UMovieSceneBlenderSystem > UMovieSceneEntitySystem > UObject
// size 0xB0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieScenePiecewiseIntegerBlenderSystem.h

UCLASS()
class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{
private:
    UE::MovieScene::FIntegerAccumulationBuffers AccumulationBuffers;  // 0x0068, not reflected
    UE::MovieScene::FCachedEntityManagerState ChannelRelevancyCache;  // 0x00A8, not reflected
};
