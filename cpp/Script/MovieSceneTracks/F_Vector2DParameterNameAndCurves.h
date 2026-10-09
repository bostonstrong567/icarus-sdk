// /Script/MovieSceneTracks.Vector2DParameterNameAndCurves
// size 0x148, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneParameterSection.h

USTRUCT()
struct FVector2DParameterNameAndCurves
{
public:
    UPROPERTY() FName ParameterName;  // 0x0000, size 0x8
    UPROPERTY() FMovieSceneFloatChannel XCurve;  // 0x0008, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel YCurve;  // 0x00A8, size 0xA0
};
