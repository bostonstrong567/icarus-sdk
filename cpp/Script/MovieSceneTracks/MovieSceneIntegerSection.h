// /Script/MovieSceneTracks.MovieSceneIntegerSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x180, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneIntegerSection.h

UCLASS(MinimalAPI)
class UMovieSceneIntegerSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
public:
    UPROPERTY() FMovieSceneIntegerChannel IntegerCurve;  // 0x00F0, size 0x90
};
