// /Script/MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x90, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/WeightAndEasingEvaluatorSystem.h

UCLASS()
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
private:
    TMap<UE::MovieScene::FInstanceHandle,unsigned short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,unsigned short,0> > InstanceHandleToEasingChannel;  // 0x0040, not reflected
};
