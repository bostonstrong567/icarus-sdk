// /Script/MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x98, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieSceneMotionVectorSimulationSystem.h

UCLASS()
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{
private:
    TMultiMap<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1> > TransformData;  // 0x0040, not reflected
    bool bPreserveTransforms;  // 0x0090, not reflected
    bool bSimulationEnabled;  // 0x0091, not reflected
    bool bSimulateTransformsRequested;  // 0x0092, not reflected
};
