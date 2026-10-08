// /Script/MovieSceneTracks.MovieSceneFadeSectionTemplate
// size 0xD8, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneFadeTemplate.h

USTRUCT()
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
    UPROPERTY() FMovieSceneFloatChannel FadeCurve;  // 0x0020, size 0xA0
    UPROPERTY() FLinearColor FadeColor;  // 0x00C0, size 0x10
    UPROPERTY() uint8 bFadeAudio : 1;  // 0x00D0, mask 0x01
};
