// /Script/MovieSceneTracks.VectorParameterNameAndCurves
// size 0x1E8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneParameterSection.h

USTRUCT()
struct FVectorParameterNameAndCurves
{
    UPROPERTY() FName ParameterName;  // 0x0000, size 0x8
    UPROPERTY() FMovieSceneFloatChannel XCurve;  // 0x0008, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel YCurve;  // 0x00A8, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel ZCurve;  // 0x0148, size 0xA0
};
