// /Script/MovieSceneTracks.TransformParameterNameAndCurves
// size 0x5A8, declared in Engine/Source/Runtime/MovieSceneTracks/Public/Sections/MovieSceneParameterSection.h

USTRUCT()
struct FTransformParameterNameAndCurves
{
public:
    UPROPERTY() FName ParameterName;  // 0x0000, size 0x8
    UPROPERTY() FMovieSceneFloatChannel Translation;  // 0x0008, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel Rotation;  // 0x01E8, size 0xA0
    UPROPERTY() FMovieSceneFloatChannel Scale;  // 0x03C8, size 0xA0
};
