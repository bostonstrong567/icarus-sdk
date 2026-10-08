// /Script/MovieSceneTracks.MovieSceneFadeSection
// Derives from: UMovieSceneSection > UMovieSceneSignedObject > UObject
// size 0x1A0, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneFadeSection.h

UCLASS(MinimalAPI)
class UMovieSceneFadeSection : public UMovieSceneSection
{
public:
    UPROPERTY() FMovieSceneFloatChannel FloatCurve;  // 0x00E8, size 0xA0
    UPROPERTY(EditAnywhere) FLinearColor FadeColor;  // 0x0188, size 0x10
    UPROPERTY(EditAnywhere) uint8 bFadeAudio : 1;  // 0x0198, mask 0x01
};
