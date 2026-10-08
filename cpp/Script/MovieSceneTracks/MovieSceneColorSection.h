// /Script/MovieSceneTracks.MovieSceneColorSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x370, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h

UCLASS(MinimalAPI)
class UMovieSceneColorSection : public UMovieSceneSection, public IMovieSceneEntityProvider
{
public:
    UPROPERTY() FMovieSceneFloatChannel RedCurve;  // 0x00F0, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel GreenCurve;  // 0x0190, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel BlueCurve;  // 0x0230, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel AlphaCurve;  // 0x02D0, size 0xA0
};
