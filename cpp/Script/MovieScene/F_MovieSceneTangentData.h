// /Script/MovieScene.MovieSceneTangentData
// size 0x14, declared in Engine/Source/Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h

USTRUCT()
struct FMovieSceneTangentData
{
    UPROPERTY(EditAnywhere) float ArriveTangent;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float LeaveTangent;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float ArriveTangentWeight;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float LeaveTangentWeight;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;  // 0x0010, size 0x1
};
