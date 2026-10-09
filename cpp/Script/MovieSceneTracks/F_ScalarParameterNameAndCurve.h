// /Script/MovieSceneTracks.ScalarParameterNameAndCurve
// size 0xA8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneParameterSection.h

USTRUCT()
struct FScalarParameterNameAndCurve
{
public:
    UPROPERTY() FName ParameterName;  // 0x0000, size 0x8
    UPROPERTY() FMovieSceneFloatChannel ParameterCurve;  // 0x0008, size 0xA0
};
