// /Script/MovieScene.MovieSceneTrackInstanceInstantiator
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0xF0, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h

UCLASS()
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
private:
    TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator> TrackInstances;  // 0x0040, not reflected
    TMultiMap<UObject *,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,int,1> > BoundObjectToInstances;  // 0x0078, not reflected
    TBitArray<FDefaultBitArrayAllocator> InvalidatedOutputs;  // 0x00C8, not reflected
    int32 ChildInitializerIndex;  // 0x00E8, not reflected
};
