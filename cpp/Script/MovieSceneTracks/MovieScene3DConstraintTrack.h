// /Script/MovieSceneTracks.MovieScene3DConstraintTrack
// Derives from: UMovieSceneTrack > UMovieSceneSignedObject > UObject
// size 0xA0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Tracks/MovieScene3DConstraintTrack.h

UCLASS(MinimalAPI)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
    UPROPERTY() TArray<UMovieSceneSection*> ConstraintSections;  // 0x0090, size 0x10

    // Virtual functions that start here:
    //   AddConstraint
};
