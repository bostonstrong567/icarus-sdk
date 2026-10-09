// /Script/MovieScene.MovieSceneEntitySystemLinker
// Derives from: UObject
// size 0x4F0, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h

UCLASS()
class UMovieSceneEntitySystemLinker : public UObject
{
public:
    UE::MovieScene::FEntityManager EntityManager;  // 0x0028, not reflected
    UPROPERTY() FMovieSceneEntitySystemGraph SystemGraph;  // 0x0298, size 0x138
    UMovieSceneEntitySystemLinker::<unnamed-type-Events> Events;  // 0x0458, not reflected
protected:
    UE::MovieScene::EAutoLinkRelevantSystems AutoLinkMode;  // 0x04E8, not reflected
    UE::MovieScene::EEntitySystemContext SystemContext;  // 0x04E9, not reflected
private:
    TUniquePtr<UE::MovieScene::FInstanceRegistry,TDefaultDelete<UE::MovieScene::FInstanceRegistry> > InstanceRegistry;  // 0x03D0, not reflected
    TSparseArray<UMovieSceneEntitySystem *,FDefaultSparseArrayAllocator> EntitySystemsByGlobalGraphID;  // 0x03D8, not reflected
    TArray<UMovieSceneEntitySystemLinker::FActiveRunnerInfo,TSizedDefaultAllocator<32> > ActiveRunners;  // 0x0410, not reflected
    TSparseArray<void *,FDefaultSparseArrayAllocator> ExtensionsByID;  // 0x0420, not reflected
    uint64 LastSystemLinkVersion;  // 0x04D0, not reflected
    TWeakPtr<bool,0> GlobalStateCaptureToken;  // 0x04D8, not reflected
};
