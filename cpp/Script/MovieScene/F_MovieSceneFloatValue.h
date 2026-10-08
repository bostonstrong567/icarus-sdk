// /Script/MovieScene.MovieSceneFloatValue
// size 0x1C, declared in Engine/Source/Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h

USTRUCT()
struct FMovieSceneFloatValue
{
    UPROPERTY(EditAnywhere) float Value;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) FMovieSceneTangentData Tangent;  // 0x0004, size 0x14
    UPROPERTY(EditAnywhere) TEnumAsByte<ERichCurveInterpMode> InterpMode;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ERichCurveTangentMode> TangentMode;  // 0x0019, size 0x1
    UPROPERTY() uint8 PaddingByte;  // 0x001A, size 0x1
};
