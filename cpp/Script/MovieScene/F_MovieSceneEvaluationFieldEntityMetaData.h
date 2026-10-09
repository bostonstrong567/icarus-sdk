// /Script/MovieScene.MovieSceneEvaluationFieldEntityMetaData
// size 0x20, declared in Engine/Source/Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h

USTRUCT()
struct FMovieSceneEvaluationFieldEntityMetaData
{
public:
    UPROPERTY() FString OverrideBoundPropertyPath;  // 0x0000, size 0x10
    UPROPERTY() FFrameNumber ForcedTime;  // 0x0010, size 0x4
    UE::MovieScene::FInterrogationChannel InterrogationChannel;  // 0x0014, not reflected
    UPROPERTY() ESectionEvaluationFlags Flags;  // 0x0018, size 0x1
    UPROPERTY() uint8 bEvaluateInSequencePreRoll : 1;  // 0x0019, mask 0x01
    UPROPERTY() uint8 bEvaluateInSequencePostRoll : 1;  // 0x0019, mask 0x02
};
