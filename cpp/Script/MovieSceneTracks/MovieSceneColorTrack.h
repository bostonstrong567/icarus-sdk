// /Script/MovieSceneTracks.MovieSceneColorTrack
// Derives from: UMovieScenePropertyTrack > UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xC8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h

UCLASS(MinimalAPI)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Deprecated) bool bIsSlateColor;  // 0x00C0, size 0x1
};
