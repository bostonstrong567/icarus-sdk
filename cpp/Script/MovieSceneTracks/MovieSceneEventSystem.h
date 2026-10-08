// /Script/MovieSceneTracks.MovieSceneEventSystem
// Derives from: UMovieSceneEntitySystem > UObject
// size 0x90, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieSceneEventSystems.h

UCLASS()
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMap<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInstanceHandle,TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32> >,0> > EventsByRoot;  // 0x0040, private
};
