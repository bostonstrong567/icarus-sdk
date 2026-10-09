// /Script/MovieSceneTracks.MovieScene3DConstraintTrack
// Derives from: UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieScene3DConstraintTrack.h

UCLASS(MinimalAPI)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<UMovieSceneSection*> ConstraintSections;  // 0x0090, size 0x10

    // Virtual functions that start here:
    //   AddConstraint
};
