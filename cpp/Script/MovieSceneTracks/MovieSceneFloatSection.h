// /Script/MovieSceneTracks.MovieSceneFloatSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x190, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneFloatSection.h

UCLASS(MinimalAPI)
class UMovieSceneFloatSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
public:
    UPROPERTY() FMovieSceneFloatChannel FloatCurve;  // 0x00F0, size 0xA0
};
