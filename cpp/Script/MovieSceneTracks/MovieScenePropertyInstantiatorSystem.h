// /Script/MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0x248, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Systems/MovieScenePropertyInstantiator.h

UCLASS()
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator> ResolvedProperties;  // 0x0040, private
    TMultiMap<int,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FMovieSceneEntityID,1> > Contributors;  // 0x0078, private
    TMultiMap<int,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MovieScene::FMovieSceneEntityID,1> > NewContributors;  // 0x00C8, private
    TMap<UE::MovieScene::FMovieSceneEntityID,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,int,0> > EntityToProperty;  // 0x0118, private
    TMap<TTuple<UObject *,FName>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UObject *,FName>,int,0> > ObjectPropertyToResolvedIndex;  // 0x0168, private
    TArray<UE::MovieScene::FPropertyStats,TSizedDefaultAllocator<32> > PropertyStats;  // 0x01B8, private
    UE::MovieScene::FComponentMask CleanFastPathMask;  // 0x01C8, private
    TBitArray<FDefaultBitArrayAllocator> InitializePropertyMetaDataTasks;  // 0x01F0, private
    TBitArray<FDefaultBitArrayAllocator> SaveGlobalStateTasks;  // 0x0210, private
    UE::MovieScene::FBuiltInComponentTypes * BuiltInComponents;  // 0x0230, private
    UE::MovieScene::FPropertyRecomposerImpl RecomposerImpl;  // 0x0238, private
};
