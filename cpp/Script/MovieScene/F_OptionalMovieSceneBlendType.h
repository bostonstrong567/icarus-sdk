// /Script/MovieScene.OptionalMovieSceneBlendType
// size 0x2, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h

USTRUCT()
struct FOptionalMovieSceneBlendType
{
public:
    UPROPERTY(BlueprintReadOnly) EMovieSceneBlendType BlendType;  // 0x0000, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bIsValid;  // 0x0001, size 0x1
};
