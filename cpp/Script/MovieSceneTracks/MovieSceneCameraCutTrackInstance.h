// /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Derives from: UMovieSceneTrackInstance > UObject
// size 0xB8, declared in Engine/Source/Runtime/MovieSceneTracks/Private/TrackInstances/MovieSceneCameraCutTrackInstance.h

UCLASS(Transient)
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
private:
    UMovieSceneCameraCutTrackInstance::FCameraCutCache CameraCutCache;  // 0x0050, not reflected
    TMap<IMovieScenePlayer *,UMovieSceneCameraCutTrackInstance::FCameraCutUseData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IMovieScenePlayer *,UMovieSceneCameraCutTrackInstance::FCameraCutUseData,0> > PlayerUseCounts;  // 0x0058, not reflected
    TArray<UMovieSceneCameraCutTrackInstance::FCameraCutInputInfo,TSizedDefaultAllocator<32> > SortedInputInfos;  // 0x00A8, not reflected
};
