// /Script/MovieSceneTracks.MovieSceneCameraCutTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneCameraCutTrack.h

UCLASS(MinimalAPI)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() bool bCanBlend;  // 0x0090, size 0x1
private:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0098, size 0x10
};
