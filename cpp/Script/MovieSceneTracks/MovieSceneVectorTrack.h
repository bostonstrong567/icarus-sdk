// /Script/MovieSceneTracks.MovieSceneVectorTrack
// Derives from: UMovieScenePropertyTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xC8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneVectorTrack.h

UCLASS(MinimalAPI)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() int32 NumChannelsUsed;  // 0x00C0, size 0x4
};
