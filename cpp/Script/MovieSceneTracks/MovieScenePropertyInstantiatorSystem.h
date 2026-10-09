// /Script/MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x248, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieScenePropertyInstantiator.h

UCLASS()
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
private:
    TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator> ResolvedProperties;  // 0x0040, not reflected
    TMultiMap<int,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FMovieSceneEntityID,1> > Contributors;  // 0x0078, not reflected
    TMultiMap<int,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FMovieSceneEntityID,1> > NewContributors;  // 0x00C8, not reflected
    TMap<UE::MovieScene::FMovieSceneEntityID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,int,0> > EntityToProperty;  // 0x0118, not reflected
    TMap<TTuple<UObject *,FName>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UObject *,FName>,int,0> > ObjectPropertyToResolvedIndex;  // 0x0168, not reflected
    TArray<UE::MovieScene::FPropertyStats,TSizedDefaultAllocator<32> > PropertyStats;  // 0x01B8, not reflected
    UE::MovieScene::FComponentMask CleanFastPathMask;  // 0x01C8, not reflected
    TBitArray<FDefaultBitArrayAllocator> InitializePropertyMetaDataTasks;  // 0x01F0, not reflected
    TBitArray<FDefaultBitArrayAllocator> SaveGlobalStateTasks;  // 0x0210, not reflected
    UE::MovieScene::FBuiltInComponentTypes * BuiltInComponents;  // 0x0230, not reflected
    UE::MovieScene::FPropertyRecomposerImpl RecomposerImpl;  // 0x0238, not reflected
};
