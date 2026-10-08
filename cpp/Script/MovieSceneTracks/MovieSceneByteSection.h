// /Script/MovieSceneTracks.MovieSceneByteSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x188, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneByteSection.h

UCLASS(MinimalAPI)
class UMovieSceneByteSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
public:
    UPROPERTY() FMovieSceneByteChannel ByteCurve;  // 0x00F0, size 0x98
};
