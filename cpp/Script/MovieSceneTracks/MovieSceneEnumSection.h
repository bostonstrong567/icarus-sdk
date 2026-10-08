// /Script/MovieSceneTracks.MovieSceneEnumSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x188, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneEnumSection.h

UCLASS(MinimalAPI)
class UMovieSceneEnumSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
public:
    UPROPERTY() FMovieSceneByteChannel EnumCurve;  // 0x00F0, size 0x98
};
