// /Script/MovieScene.MovieSceneTrackInstanceInstantiator
// Derives from: UMovieSceneEntityInstantiatorSystem > UMovieSceneEntitySystem > UObject
// size 0xF0, declared in Engine/Source/Runtime/MovieScene/Public/EntitySystem/TrackInstance/MovieSceneTrackInstanceSystem.h

UCLASS()
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSparseArray<FMovieSceneTrackInstanceEntry,FDefaultSparseArrayAllocator> TrackInstances;  // 0x0040, private
    TMultiMap<UObject *,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,int,1> > BoundObjectToInstances;  // 0x0078, private
    TBitArray<FDefaultBitArrayAllocator> InvalidatedOutputs;  // 0x00C8, private
    int32 ChildInitializerIndex;  // 0x00E8, private
};
