// /Script/MovieSceneTracks.ColorParameterNameAndCurves
// size 0x288, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneParameterSection.h

USTRUCT()
struct FColorParameterNameAndCurves
{
public:
    UPROPERTY() FName ParameterName;  // 0x0000, size 0x8
    UPROPERTY() FMovieSceneFloatChannel RedCurve;  // 0x0008, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel GreenCurve;  // 0x00A8, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel BlueCurve;  // 0x0148, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel AlphaCurve;  // 0x01E8, size 0xA0
};
