// /Script/MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x98, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieSceneMotionVectorSimulationSystem.h

UCLASS()
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMultiMap<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1> > TransformData;  // 0x0040, private
    bool bPreserveTransforms;  // 0x0090, private
    bool bSimulationEnabled;  // 0x0091, private
    bool bSimulateTransformsRequested;  // 0x0092, private
};
