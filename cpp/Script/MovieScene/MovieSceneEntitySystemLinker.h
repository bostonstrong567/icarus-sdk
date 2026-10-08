// /Script/MovieScene.MovieSceneEntitySystemLinker
// Derives from: UObject
// size 0x4F0, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h

UCLASS()
class UMovieSceneEntitySystemLinker : public UObject
{
public:
    UPROPERTY() FMovieSceneEntitySystemGraph SystemGraph;  // 0x0298, size 0x138

    // Not reflected: the engine's scripting cannot see these.
    UE::MovieScene::FEntityManager EntityManager;  // 0x0028
    TUniquePtr<UE::MovieScene::FInstanceRegistry,TDefaultDelete<UE::MovieScene::FInstanceRegistry> > InstanceRegistry;  // 0x03D0, private
    TSparseArray<UMovieSceneEntitySystem *,FDefaultSparseArrayAllocator> EntitySystemsByGlobalGraphID;  // 0x03D8, private
    TArray<UMovieSceneEntitySystemLinker::FActiveRunnerInfo,TSizedDefaultAllocator<32> > ActiveRunners;  // 0x0410, private
    TSparseArray<void *,FDefaultSparseArrayAllocator> ExtensionsByID;  // 0x0420, private
    UMovieSceneEntitySystemLinker::<unnamed-type-Events> Events;  // 0x0458
    uint64 LastSystemLinkVersion;  // 0x04D0, private
    TWeakPtr<bool,0> GlobalStateCaptureToken;  // 0x04D8, private
    UE::MovieScene::EAutoLinkRelevantSystems AutoLinkMode;  // 0x04E8, protected
    UE::MovieScene::EEntitySystemContext SystemContext;  // 0x04E9, protected
};
