// /Script/MovieSceneTracks.MovieSceneColorSectionTemplate
// size 0x2C0, declared in Engine/Source/Runtime/MovieSceneTracks/Private/Evaluation/MovieSceneColorTemplate.h

USTRUCT()
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
    UPROPERTY() FMovieSceneFloatChannel Curves;  // 0x0038, size 0xA0
    UPROPERTY() EMovieSceneBlendType BlendType;  // 0x02B8, size 0x1
};
