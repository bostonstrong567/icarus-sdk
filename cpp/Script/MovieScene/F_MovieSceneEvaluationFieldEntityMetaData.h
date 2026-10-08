// /Script/MovieScene.MovieSceneEvaluationFieldEntityMetaData
// size 0x20, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h

USTRUCT()
struct FMovieSceneEvaluationFieldEntityMetaData
{
    UPROPERTY() FString OverrideBoundPropertyPath;  // 0x0000, size 0x10
    UPROPERTY() FFrameNumber ForcedTime;  // 0x0010, size 0x4
    UPROPERTY() ESectionEvaluationFlags Flags;  // 0x0018, size 0x1
    UPROPERTY() uint8 bEvaluateInSequencePreRoll : 1;  // 0x0019, mask 0x01
    UPROPERTY() uint8 bEvaluateInSequencePostRoll : 1;  // 0x0019, mask 0x02

    // Not reflected:
    UE::MovieScene::FInterrogationChannel InterrogationChannel;  // 0x0014
};
