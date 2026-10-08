// /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Derives from: UMovieSceneTrackInstance > UObject
// size 0xB8, declared in Engine/Source/Runtime/MovieSceneTracks/Private/TrackInstances/MovieSceneCameraCutTrackInstance.h

UCLASS(Transient)
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UMovieSceneCameraCutTrackInstance::FCameraCutCache CameraCutCache;  // 0x0050, private
    TMap<IMovieScenePlayer *,UMovieSceneCameraCutTrackInstance::FCameraCutUseData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IMovieScenePlayer *,UMovieSceneCameraCutTrackInstance::FCameraCutUseData,0> > PlayerUseCounts;  // 0x0058, private
    TArray<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,TSizedDefaultAllocator<32> > SortedInputInfos;  // 0x00A8, private
};
