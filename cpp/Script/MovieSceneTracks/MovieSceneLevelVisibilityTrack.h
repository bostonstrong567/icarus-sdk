// /Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Derives from: UMovieSceneNameableTrack > UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieSceneLevelVisibilityTrack.h

UCLASS(MinimalAPI)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<UMovieSceneSection*> Sections;  // 0x0090, size 0x10
};
